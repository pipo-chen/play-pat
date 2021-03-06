//
//  main.cpp
//  1057
//
//  Created by mark on 2021/3/6.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace :: std;

int main(int argc, const char * argv[]) {
    char words[100010];
    int count[2] = {0};
    cin.getline(words, 100010);
    int sum = 0;
    for (int i = 0; i < strlen(words); i++) {
        //判断是否是字母
        if (words[i] >= 'A' && words[i] <= 'Z')
            sum += (words[i] - 'A' + 1);
        if (words[i] >= 'a' && words[i] <= 'z')
            sum += (words[i] - 'a' + 1);
    }
    //数字转二进制
    while (sum > 0) {
        count[sum % 2]++;
        sum /= 2;
    }
    
    printf("%d %d\n",count[0], count[1]);
    return 0;
}
