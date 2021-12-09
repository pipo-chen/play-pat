//
//  main.cpp
//  L1-077
//
//  Created by zihan on 2021/12/9.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int motion[25];
    for (int i = 1; i < 25; i++) {
        cin >> motion[i];
    }
    int time;
    cin >> time;
    while (time >= 0 && time <= 23) {
        if (motion[time + 1] > 50) {
            printf("%d Yes\n",motion[time + 1]);
        } else {
            printf("%d No\n", motion[time + 1]);
        }
        cin >> time;
    }

    return 0;
}
