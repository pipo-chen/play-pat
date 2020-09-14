//
//  main.cpp
//  1_1
//
//  Created by mark on 2020/9/12.
//  Copyright © 2020 xihe. All rights reserved.
//
/**
 数据1：与样例等价，测试基本正确性；
 数据2：102个随机整数；
 数据3：103个随机整数；
 数据4：104个随机整数；
 数据5：105个随机整数；
 “最大子列和”则被定义为所有连续子列元素的和中最大者。
 例如给定序列{ -2, 11, -4, 13, -5, -2 }，其连续子列{ 11, -4, 13 }有最大的和20
 */

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int sum = 0, maxSum = -2147483648, k;
    scanf("%d",&k);
    int nums[k];
    for (int i = 0; i < k; i++) {
        scanf("%d", &nums[i]);
    }
    
    for (int i = 0; i < k; i++) {
        sum += nums[i];
        if (nums[i] >= sum)
            sum = nums[i];
        if (maxSum < sum)
            maxSum = sum;
    }
    printf("%d\n",maxSum);
    return 0;
}

