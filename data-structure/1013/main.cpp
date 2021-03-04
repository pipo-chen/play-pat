//
//  main.cpp
//  1013
//
//  Created by mark on 2021/3/4.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;;

bool prime_num(int num) {
    int k = (int)sqrt((double) num);
    for (int i = 2; i <= k; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main(int argc, const char * argv[]) {
    int M, N;
    scanf("%d %d",&M, &N);
    int count = 0;
    int index = 1;
    int num = 2;
    while (count < N) {
        if (prime_num(num)) {
            count++;
            if ( count >= M) {
                printf("%d",num);
                if (index % 10 == 0) {
                    printf("\n");
                } else if (count != N) {
                    printf("-");
                }
                index++;
            }
        }
        num++;
    }
//    printf("\n");
    return 0;
}
