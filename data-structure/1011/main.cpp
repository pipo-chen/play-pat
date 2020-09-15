//
//  main.cpp
//  1011
//
//  Created by mark on 2020/9/14.
//  Copyright © 2020 xihe. All rights reserved.
//
/**
 1011 A+B 和 C (15point(s))
 注意整型范围
 */

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int t;
    long int a, b, c;
    scanf("%d",&t);
    for (int i = 1; i<= t; i++) {
        scanf("%ld %ld %ld",&a, &b, &c);
        if (a + b > c) {
            printf("Case #%d: true\n",i);
            continue;
        }
        printf("Case #%d: false\n",i);
    }
    return 0;
}
