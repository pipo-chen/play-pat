//
//  main.cpp
//  1026
//
//  Created by mark on 2020/9/15.
//  Copyright © 2020 xihe. All rights reserved.
//
/**
 ⚠️高位补足 0
 */

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int k1, k2;
    scanf("%d %d",&k1,&k2);
    int flag = (k2 - k1) % 100 >= 50 ? 1 : 0;
    int diff = (k2 - k1) / 100 + flag;
    printf("%02d:%02d:%02d\n",diff / 3600, diff % 3600 / 60,diff % 3600 %60);
    return 0;
}
