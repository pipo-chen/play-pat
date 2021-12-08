//
//  main.cpp
//  L1-019
//
//  Created by zihan on 2021/12/8.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;
int main(int argc, const char * argv[]) {
    int max_jia, max_yi, count_jia = 0, count_yi = 0, n;
    cin >> max_jia >> max_yi;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int jia_han, jia_hua, yi_han, yi_hua;
        cin >> jia_han >> jia_hua >> yi_han >> yi_hua;
        int result = jia_han + yi_han;
        if (jia_hua == result && yi_hua != result) {
            count_jia++;
            if (count_jia > max_jia) {
                printf("A\n%d\n",count_yi);
                break;
            }
        }
        if (jia_hua != result && yi_hua == result) {
            count_yi++;
            if (count_yi > max_yi) {
                printf("B\n%d\n",count_jia);
                break;
            }
        }
    }
   
    return 0;
}
