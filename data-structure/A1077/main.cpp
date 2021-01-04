//
//  main.cpp
//  A1077
//
//  Created by mark on 2021/1/3.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <cstring>
#include "stdio.h"
using namespace std;;

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    char str[100][260];
    char common[260];
    int index = 0;
    for (int i = 0; i < n; i++) {
        //输入字符串的时候 空格会被截取掉
        cin.getline(str[i],260);
        
        //和前字符串进行比较
        if (i > 0) {
            char compare[260];
            //与 i - 1 进行比较
            //判断common 是否存在
            if (index != 0) {
                for (int c = 0; c < index; c++) {
                    compare[c] = common[c];
                }
            } else {
                strcpy(compare, str[i-1]);
                
            }
            //从后往前比较
            unsigned long e1 = strlen(compare) - 1;
            unsigned long e2 = strlen(str[i]) - 1;

            //开始重置 common
            index = 0;
            while (e1 >= 0 && e2 >=0) {
                if (compare[e1] == str[i][e2]) {
                    //保留进字符
                    common[index++] = compare[e1];
                    e1--;
                    e2--;
                } else if (index == 0) {
                    printf("\nnai\n");
                    return 0;
                } else {
                    //说明已经匹配完了
                    break;
                }
                
            }
        }
        
    }
    for (int c = index - 1; c >= 0; c--) {
        if (common[c] == ' ')
            break;
        printf("%c",common[c]);
        
    }
    printf("\n");
    
    return 0;
}
