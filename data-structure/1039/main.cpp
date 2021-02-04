//
//  main.cpp
//  1039
//
//  Created by mark on 2021/2/4.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, const char * argv[]) {
    char str1[1010];
    char str2[1010];
    int count_1[256] = {0};
    int count_2[256] = {0};
    
    scanf("%s",str1);
    scanf("%s",str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    for (int i = 0; i < len1; i++) {
        count_1[str1[i]]++;
    }
    
    for (int i = 0; i < len2; i++) {
        count_2[str2[i]]++;
    }
    //开始比较
    int more = 0;
    bool buy = true;
    
    for (int j = 0; j < 256; j++) {
        if (count_2[j] != 0) {
            //开始比较大小
            if (count_2[j] > count_1[j]) {
                buy = false;
                more += (count_2[j] - count_1[j]);
            }

        }
    }
    //可以买的话 不需要统计多余的
    if (buy) {
        printf("Yes %d\n",len1 - len2);
    } else {
        printf("No %d\n",more);
    }
    
    return 0;
}
