//
//  main.cpp
//  L1-016
//
//  Created by zihan on 2021/12/8.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace :: std;
int main(int argc, const char * argv[]) {
    int n, index = 0;
    int weight[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    char refer[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    string id;
    string ids[110];
    cin >> n;
    for ( int i = 0; i < n; i++) {
        cin >> id;
        //前 17 位 加权取值
        int sum = 0;
        for (int i = 0; i < 17; i++) {
            sum += weight[i] * (id[i] - '0');
        }
        if (refer[sum % 11] != id[17]) {
            ids[index++] = id;
        }
    }
    
    if (index == 0) {
        printf("All passed\n");
    } else {
        for (int i = 0; i < index; i++) {
            cout << ids[i] << endl;
        }
    }

    return 0;
}
