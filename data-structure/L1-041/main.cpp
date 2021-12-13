//
//  main.cpp
//  L1-041
//
//  Created by zihan on 2021/12/13.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int num, count = 1, flag = -1;
    while ((scanf("%d", &num)) != EOF) {
        if (num == 250 && flag == -1) {
            flag = count;
        }
        count++;
    }
    cout << flag << endl;
  
    return 0;
}
