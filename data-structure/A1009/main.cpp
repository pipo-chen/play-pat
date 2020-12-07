//
//  main.cpp
//  A1009
//
//  Created by mark on 2020/12/7.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    float a[1001] = {0};
    float multi[2001] = {0};
    int k;
    int x;
    float e;
    for (int i = 0; i < 2; i++) {
        scanf("%d",&k);
        while (k > 0) {
            scanf("%d %f",&x,&e);
            if (i == 0) {
                a[x] = e;
            }
            if (i == 1) {
                for (int j = 0; j < 1001; j++) {
                    if (a[j] != 0) {
                        float value = a[j] * e;
                        int index = j + x;
                        multi[index] += value;
                    }
                }
            }
            k--;
        }
    }
    int count = 0;
    for (int j = 2000; j >= 0; j--) {
        if (multi[j] != 0) {
            count++;
        }
    }
    printf("%d",count);
    for (int j = 2000; j >= 0; j--) {
        if (multi[j] != 0) {
            printf(" %d %.1f",j,multi[j]);
            count--;
        }
        if (count == 0)
            break;
    }
    printf("\n");
    return 0;
}
