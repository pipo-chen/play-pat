//
//  main.cpp
//  1023
//
//  Created by mark on 2021/2/5.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace :: std;

int main(int argc, const char * argv[]) {
    int num[51] = {0};
    int index = 0;
    for (int i = 0; i < 10; i++) {
        int digit;
        scanf("%d",&digit);
        for (int j = 0; j < digit; j++) {
            num[index++] = i;
        }
    }
    //如果前面是 0 的情况下 找到一个非0 的与首位交换 100 00 这种情况怎么办
    if (num[0] == 0) {
        int find = 0;
        while (num[find] == 0 && find < index) {
            find++;
        }
        //交换
        int temp = num[find];
        num[find] = num[0];
        num[0] = temp;
    }
    
    for (int i = 0; i < index; i++) {
        printf("%d",num[i]);
    }
    printf("\n");
    return 0;
}
