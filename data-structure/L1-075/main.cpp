//
//  main.cpp
//  L1-075
//
//  Created by zihan on 2021/12/9.
//  Copyright © 2021 xihe. All rights reserved.
// <22 都是 20 开头

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    string data;
    cin >> data;

    int year = data[data.length() - 3] - '0' + ((data[data.length() - 4] - '0') * 10);
    int prefix = year < 22 ? 20 : 19;
    if (data.length() == 4) {
        printf("%d%c%c-%c%c\n",prefix, data[data.length() - 4], data[data.length() - 3],  data[data.length() - 2], data[data.length() - 1]);
        
    } else {
        printf("%c%c%c%c-%c%c\n",data[data.length() - 6], data[data.length() - 5], data[data.length() - 4], data[data.length() - 3],  data[data.length() - 2], data[data.length() - 1]);

    }
    
    return 0;
}
