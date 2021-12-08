//
//  main.cpp
//  L1-012
//
//  Created by zihan on 2021/12/8.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;
int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int mul = 1;
    for (int i = 0; i < n; i++) {
        mul *= 2;
    }
    printf("2^%d = %d\n", n, mul);

    return 0;
}
