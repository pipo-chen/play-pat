//
//  main.cpp
//  L1-031
//
//  Created by zihan on 2021/12/10.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace::std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int height, weight;
        cin >> height >> weight;
        float standard = (height - 100) * 0.9 * 2;
        if (abs(weight - standard) < standard * 0.1) {
            printf("You are wan mei!\n");
        } else {
            if (weight - standard < 0) {
                printf("You are tai shou le!\n");
            } else {
                printf("You are tai pang le!\n");
            }
        }
    }

    return 0;
}
