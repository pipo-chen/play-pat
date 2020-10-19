//
//  main.cpp
//  A1065
//
//  Created by mark on 2020/10/19.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int n;
    long long a,b,c;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        bool flag;
        
        scanf("%lld %lld %lld",&a,&b,&c);
        long long res = a + b;
        if (a > 0 && b > 0 && res < 0) {
            flag = true;
        } else if (a < 0 && b < 0 && res >= 0) {
            flag = false;
        } else if (res > c) {
            flag = true;
        } else {
            flag = false;
        }
        if (flag == true) {
            printf("Case #%d: true\n",i);
        } else {
            printf("Case #%d: false\n",i);

        }
    }
    
    return 0;
}
