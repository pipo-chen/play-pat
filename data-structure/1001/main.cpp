//
//  main.cpp
//  1001
//
//  Created by mark on 2020/9/14.
//  Copyright © 2020 xihe. All rights reserved.

/**
每个测试输入包含 1 个测试用例，即给出正整数 n 的值。
输出从 n 计算到 1 需要的步数。
*/

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int n, count = 0;
    scanf("%d",&n);
    while (n > 1) {
        if (n % 2 == 0)
            n = n/2;
        else
            n = (3 * n + 1)/2;
        count ++;
    }
    printf("%d\n",count);

    return 0;
}
