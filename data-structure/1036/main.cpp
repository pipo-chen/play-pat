//
//  main.cpp
//  1036
//
//  Created by mark on 2020/12/8.
//  Copyright © 2020 xihe. All rights reserved.
//
//⚠️ 四舍五入取整，并不是直接 / 2

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int n;
    char c;
    scanf("%d %c",&n,&c);
    int col = n % 2 == 0 ? n / 2 : n / 2 + 1;
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i== col - 1) {
                printf("%c",c);
                continue;
            }
            if (j == 0 || j == n - 1 ) {
                printf("%c",c);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
