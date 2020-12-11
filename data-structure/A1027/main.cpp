//
//  main.cpp
//  A1027
//
//  Created by mark on 2020/12/11.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
using namespace std;
const int DECIMAL = 13;

int main(int argc, const char * argv[]) {
    
    char a[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C'};
    int colors[3];
    scanf("%d %d %d",&colors[0],&colors[1],&colors[2]);
    printf("#");
    char res[2];

    for (int i = 0; i < 3; i++) {
        int index = 0;
        //如果 colors[i] == 0 情况未考虑
        do {
            res[index++] = a[colors[i] % DECIMAL];
            colors[i] /= DECIMAL;
        } while (colors[i] > 0);
        
    
        //如果类似 11 计算出来只有 B 的情况下 前面要加 0
        if (index == 1) {
            res[index++] = a[0];
        }
        for (int j = index - 1; j >= 0; j--) {
            printf("%c",res[j]);
        }
    }
    printf("\n");
    return 0;
}
