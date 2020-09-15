//
//  main.cpp
//  1012
//
//  Created by mark on 2020/9/15.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int n;
    int a1 = 0; //偶数和 通过 0 判断
    int a2 = 0; //交错求和 通过统计判断
    int a3 = 0; //被 5 除以 2 的数字个数
    float a4 = 0; //平均数 除非没有余 3 的数
    int a5 = -2147483648; //最大的数字 肯定是存在的 除非没有余 4 的数
    scanf("%d",&n);
    int cur_num;
    int flag = 1;
    int count_4 = 0, count_2 = 0, count_5 = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%d",&cur_num);
        if (cur_num % 5 == 0 && cur_num % 2 == 0)
            a1 += cur_num;
        if (cur_num % 5 == 1) {
            a2 += flag * cur_num;
            flag = flag == 1 ? -1 : 1;
            count_2++;
        }
        if (cur_num % 5 == 2)
            a3++;
        if (cur_num % 5 == 3) {
            a4 += cur_num;
            count_4++;
        }
        if (cur_num % 5 == 4 && cur_num > a5) {
            count_5++;
            a5 = cur_num;
        }
    }
    if (a1 == 0)
        printf("N ");
    else
        printf("%d ",a1);
    if (count_2 == 0)
        printf("N ");
    else
        printf("%d ",a2);
    if (a3 == 0)
        printf("N ");
    else
        printf("%d ",a3);
    if (count_4 == 0)
        printf("N ");
    else
        printf("%.1f ",a4/count_4);
    if (count_5 == 0)
        printf("N\n");
    else
        printf("%d\n",a5);
    return 0;
}
