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
    char str[10010];
    cin >> num >> c;
    getchar();
    cin.getline(str, 10010);
    //必须要知道 str 的length
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    //判断是否需要补位
    int diff = num - length;
    while (diff > 0) {
        cout << c;
        diff--;
    }
    //开始输出所需长度
    int need = length > num ? num : length;
    for (int i = length - need; i < length; i++) {
        cout << str[i];
    }
    return 0;
    
}
