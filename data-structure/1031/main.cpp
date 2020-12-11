//
//  main.cpp
//  1031
//
//  Created by mark on 2020/12/11.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace::std;

int main(int argc, const char * argv[]) {
    int n;
    char card[20];
    int weight[] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char decode[] = {'1','0','X','9','8','7','6','5','4','3','2'};
    scanf("%d",&n);
    int count = 0;
    for (int i = 0; i < n; i++) {
        scanf("%s",card);
        int sum = 0;
        bool flag = true;
        for (int j = 0; j < 17; j++) {
            if (card[j] < '0' || card[j] > '9') {
                flag = false;
            }
            else {
                sum += (card[j] - '0') * weight[j];
            }
        }
        if (!flag || (flag && decode[sum % 11] != card[17])) {
            count++;
            printf("%s\n",card);
        }
    }
    if (count == 0) {
        printf("All passed\n");
    }
    return 0;
}
