//
//  main.cpp
//  1010
//
//  Created by mark on 2020/9/16.
//  Copyright © 2020 xihe. All rights reserved.
//
// 空格输出错误，不应该以 i != 1 作为判读条件

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int x[1001] = {0};
    int k,e;
    while (scanf("%d %d",&k,&e) != EOF) {
        x[e] += k;
    }
    int count = 0;
   
    for (int i = 1000; i > 0; i--) {
        if (x[i] != 0) {
            count++;
        }
    }
    
    if (count == 0) {
        printf("0 0");
    } else {
        for (int i = 1000; i > 0; i--) {
            
            if (x[i] != 0) {
                printf("%d %d",i * x[i], i - 1);
                count--;
                if (count != 0)
                    printf(" ");
            }
           
        }
    }
    printf("\n");
    return 0;
}
