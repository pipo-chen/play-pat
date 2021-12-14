//
//  main.cpp
//  L1-046
//
//  Created by zihan on 2021/12/14.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    //开始
    long long mul = 11;
    int count = 2;
    while (mul % n != 0) {
        mul = mul * 10 + 1;
        count++;
    }
    if (n == 1) {
        printf("1 1\n");
    }  else if (n == 11) {
        printf("1 2\n");
    } else {
        printf("%lld %d", mul / n, count);
    }
    
    return 0;
}
