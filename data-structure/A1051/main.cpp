//
//  main.cpp
//  A1051
//
//  Created by zihan on 2022/3/2.
//  Copyright © 2022 xihe. All rights reserved.
//

#include <iostream>
#include <stack>
#include <vector>
using namespace::std;

int main(int argc, const char * argv[]) {
    int m, n, k;
    cin >> m >> n >> k;
    vector<int>v(n);
    
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[j];
        }
        //开始入栈
        stack<int>s;
        int cur = 0;
        for (int j = 1; j <= n; j++) {
            //开始入栈
            s.push(j);
            //开始判断栈的长度
            if (s.size() > m)
                break;
            //正常情况
            while (!s.empty() && s.top() == v[cur]) {
                s.pop();
                cur++;
            }
        }
        if (cur == n) {
            //说明读完了
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        
    }
    return 0;
}
