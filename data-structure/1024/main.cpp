//
//  main.cpp
//  1024
//
//  Created by mark on 2020/12/14.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;
int main(int argc, const char * argv[]) {
    char nums[10000];
    scanf("%s",nums);
    
    if (nums[0] == '-') {
        printf("-");
    }
    //判断 e 的位置
    int i = 0;
    while (i < strlen(nums)) {
        if (nums[i++] == 'E') {
            break;
        }
    }
    //判断 E 后面是正是负
    int sum = 0;
    for (int j = i + 1; j < strlen(nums); j++) {
        sum = sum * 10;
        sum += (nums[j] - '0');
    }
    if (nums[i] == '-') {
        // 往前填充 0
        for (int j = 0; j < sum; j++) {
            printf("0");
            if (j == 0) {
                printf(".");
            }
        }
        for (int k = 1; k < i - 1; k++) {
            if (nums[k] != '.') {
                printf("%c",nums[k]);
            }
        }
        printf("\n");
    }
    
    if (nums[i] == '+') {
        //往后填充零
        int index = 0;
        for (int k = 1; k < i- 1; k++) {
         
            if (nums[k] != '.') {
                printf("%c",nums[k]);
                index++;
            }
            //判断 k 所到达的位置
            if ( k == sum + 2 && k != i - 2) {
                printf(".");
            }
        }
        for (int j = index; j <= sum; j++) {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}
