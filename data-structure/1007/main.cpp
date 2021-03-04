//
//  main.cpp
//  1007
//
//  Created by mark on 2021/3/4.
//  Copyright © 2021 xihe. All rights reserved.
// dn = pn+1 - pn 第 n+1 个素数 d1 = p2 - p1 相邻且差为 2 的素数

#include <iostream>
#include <math.h>
using namespace::std;

//从 2-根号num 都没有可以找到整除的对象 则为 素数
bool primeNumber(int num) {
    int i = 2;
    int k = (int)sqrt((double)num);
    while (i <= k) {
        if (num % i == 0)
            break;
        i++;
    }
    if (i > k)
        return true;
    else
        return false;
}

int main(int argc, const char * argv[]) {
    int N, front = 2, count = 0;
    scanf("%d",&N);
    
    for (int i = 2; i <= N; i++) {
        if (primeNumber(i)) {
            if (i - front == 2) {
                count++;
            }
            front = i;
        }
    }
    printf("%d\n",count);
    
    return 0;
}
