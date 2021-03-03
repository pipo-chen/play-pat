//
//  main.cpp
//  1093
//
//  Created by mark on 2021/3/3.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace::std;

int main(int argc, const char * argv[]) {
    char A[1000010], B[1000010];
    int judge[257] = {0};
    //字符串 输入空格的
    cin.getline(A, 1000010);
    cin.getline(B, 1000010);
    
    for (int i = 0; i < strlen(A); i++) {
        
        if (judge[A[i]] == 0) {
            printf("%c",A[i]);
        }
        judge[A[i]] = 1;
    }
    for (int i = 0; i < strlen(B); i++) {
        if (judge[B[i]] == 0) {
            printf("%c",B[i]);
        }
        judge[B[i]] = 1;
    }
    
    printf("\n");
    return 0;
}
