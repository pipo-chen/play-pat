//
//  main.cpp
//  L1-068
//
//  Created by zihan on 2021/12/14.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    float sum = 0;
    for (int i = 0; i < n; i++) {
        float num;
        cin >> num;
        sum += (1 / num);
    }
    printf("%.2f\n", n / sum);
    return 0;
}
