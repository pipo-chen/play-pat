//
//  main.cpp
//  1015
//
//  Created by mark on 2021/5/27.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace::std;

struct Man {
    long id_number;
    int talent;
    int virtue;
    int rank;
    int total_grade;
}man[100010];

bool cmp(Man a, Man b) {
    if (a.rank != b.rank)
        return a.rank < b.rank;
    if (a.total_grade != b.total_grade)
        return a.total_grade > b.total_grade;
    if (a.virtue != b.virtue)
        return a.virtue > b.virtue;
    return a.id_number < b.id_number;
}

int main(int argc, const char * argv[]) {
    int N, L, H, count = 0;
    scanf("%d %d %d",&N, &L, &H);

    for (int i = 0; i < N; i++) {
        scanf("%ld %d %d",&man[count].id_number, &man[count].virtue, &man[count].talent);
        
        if (man[count].virtue >= L && man[count].talent >= L) {
            //开始处理等级
            man[count].total_grade = man[count].talent + man[count].virtue;
            if (man[count].virtue >= H && man[count].talent >= H)
                man[count].rank = 1;
            else if (man[count].virtue >= H && man[count].talent < H)
                man[count].rank = 2;
            else if (man[count].virtue < H && man[count].talent < H && man[count].virtue >= man[count].talent)
                man[count].rank = 3;
            else
                man[count].rank = 4;
            count++;
        }
    }
    sort(man, man + count, cmp);
    printf("%d\n",count);
    for (int i = 0; i < count; i++) {
        printf("%ld %d %d\n",man[i].id_number, man[i].virtue, man[i].talent);
    }
    
    return 0;
}
