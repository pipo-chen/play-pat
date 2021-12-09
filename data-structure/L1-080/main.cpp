//
//  main.cpp
//  L1-080
//
//  Created by zihan on 2021/12/9.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int a1, a2, n;
    cin >> a1 >> a2 >> n;
    int data[10], index = 1;
    data[0] = a1;
    data[1] = a2;
    int origin = 0;
    while (index < n) {
        int a3 = data[origin] * data[origin + 1];
        //开始取数字
        int temp[100] = {0}, count = 0;
        //如果传进来是 0 的话 怎么办
        while (a3 > 0) {
            temp[count++] = a3 % 10;
            a3 /= 10;
        }
        //倒着取 并装入
        do {
            data[++index] = temp[--count];
        } while (count > 0);
        //a2 的fuzhi为 index 变更之前的值 + 1
        origin++;
    }
    //输出前 n 项目
    for (int i = 0; i < n; i++) {
        printf("%d",data[i]);
        if (i != n - 1)
            printf(" ");
    }

    return 0;
}
