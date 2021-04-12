//
//  main.cpp
//  1076
//
//  Created by mark on 2021/4/12.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>

using namespace :: std;

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    char letter, result;
    int wifi[n], index = 0;
    for (int i = 0; i < n; i++) {
        //输入 4 个选项的结果
        //第一次的 scanf 轮空 输入的 \n
        int total = i == 0 ? 5 : 4;
        for (int j = 0 ; j < total; j++) {
            scanf("%c-%c ",&letter, &result);
            if (result == 'T') {
                //记录结果
                wifi[index++] = letter - 'A' + 1;
            }
        }
    }
    
    for (int i = 0; i < index; i++) {
        printf("%d",wifi[i]);
    }
    printf("\n");
    return 0;
}
