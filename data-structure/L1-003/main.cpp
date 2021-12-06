//
//  main.cpp
//  L1-003
//
//  Created by zihan on 2021/12/6.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <string>
using namespace::std;

int main(int argc, const char * argv[]) {
    int count[10] = {0,0,0,0,0,0,0,0,0,0};
    string num;
    cin >> num;
    for (int i = 0; i < num.length(); i++) {
        int n = num[i] - '0';
        count[n] ++;
    }
    for (int i = 0; i < 10; i++) {
        if (count[i] != 0) {
            printf("%d:%d\n", i, count[i]);
        }
    }

    return 0;
}
