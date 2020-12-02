//
//  main.cpp
//  A1046
//
//  Created by mark on 2020/9/17.
//  Copyright © 2020 xihe. All rights reserved.
//
/**
 ❌结果：17 分 有一个样例超时
 需要预处理 dis 数组和 sun 减少查询对数组的遍历
 */

#include <iostream>
using namespace::std;

int main() {
    int n;
    scanf("%d",&n);
    int arr[n], sum = 0, routers, start, end, dis[n+1];

    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
        dis[i] = sum;
        sum += arr[i];
    }
    dis[n] = sum;
    
    scanf("%d",&routers);
    while (routers > 0) {
        scanf("%d %d",&start, &end);
        if (start > end) {
            int temp = end;
            end = start;
            start = temp;
        }
  
        int result = dis[end - 1] - dis[start - 1];
        
        result = result < sum - result ? result : sum - result;
        printf("%d\n",result);
        routers --;
    }
    return 0;
}
