//
//  main.cpp
//  L1-069
//
//  Created by zihan on 2021/12/14.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int data[6];
    int max = -1;
    for (int i = 0; i < 6; i++) {
        cin >> data[i];
        max = data[i] > max ? data[i] : max;
    }
    //开始遍历判断
    int error = 0, error_num = -1;
    int min = data[4] >= max - data[5] ? data[4] : max - data[5];
    for (int i = 0; i < 4; i++) {
        if (!(data[i] >= min && data[i] + data[5] >= max)) {
            error++;
            error_num = i;
        }
    }
    if (error == 0)
        cout << "Normal" << endl;
    else if (error == 1)
        cout << "Warning: please check #" << error_num + 1 << "!" << endl;
    else
        cout << "Warning: please check all the tires!" << endl;
  
    return 0;
}
