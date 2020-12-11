//
//  main.cpp
//  1021
//
//  Created by mark on 2020/12/11.
//  Copyright © 2020 xihe. All rights reserved.
//  不超过 1000 位的正整数 N 所以 肯定不能用整型。

#include <iostream>
#include <cstring>
using namespace::std;

int main(int argc, const char * argv[]) {
    char nums[1001];
    int count[10] = {0};
    
    scanf("%s",nums);
    
    for (int i = 0; i < strlen(nums); i++) {
        int index = nums[i] - '0';
        count[index]++;
    }
    
    for (int i = 0; i < 10; i++) {
        if (count[i] != 0) {
            printf("%d:%d\n",i,count[i]);
        }
    }
    
    return 0;
}
