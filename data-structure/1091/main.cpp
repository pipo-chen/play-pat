//
//  main.cpp
//  1091
//
//  Created by zihan on 2021/12/13.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        //开始寻找 num 的自守数 1000000 int 够的 n < 10;
        int n = 1;
        for (; n < 10; n++) {
            int find = n * num * num; //判断末位
            //思考 num 25392 末几位是否是 92 这件事怎么进行？
            int cp_num = num;
            bool flag = true;
            while (cp_num > 0) {
                if (find % 10 != cp_num % 10) {
                    flag = false;
                    break;
                }
                find /= 10;
                cp_num /= 10;
            }
            if (flag) {
                cout << n << " " << n * num * num << endl;
                break;
            }
        }
        //如果循环结束都没找到
        if (n >= 10) {
            cout << "No" << endl;
        }
    }
    return 0;
}
