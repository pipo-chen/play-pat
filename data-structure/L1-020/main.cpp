//
//  main.cpp
//  L1-020
//
//  Created by zihan on 2021/12/8.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int count[100010] = {0}, searched[100010] = {0};
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        
        for (int j = 1; j < k; j++) {
            //输出朋友圈
            int num;
            cin >> num;
            count[num] ++;
        }
    }
    int m, index = 0, before = 0;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int seach;
        cin >> seach;
        //查询
        if (count[seach] == 0 && searched[seach] == 0) {
            if (before == 1)
                printf(" ");
            index++;
            printf("%05d", seach);
            searched[seach] = 1;
            before = 1;
        }
    }
    if ( index == 0) {
        printf("No one is handsome\n");
    }

    return 0;
}
