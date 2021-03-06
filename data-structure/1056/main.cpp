//
//  main.cpp
//  1056
//
//  Created by mark on 2021/3/6.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int n, sum = 0;
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j != i) {
                //情况下进行叠加
                int target = num[i] * 10 + num[j];
                sum += target;
            }
        }
    }
    printf("%d\n", sum);
    
    return 0;
}
