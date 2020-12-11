//
//  main.cpp
//  A1019
//
//  Created by mark on 2020/12/10.
//  Copyright © 2020 xihe. All rights reserved.
//  判断是否回文

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int n,a;
    int ans[32];
    scanf("%d %d",&n, &a);
    int index = 0;
    //也有可能 n = 0 题目范围表示不可能
    while (n > 0) {
        ans[index++] = n % a;
        n /= a;
    }
    int tail = index - 1;
    int begin = 0;
    bool flag = true;
    while (begin != tail) {
        if (ans[begin] != ans[tail]) {
            flag = false;
            break;
        }
        else {
            begin++;
            tail--;
        }
    }
    if (flag) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    //输出数组：
    for (int i = index - 1; i >= 0; i--) {
        printf("%d",ans[i]);
        if (i != 0) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
