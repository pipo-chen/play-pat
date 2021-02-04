//
//  main.cpp
//  1042
//
//  Created by mark on 2021/2/4.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    char str[1010];
    int count[129] = {0};
    cin.getline(str, 1010);
    int len = strlen(str);
    //只统计英文字母 不区分大小写
    for (int i = 0; i < len; i++) {
        char cur = str[i];
        if (cur >='A' && cur <= 'Z')
            cur = cur - 'A' + 'a';
        if (cur >='a' && cur <= 'z')
            count[cur]++;
    }
    int max = 0;
    char letter = 0;
    for (int i = 128; i >=0; i--) {
        if (count[i] >= max) {
            max = count[i];
            letter = i;
        }
    }
    printf("%c %d\n",letter, max);
    return 0;
}
