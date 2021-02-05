//
//  main.cpp
//  1005
//
//  Created by mark on 2021/2/4.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace ::std;

bool cmp(int a, int b) {
    return a > b;
}
//判断有没有被其他数字覆盖
int main(int argc, const char * argv[]) {
    int K;
    scanf("%d",&K);
    int data[K];
    int res[K];
    int hash_table[101] = {0};
    for (int i = 0; i < K; i++) {
        scanf("%d", &data[i]);
        int digit = data[i];
        //判断是否被覆盖 求取每个值得
        while (digit != 1) {
            if (digit % 2 == 0) {
                digit /= 2;
            } else {
                digit = (digit * 3 + 1)/2;
            }
            //记录每一次 digit 的值
            hash_table[digit]++;
        }
    }
    int index = 0;
    for (int i = 0; i < K; i++) {
        int digit = data[i];
        while (digit != 1) {
            if (digit % 2 == 0) {
                digit /= 2;
            } else {
                digit = (digit * 3 + 1)/2;
            }
            if (hash_table[digit] > 1) {
                //说明第一个数值就已经被覆盖了
                break;
            } else {
                //说明第一个数值没有被覆盖
                res[index++] = data[i];
                break;
            }
        }
        
    }
    //结果集按从大到小的顺序排列
    sort(res, res + index, cmp);
    for (int i = 0; i < index; i++) {
        printf("%d",res[i]);
        if (i != index - 1)
            printf(" ");
    }
    printf("\n");
    return 0;
}
