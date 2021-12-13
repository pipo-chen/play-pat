//
//  main.cpp
//  L1-032
//
//  Created by zihan on 2021/12/13.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <string>
using namespace ::std;

int main(int argc, const char * argv[]) {
    int num;
    char c;
    string str;
    cin >> num >> c;
    getchar();
    getline(cin, str);
    //通过 str.size()直接可知长度
    if (str.size() < num) {
        //补位
        for (int i = 0; i < num - str.size(); i++)
            cout << c;
        //然后输出整个字符串
        cout << str;
    } else {
        //否则 长度超过 指选择部分
        for (long i = str.size() - num; i < str.size(); i++)
            cout << str[i];
    }

    return 0;
}
