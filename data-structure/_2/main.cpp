//
//  main.cpp
//  _2
//
//  Created by 西河 on 2020/9/11.
//  Copyright © 2020 xihe. All rights reserved.
//

/**
 自测-2 素数对猜想 (20point(s))
 1. 素数的判断方式
 2. 如果循环数字从 5 开始的话，i <= n ，否则输入为 5 返回 0 🙅
 */

#include <iostream>
#include<cmath>
using namespace::std;

bool isPrimeNum(int num) {
    int tmp =(int)sqrt((double)num);
       for(int i = 2; i <= tmp;i++)
           if( num % i == 0)
               return false;
       return true;
}

int main(int argc, const char * argv[]) {
    int n,count = 0,last = 3;
    scanf("%d", &n);
    for (int i = 5; i <= n; i +=2) {
        //先判断是否为素数 素数的判断是有问题的
        if (isPrimeNum(i)) {
            if (i - last == 2) {
                count++;
                printf("(%d %d)",last,i);
            }
            last = i;
        }
    }
    printf("%d\n",count);
    return 0;
}
