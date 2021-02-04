//
//  main.cpp
//  A1084
//
//  Created by mark on 2021/2/2.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;;

int main(int argc, const char * argv[]) {
    char str1[100], str2[100];
    bool hash_table[128] = {false};
    scanf("%s",str1);
    scanf("%s",str2);
    unsigned int len1 = strlen(str1);
    unsigned int len2 = strlen(str2);
    int key_in = 0;
    int key_out = 0;
    while (key_in < len1) {
        if (str1[key_in] != str2[key_out]) {
            
            char cur = str1[key_in];
            //字符转下标 大小写字符转同一个数字
            int index = cur;
            if (cur >= 'a' && cur <= 'z') {
                //小写字母判断 - 32
                index -= 32;
            }
            //按照发现顺序进行输出
            if (hash_table[index] == false) {
                hash_table[index] = true;
                printf("%c",index);
            }
        }
        else if (key_out < len2){
            key_out++;
        }
        key_in++;
    }
    
    printf("\n");
    return 0;
}
