//
//  main.cpp
//  _3
//
//  Created by 西河 on 2020/9/11.
//  Copyright © 2020 xihe. All rights reserved.
//
/**
 在一行中输出循环右移M位以后的整数序列，
 之间用空格分隔，序列结尾不能有多余空格。
 */

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int n, m;
    scanf("%d %d", &n, &m);
    int nums[n];
    int cp_nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d",&nums[i]);
        cp_nums[i] = nums[i];
    }
    
    if (m % n != 0 ) {
        printf("-----");
        int start = n - (m % n), count =0;
        while (count < n) {
            cp_nums[count++] = nums[start];
            start = (start + 1) % n;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d",cp_nums[i]);
        if (i != n-1)
            printf(" ");
    }
    return 0;
}
