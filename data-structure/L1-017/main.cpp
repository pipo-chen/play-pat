//
//  main.cpp
//  L1-017
//
//  Created by zihan on 2021/12/8.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    string num;
    int count = 0, flag = 0;
    float xishu = 1;
    cin >> num;
    for (int i = 0; i < num.length(); i++) {
        if (num[i] == '-') {
            xishu *= 1.5;
            flag = 1;
        }
        if (i == num.length() - 1) {
            if ((num[i] - '0') % 2 == 0)
                xishu *= 2;
        }
        if (num[i] == '2')
            count++;
    }
    //float 还要四舍五入 还要减去前面的符号
    float res = count * 1.0 / (num.length() - flag) * xishu * 100;
    printf("%.2f%%",res);

    return 0;
}
