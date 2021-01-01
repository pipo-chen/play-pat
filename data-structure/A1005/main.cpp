//
//  main.cpp
//  A1005
//
//  Created by mark on 2021/1/1.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;;

int main(int argc, const char * argv[]) {
    //如果直接求和的话， 肯定会溢出10^100个数字
    //利用数组进行求和
    //字符串相加减？
    char num[10000];
    long ans = 0;
    char ref[10][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    scanf("%s",num);
    for (int i = 0; i < strlen(num); i++) {
        //开始输入的数值进行数组加减
        //如果是整数 输入的话 12345 = 12345
        ans += (num[i] - '0');
    }
    //ans 倒着输出一遍 可以先倒置
    //还要正着输出 ans
    long cp_ans = 0;
    if (ans == 0) {
        printf("%s\n",ref[0]);
        return 0;
    }
    while (ans > 0) {
        cp_ans *= 10;
        cp_ans += (ans % 10);
        ans /= 10;
    }
    
    while (cp_ans > 0) {
        printf("%s",ref[cp_ans % 10]);
        cp_ans /= 10;
        if (cp_ans > 0)
            printf(" ");
        
    }
    printf("\n");
    return 0;
}
