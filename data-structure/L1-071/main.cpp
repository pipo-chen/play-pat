//
//  main.cpp
//  L1-071
//
//  Created by zihan on 2021/12/14.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace::std;

int main(int argc, const char * argv[]) {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        
        //开始输入每个字符
        long left = 1, right = pow(2, n), mid = 1;
        for (int j = 0; j < n; j++) {
            char c;
            cin >> c;
            mid = left + (right - left) / 2;
            if (c == 'y') {
                //左边
                right = mid - 1;
            } else {
                left = mid + 1;
            }
            //如果最后一次是 n mid + 1返回
            if (j == n - 1 && c == 'n') {
                mid++;
            }
        }
        //最后返回 mid?
        cout << mid << endl;
    }
    
    return 0;
}
