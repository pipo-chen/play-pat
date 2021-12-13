//
//  main.cpp
//  L1-040
//
//  Created by zihan on 2021/12/13.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char sex;
        float height;
        cin >> sex >> height;
        if (sex == 'F') {
            printf("%.2f\n",height * 1.09);
        } else {
            printf("%.2f\n",height / 1.09);
        }
    }
    return 0;
}
