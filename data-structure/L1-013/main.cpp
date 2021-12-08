//
//  main.cpp
//  L1-013
//
//  Created by zihan on 2021/12/8.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    int mul = 1,sum = 0;
    for (int i = 1; i <= n; i++) {
        // 当前阶乘结果 = 前一个阶乘结果 乘以 当前数字
        mul = mul * i;
        sum += mul;
    }
    printf("%d\n",sum);
    
    return 0;
}
