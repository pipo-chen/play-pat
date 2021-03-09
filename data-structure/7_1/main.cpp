//
//  main.cpp
//  7_1
//
//  Created by mark on 2021/3/9.
//  Copyright © 2021 xihe. All rights reserved.
//
/*
 The Fibonacci sequence F
 f0 = 0
 f1 = 1
 ..
 Your job is to find the closest Fibonacci number for any given N.
 */

#include <iostream>
using namespace::std;


int main(int argc, const char * argv[]) {
    
    long N;
    scanf("%ld",&N);
    //计算 这个和 小于的情况

    long n1 = 0;
    long n2 = 1;
    long f = n1 + n2, sum = f;
    
    while (sum < N ) {
        f = n1 + n2;
        n1 = n2;
        n2 = f;
        sum = f;
    }

    if (sum >= N) {
        long diff_1 = N - n1;
        long diff_2 = sum - N;
        if (diff_1 <= diff_2)
            printf("%ld",n1);
        else
            printf("%ld",sum);
    
    }
    return 0;
    
}
