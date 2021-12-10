//
//  main.cpp
//  L1-028
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
        long long num;
        cin >> num;
        //判断
        //1 不是素数
        bool flag = num == 1 ? false : true;
        for (long long i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                flag = false;
                break;
            }
        }
        if (flag) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
        
    }
    return 0;
}
