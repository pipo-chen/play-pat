//
//  main.cpp
//  L1-033
//
//  Created by zihan on 2021/12/13.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int year, n;
    cin >> year >> n;
    //找年份 n 个数字不一样的情况
    int later = 0;
    while (true) {
        int current = later + year;
        //判断有几个数字不同
        int count[10] = {0};
        while (current > 0) {
            count[current % 10]++;
            current /= 10;
        }
        int judge = 0;
        int judge_total = 0;
        for (int i = 0; i < 10; i++) {
            if (count[i] != 0) {
                judge_total += count[i];
                judge++;
            }
        }
        judge = judge_total == 4 ? judge : (count[0] != 0 ? judge : judge + 1);
        
        if (judge == n) {
            printf("%d %04d\n", later, year + later);
            break;
        }
        later++;
    }

    return 0;
}
