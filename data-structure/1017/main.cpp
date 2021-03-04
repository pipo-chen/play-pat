//
//  main.cpp
//  1017
//
//  Created by mark on 2021/3/4.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    char a[1010];
    int base, cur = 0, flag = 0;
    scanf("%s %d", a, &base);
    for (int i = 0; i < strlen(a); i++) {
        cur += a[i] - '0';
        if (cur >= base) {
            printf("%d",cur / base);
            cur %= base;
            flag = 1;
        } else if (cur < base && flag == 1) {
            printf("0");
        }
        cur *= 10;
    }
    if (flag == 0)
        printf("0");
    printf(" %d",cur / 10);
    return 0;
}
