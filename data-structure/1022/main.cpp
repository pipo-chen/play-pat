//
//  main.cpp
//  1022
//
//  Created by mark on 2020/12/10.
//  Copyright © 2020 xihe. All rights reserved.
// 倒置会存在的问题：实际答案：1000 -> 倒置：0001 -> 回倒：1

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b, d;
    scanf("%d %d %d",&a,&b,&d);
    //存入数组好了
    int ans[32];
    int sum = a + b;
    int index = 0;
    //如果 sum 是 0 的情况下 输出什么？
    while (sum > 0) {
        ans[index++] = sum % d;
        sum = sum / d;
    }
    for (int i = index - 1; i >= 0; i--) {
        printf("%d",ans[i]);
    }
    if (index == 0) {
        printf("0");
    }
    printf("\n");
    return 0;
}
