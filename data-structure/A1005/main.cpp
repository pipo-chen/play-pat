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
    char num[1000];
    int result[1000];
    long ans = 0;
    char ref[10][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    scanf("%s",num);
    for (int i = 0; i < strlen(num); i++) {
        ans += (num[i] - '0');
    }
  
    if (ans == 0) {
        printf("%s\n",ref[0]);
        return 0;
    }
    int count = 0;
    while (ans > 0) {
        result[count++] = ans % 10;
        ans /= 10;
    }
    for (int i = count - 1; i >= 0; i--) {
        printf("%s",ref[result[i]]);
        if (i != 0) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
