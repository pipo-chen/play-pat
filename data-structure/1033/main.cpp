//
//  main.cpp
//  1033
//
//  Created by mark on 2021/2/4.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace::std;

int main(int argc, const char * argv[]) {
    char str1[100000];
    char str2[100000];
    bool hash_table[128] = {false};
    //上档键
    bool tab_key = true;
    scanf("%s",str1);
    scanf("%s",str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for (int i = 0; i < len1; i++) {
        //大小写都给它添加
        char cur = str1[i];
        int index = cur;
        if (cur >= 'a' && cur <= 'z') {
            //只要保存大写的就可以了
            index -= 32;
        }
        if (cur == ',' || cur == '.' || cur == '-' || cur == '+')
            tab_key = false;
        hash_table[index] = true;
    }
    
    for (int i = 0; i < len2; i++) {
        char cur = str2[i];
        int index = cur;
        if (!tab_key && cur >='A' && cur <= 'Z')
            continue;
        if (cur >= 'a' && cur <= 'z') {
            index -= 32;
        }
        
        if (!hash_table[index]) {
            printf("%c",cur);
        }
    }
    printf("\n");
    
    return 0;
}
