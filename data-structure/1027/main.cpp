//
//  main.cpp
//  1027
//
//  Created by mark on 2020/12/8.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int n;
    char c;
    scanf("%d %c",&n,&c);
    int level = 1, i = 0, total = 0;
    while (total < n) {
        if (level == 1) {
            i = 1;
        } else {
            i = 2 * (2 * level - 1);
        }
        total += i;
        if (total < n)
            level++;
    }
    //total 刚好等于 n 的时候 退出
    //total 大于 n 的时候退出 需要回减
    int remain = n - total, floor = level;
    if (total != n) {
        remain = n - (total - 2 * (2 * level - 1));
        floor = level - 1;
    }
    
    
    //打印上层
    for (int i = 0; i < floor; i++) {
        
        for (int s = 0; s < i; s++) {
            printf(" ");
        }
        for (int j = 0; j < (floor - i ) * 2 - 1 ; j++) {
            printf("%c",c);
        }
        printf("\n");
    }
    
    //打印下层
    for (int i = 1; i < floor; i++) {
        
        for (int s = 0; s < floor - 1 - i; s++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("%c",c);
        }
        printf("\n");
    }
    

    printf("%d\n",remain);
    
    return 0;
}
