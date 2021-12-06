//
//  main.cpp
//  L1-008
//
//  Created by zihan on 2021/12/6.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int a, b;
    cin >> a >> b;
    int line = 1;
    int sum = 0;
    for (int i = a; i <= b; i++) {
        sum += i;
        printf("%5d", i);
        if (line % 5 != 0) {
            line++;
        }
        else {
            printf("\n");
            line = 1;
        }
    }
    if (line != 1) {
        printf("\n");
    }
    printf("Sum = %d\n",sum);
    
    return 0;
}
