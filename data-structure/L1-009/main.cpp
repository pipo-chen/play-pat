//
//  main.cpp
//  L1-009
//
//  Created by zihan on 2021/12/7.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>

using namespace::std;

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int sum_mol = 0, sum_denominator = 1, in_part = 0;
    for (int i = 0; i < n; i++) {
        int mol, denominator;
        scanf("%d/%d",&mol, &denominator);
        //分母 * 分母 左边分子 * 右边的分母 + 右边分子 * 左边分母
        sum_mol = sum_mol * denominator + mol * sum_denominator;
        sum_denominator = sum_denominator * denominator;

        //可以先约分 最后处理整数部分 分母是一定不会为负数的
        for (int i = 2; i < sum_denominator / 2; i++) {
            if (sum_denominator % i == 0 && sum_mol % i == 0) {
                sum_mol /= i;
                sum_denominator /= i;
            }
        }
    }
    //开始取整
    int flag = sum_mol < 0 ? -1 : 1;
    int cp_mol = sum_mol < 0? sum_mol * -1 : sum_mol;
    if (cp_mol >= sum_denominator) {
        in_part = cp_mol / sum_denominator;
    }
    //如果 3/3  这种情况怎么处理 -3/3
    sum_mol = (cp_mol - sum_denominator * in_part) * flag;
    if (sum_mol == 0)
        printf("%d\n",in_part * flag);
    else if (in_part == 0)
        printf("%d/%d\n",sum_mol,sum_denominator);
    else
        printf("%d %d/%d\n",in_part, sum_mol, sum_denominator);

    return 0;
}
