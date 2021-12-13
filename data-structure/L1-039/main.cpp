//
//  main.cpp
//  L1-039
//
//  Created by zihan on 2021/12/13.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    getchar();
    string str;
    getline(cin,str);
    //每一列 4 个字符一共多少列
    int row = str.size() / n + (str.size() % n == 0 ? 0 : 1);
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < row; i++) {
            int index = (row - 1 - i) * n + j;
            if (index > str.size() - 1) {
                cout << " ";
            } else
                cout << str[index];
        }
        cout << endl;
    }
    
    return 0;
}
