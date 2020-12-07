//
//  main.cpp
//  A1002
//
//  Created by mark on 2020/12/7.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    float a[1001] = {0};
    int k;
    float e;
    int x;
    for (int i = 0; i < 2; i++) {
        scanf("%d",&k);
        while (k > 0) {
            scanf("%d %f",&x,&e);
            a[x] += e;
            k--;
        }
    }
    
    int count = 0;
    for (int i = 1000; i >= 0; i--) {
        if (a[i] != 0) {
            count ++;
        }
    }
    printf("%d",count);
    for (int i = 1000; i >= 0; i--) {
        if (a[i] != 0) {
            printf(" %d %.1f",i,a[i]);
            count--;
        }
    }
    printf("\n");
    
    return 0;
}
