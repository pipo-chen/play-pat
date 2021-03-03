//
//  main.cpp
//  1093
//
//  Created by mark on 2021/3/3.
//  Copyright © 2021 xihe. All rights reserved.
//  ⚠️发现同样的代码 用 while 会快一些？？？

#include <iostream>
#include <cstring>
using namespace::std;

int main(int argc, const char * argv[]) {
    char A[1000010], B[1000010];
    int judge[257] = {0};
    //字符串 输入空格的
    cin.getline(A, 1000010);
    cin.getline(B, 1000010);
    
    int i = 0;
    while (A[i]) {
        if (judge[A[i]] == 0) {
            printf("%c",A[i]);
        }
        judge[A[i]] = 1;
        i++;
    }
    i = 0;
    while (B[i]) {
        if (judge[B[i]] == 0) {
            printf("%c",B[i]);
        }
        judge[B[i]] = 1;
        i++;
    }
    printf("\n");
    return 0;
}
