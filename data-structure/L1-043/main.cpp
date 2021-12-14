//
//  main.cpp
//  L1-043
//
//  Created by zihan on 2021/12/13.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <algorithm>
//最后的值还要四舍五入
using namespace::std;

int main() {
    int minutes[1010] = {-1}, n, day = 0, total_time = 0, total_count = 0;
    cin >> n;
    while (day < n) {
        int index, begin, end;
        char ope;
        scanf("%d %c %d:%d", &index, &ope, &begin, &end);
        if (index == 0) {
            //计算平均数
            day++;
            if (total_count != 0)
                printf("%d %.f\n", total_count, total_time * 1.0/total_count);
            else
                printf("0 0\n");
            total_time = 0;
            total_count = 0;
            fill(minutes, minutes + 1010, -1);
        } else {
            if (ope == 'S') {
                minutes[index] = begin * 60 + end;
            } else if (ope == 'E' && minutes[index] != -1) {
                total_time += begin * 60 + end - minutes[index];
                total_count++;
                //加完之后 这次的时间重新置 0
                minutes[index] = -1;
            }
        }
    }
    
    return 0;
}
