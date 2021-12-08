//
//  main.cpp
//  L-048
//
//  Created by zihan on 2021/12/8.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int ra, ca, rb, cb;
    cin >> ra >> ca;
    int num_a[ra * ca];
    for (int i = 0; i < ra * ca; i++) {
        cin >> num_a[i];
    }
    cin >> rb >> cb;
    int num_b[rb * cb];
    for (int i = 0; i < rb * cb; i++) {
        cin >> num_b[i];
    }
    
    if (ca != rb) {
        cout << "Error: " << ca << " != " << rb << endl;
    } else {
        printf("%d %d\n",ra, cb);
        //开始打印结果数组
        for (int i = 0; i < ra; i++) {
            //每一行
            for (int j = 0; j < cb; j++) {
                //每一列元素计算
                int sum = 0;
                for (int k = 0; k < ca; k++) {
                    int cur_a = num_a[i * ca + k];
                    int cur_b = num_b[j + k * cb];
                    sum += cur_a * cur_b;
                }
                //sum代表每一次计算出来的元素
                printf("%d",sum);
                if (j != cb - 1)
                    printf(" ");
                else
                    printf("\n");
            }
        }
        
    }
    return 0;
}
