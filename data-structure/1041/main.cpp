//
//  main.cpp
//  1041
//
//  Created by mark on 2020/12/8.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

const int maxn = 1001;
struct Student {
    long long id;
    int examseat;
} testSeat[maxn];

int main() {
    int n, m, seat, examSeat;
    long long Id;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lld %d %d",&Id,&seat,&examSeat);
        testSeat[seat].id = Id;
        testSeat[seat].examseat = examSeat;
    }
    
    scanf("%d",&m);
    int target;
    for (int i = 0; i < m; i++) {
        scanf("%d", &target);
        printf("%lld %d\n",testSeat[target].id, testSeat[target].examseat);
    }
}
