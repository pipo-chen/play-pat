//
//  main.cpp
//  L1-023
//
//  Created by zihan on 2021/12/9.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace :: std;
int main(int argc, const char * argv[]) {
    string str;
    cin >> str;
    int count[4] = {0};
    char ref[] = {'G','P','L','T'};
    for (int i = 0 ; i < str.length(); i++) {
        if (str[i] == 'g' || str[i] == 'G') {
            count[0]++;
        } else if (str[i] == 'p' || str[i] == 'P') {
            count[1]++;
        } else if (str[i] == 'l' || str[i] == 'L') {
            count[2]++;
        } else if (str[i] == 't' || str[i] == 'T') {
            count[3]++;
        }
    }
    //开始批量输出
    while (count[0] != 0 || count[1] != 0 || count[2] != 0 || count[3] != 0) {
        if(count[0] != 0) {
            printf("%c",ref[0]);
            count[0]--;
        }
        if (count[1] != 0) {
            printf("%c", ref[1]);
            count[1]--;
        }
        if (count[2] != 0) {
            printf("%c",ref[2]);
            count[2]--;
        }
        if (count[3] != 0) {
            printf("%c",ref[3]);
            count[3]--;
        }
    }

    return 0;
}
