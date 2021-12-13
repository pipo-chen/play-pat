//
//  main.cpp
//  L1-043
//
//  Created by zihan on 2021/12/13.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main() {
    int minutes[1010] = {0}, n, day = 0;
    cin >> n;
    int total_time = 0, total_count = 0;;
    while (day < n) {
        int index, begin, end;
        char ope;
        scanf("%d %c %d:%d", &index, &ope, &begin, &end);
        
        if (index == 0) {
            //计算平均数
            if (total_count != 0)
                printf("%d %.f\n", total_count, total_time * 1.0/total_count);
            else
                printf("0 0\n");
            total_time = 0;
            total_count = 0;
            for (int i = 0; i < 1010; i++)
                minutes[i] = 0;
        } else {
            if (ope == 'S') {
                minutes[index] = begin * 60 + end;
            }
            //要有还才可以
            if (ope == 'E' && minutes[index] != 0) {
                total_time += begin * 60 + end - minutes[index];
                total_count++;
            }
        }
    }
    
    return 0;
}
