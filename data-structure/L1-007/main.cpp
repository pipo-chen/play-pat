//
//  main.cpp
//  L1-007
//
//  Created by zihan on 2021/12/6.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <string>
using namespace::std;

int main(int argc, const char * argv[]) {
    string nums[10] = {"ling","yi", "er", "san", "si", "wu", "liu", "qi", "ba","jiu"};
    string read;
    cin >> read;
    int i = 0;
    if (read[i] == '-') {
        printf("fu ");
        i++;
    }
    for (; i < read.length(); i++) {
        int current = read[i] - '0';
        cout << nums[current];
        if (i != read.length() - 1)
            cout << " ";
    }
    
  
    return 0;
}
