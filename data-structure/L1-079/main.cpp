//
//  main.cpp
//  L1-079
//
//  Created by zihan on 2021/12/9.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int n, count[1000010] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        int level;
        cin >> level;
        count[level]++;
    }
    int min = 1000010;
    int max = 0;
    for (int i = 0; i < 1000010; i++) {
        if (count[i] != 0 && i < min)
            min = i;
        if (count[i] != 0 && i > max)
            max = i;
    }
    printf("%d %d\n%d %d\n",min, count[min], max, count[max]);

    return 0;
}
