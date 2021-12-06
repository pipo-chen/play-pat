//
//  main.cpp
//  L1-002
//
//  Created by zihan on 2021/12/6.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace :: std;

int main(int argc, const char * argv[]) {
    int n, sum = 1;
    char c;
    scanf("%d %c", &n, &c);
    //先判断几行
    int level = 1;
    while (sum  * 2 - 1 <= n) {
        int num = level * 2 + 1;
        sum += num;
        level++;
    }
    level--;
    sum = (sum - (level * 2 + 1)) * 2 - 1;

    //上三角
    for (int i = 0; i < level; i++) {
        for (int space = 0; space < i; space++) {
            printf(" ");
        }
        for (int j = 0; j < -2 * i + 2 * level - 1; j++) {
            printf("%c",c);
        }
        printf("\n");
    }
    //下三角
    for (int i = 1; i < level; i++) {
        for (int space = 0; space < level - i - 1; space++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("%c",c);
        }
        printf("\n");
    }
    printf("%d\n", n - sum);
    
    return 0;
}
