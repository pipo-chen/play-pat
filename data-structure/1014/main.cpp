//
//  main.cpp
//  1014
//
//  Created by mark on 2020/12/14.
//  Copyright © 2020 xihe. All rights reserved.
//  发现一个问题 为什么判断字母范围放在外面 与 判断字母范围放在 相等之后顺序不对会产生这么大的差别

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    char str[4][61];
    char week[7][4] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
    
    for (int i = 0; i < 4; i++) {
        scanf("%s",str[i]);
    }
    
    int i;
    for (i = 0; i < strlen(str[0]) && i < strlen(str[1]); i++) {
        
        if (str[0][i] == str[1][i]) {
            if ((str[0][i] <= 'G' && str[0][i] >= 'A')) {
                int w = str[0][i] - 'A';
                printf("%s ",week[w]);
                break;
            }
        }
    }
    
    for (int j = ++i; j < strlen(str[0]) && i < strlen(str[1]); j++) {
        
        if (str[0][j] == str[1][j]) {
            if (((str[0][j] <= 'N' && str[0][j] >= 'A')) || (str[0][j] <= '9' && str[0][j] >= '0')) {
                int h;
                if (str[0][j] >= '0' && str[0][j] <= '9') {
                    //前面也要置零
                    h = str[0][j] - '0';
                }
                else {
                    h = str[0][j] - 'A' + 10;
                }
                printf("%02d:",h);
                break;
            }
        }
    }
    
    for (int k = 0; k < strlen(str[2]) && k < strlen(str[3]); k++) {
        //相对的英文字母
        if (str[2][k] == str[3][k]) {
            if (((str[2][k] >='a' && str[2][k] <= 'z')||(str[2][k] >= 'A' && str[2][k] <= 'Z'))) {
                printf("%02d\n",k);
                break;
            }
        }
    }
    
    return 0;
}
