//
//  main.cpp
//  L1-015
//
//  Created by zihan on 2021/12/8.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;
int main(int argc, const char * argv[]) {
    int n;
    char a;
    cin >> n >> a;
    //四舍五入
    int flag = n % 2 == 0 ? 0 : 1;
    int line = n / 2 + flag;
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", a);
        }
        printf("\n");
    }

    return 0;
}
