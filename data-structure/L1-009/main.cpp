//
//  main.cpp
//  L1-009
//
//  Created by zihan on 2021/12/7.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>

using namespace::std;
long long gcd (long long a , long long b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    long long n, a, b, sum_a = 0, sum_b = 1, gcdValue;
    scanf("%lld", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lld/%lld", &a, &b);
        gcdValue = (sum_a == 0 || sum_b == 0) ? 1 : gcd(abs(sum_a), abs(sum_b));
        sum_b = sum_b / gcdValue;
        sum_a = sum_a / gcdValue;
        gcdValue = (a == 0 || b == 0) ? 1 : gcd(abs(a), abs(b));
        a = a / gcdValue;
        b = b / gcdValue;
        sum_a = a * sum_b + sum_a * b;
        sum_b = b * sum_b;
    }
    long long integer = sum_a / sum_b;
    sum_a = sum_a - (sum_b * integer);
    gcdValue = (sum_a == 0 || sum_b == 0) ? 1 : gcd(abs(sum_a), abs(sum_b));
    sum_a = sum_a / gcdValue;
    sum_b = sum_b / gcdValue;
    if (integer != 0) {
        printf("%lld",integer);
        if (sum_a != 0) {
            printf(" ");
        }
    }
    if (sum_a != 0) {
        printf("%lld/%lld", sum_a, sum_b);
    }
    if (integer == 0 && sum_a == 0)
        printf("0");
    return 0;
}
