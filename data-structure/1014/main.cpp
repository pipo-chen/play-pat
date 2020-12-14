//
//  main.cpp
//  1014
//
//  Created by mark on 2020/12/14.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    char str[4][60];
    char week[7][4] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
    
    for (int i = 0; i < 4; i++) {
        scanf("%s",str[i]);
    }
    
    int i1 = 0;
    int i2 = 0;
    bool find_week = false;
    while (!find_week && i1 < strlen(str[0])) {
        while (!(str[0][i1] >= 'A' && str[0][i1] <='G')) {
            i1++;
        }
        for (int j = 0; j < strlen(str[1]); j++) {
            if (str[0][i1] == str[1][j]) {
                find_week = true;
                i2 = j;
                char w = str[0][i1] - 'A';
                printf("%s ",week[w]);
                break;
            }
        }
        
        i1++;
    }
    bool find_hour = false;
    
    while (!find_hour && ++i1 < strlen(str[0])) {
        
        while (!((str[0][i1]>='A' && str[0][i1] <= 'N') || (str[0][i1]>='0' && str[0][i1] <= '9'))) {
            i1++;
        }
        
        for (int k = ++i2; k < strlen(str[1]); k++) {
            
            if (str[0][i1] == str[1][k]) {
                int h = 0;
                if (str[0][i1]>='A' && str[0][i1] <= 'N') {
                    //字母
                    h = str[0][i1] - 'A';
                    h = h + 10;
                } else {
                    //数字
                    h = str[0][i1] - '0';
                }
                printf("%d:",h);
                find_hour = true;
                break;
            }
        }
      
    }
    //寻找后两个的相同字符
    int i3 = 0;
    bool find_min = false;
    while (!find_min && i3 < strlen(str[2])) {
        //开始遍历所有的字符 只要寻找相同的英文字母
        while (!((str[2][i3] >='a' && str[2][i3] <= 'z')||(str[2][i3] >= 'A' && str[2][i3] <= 'Z'))) {
            i3++;
        }
        for (int k = 0; k < strlen(str[3]); k++) {
            if (str[2][i3] == str[3][k]) {
                //寻找到了
                find_min = true;
                if (k < 10) {
                    printf("0%d\n",k);
                } else {
                    printf("%d\n",k);
                }
                break;
            }
        }

    }
    return 0;
}
