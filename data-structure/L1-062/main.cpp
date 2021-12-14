//
//  main.cpp
//  L1-062
//
//  Created by zihan on 2021/12/14.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int n;
    string nums;
    cin >> n;
    for (int i = 0;i < n; i++) {
        cin >> nums;
        int pre_sum = 0;
        for (int j = 0; j < 3; j++) {
            pre_sum += (nums[j] - '0');
        }
        int later_sum = 0;
        for (int j = 3; j < 6; j++) {
            later_sum += (nums[j] - '0');
        }
        if (pre_sum == later_sum) {
            cout << "You are lucky!" << endl;
        } else {
            cout << "Wish you good luck." << endl;
        }
    }
    
    return 0;
}
