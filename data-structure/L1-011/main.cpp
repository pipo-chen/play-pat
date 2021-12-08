//
//  main.cpp
//  L1-011
//
//  Created by zihan on 2021/12/8.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace :: std;

int main(int argc, const char * argv[]) {
    char A[10010], B[10010];
    int count[256] = {0};
    cin.getline(A, 10010);
    cin.getline(B, 10010);
    for (int i = 0; B[i] != '\0'; i++) {
        count[B[i]] = 1;
    }
    for (int i = 0; A[i] != '\0'; i++) {
        if (count[A[i]] != 1) {
            printf("%c",A[i]);
        }
    }
 
    return 0;
}
