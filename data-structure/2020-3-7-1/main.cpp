//
//  main.cpp
//  2020-3-7-1
//
//  Created by mk on 2021/8/17.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(int argc, const char * argv[]) {
    int N;
    scanf("%d",&N);
    int i = 0, num = 0;
    for (; i < 50; i++) {
        num = fibonacci(i);
        if (num > N)
            break;
    }
    //记录差值
    int diff_i = num - N;
    int num2 = fibonacci(i-1);
    int diff_i_1 = N - num2;
    printf("%d\n",diff_i < diff_i_1 ? num : num2);
    return 0;
}
