//
//  main.cpp
//  1055
//
//  Created by mark on 2021/3/6.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace :: std;

struct Person {
    char name[8];
    int height;
};
bool cmp(Person a, Person b) {
    return a.height > b.height;
}

int main(int argc, const char * argv[]) {
    int N, K;
    scanf("%d %d", &N, &K);
    Person persons[N];
    Person person_sort[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%s %d",persons[i].name, &persons[i].height);
    }
    sort(persons, persons+N, cmp);

    //倒序输出 joe tom nick bob 6 7 8 9名输出  几名 4
    int turn = 0, until = 0, begin = 0, first = N - N / K * (K - 1), total = 0;
    while (turn < K) {
        begin = turn == 0 ? 0 : first + K * turn;
        total = turn == 0 ? first : K;
        until += total;
        
        int index = 0;
        while (begin < until) {
            person_sort[index++] = persons[begin];
            begin++;
        }
        //每一组 进行这样的排序
        int left = 0;
        int right = index - 1;
        Person line[index];
        int k = index - 1;
        while (left <= right) {
            if (k % 2 != 0)
                line[left++] = person_sort[k];
            else
                line[right--] = person_sort[k];
            k--;
        }
        
        for (int i = 0; i < index; i++) {
            printf("%s",line[i].name);
            if (i != index - 1)
                printf(" ");
        }
        printf("\n");
        
        turn++;
    }
    
    
    
    
    return 0;
}
