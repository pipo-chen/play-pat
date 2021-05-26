//
//  main.cpp
//  A1025
//
//  Created by mark on 2021/5/26.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace :: std;

struct Testee {
    char registration_number[15]; //考虑整型溢出
    int final_rank;
    int local_rank;
    int location_number;
    int score;
}testees[30010];
int cmp(Testee a, Testee b) {
    if (a.score != b.score)
        return a.score > b.score;
    return strcmp(a.registration_number, b.registration_number) < 0;
}

int main(int argc, const char * argv[]) {
    int n, k;
    scanf("%d",&n);
    int count = 0;
    for (int i = 1; i <= n; i++) {
        scanf("%d",&k);
        int flag = count;
        for (int j = 0; j < k; j++) {
            scanf("%s %d",testees[count].registration_number, &testees[count].score);
            testees[count].location_number = i;
            count++;
        }
        //开始处理当地排名
        sort(testees + flag, testees+count, cmp);
        for (int i = flag; i < count; i++) {
            if (i == flag)
                testees[i].local_rank = i + 1 - flag;
            if (i > flag) {
                if (testees[i].score == testees[i-1].score)
                    testees[i].local_rank = testees[i-1].local_rank;
                else
                    testees[i].local_rank = i + 1 - flag;
            }
        }
    }
    //开始处理整体的排名
    sort(testees, testees + count, cmp);
    for (int i = 0; i < count; i++) {
        if (i == 0) {
            testees[i].final_rank = i + 1;
        }
        else {
            if (testees[i].score == testees[i-1].score) {
                testees[i].final_rank = testees[i-1].final_rank;
            }
            else {
                testees[i].final_rank = i + 1;
            }
        }
    }
    
    printf("%d\n",count);
    for (int i = 0; i < count; i++) {
        printf("%s %d %d %d\n",testees[i].registration_number, testees[i].final_rank, testees[i].location_number, testees[i].local_rank);
    }
    
    return 0;
}
