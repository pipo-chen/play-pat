//
//  main.cpp
//  L2-002
//
//  Created by zihan on 2021/12/20.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace::std;
struct Node {
    int next_add;
    int value;
} List[100010];
//头节点地址 节点数量
int main(int argc, const char * argv[]) {
    int add, n;
    int del[100010], count = 0, ref[100010];
    fill(ref, ref + 100010, 0);
    cin >> add >> n;
    for (int i = 0; i < n; i++) {
        int cur, value, next;
        cin >> cur >> value >> next;
        List[cur].value = value;
        List[cur].next_add = next;
    };
    int next_traget = List[add].next_add;
    int last_value = List[add].value;
    for (int j = 0; j < n; j++) {
        if (j == 0 ) {
            printf("%05d %d ",add, last_value);
        } else {
            //判断
            if (ref[abs(List[next_traget].value)] != 0) {
                //跳过
                del[count++] = next_traget;
                next_traget = List[next_traget].next_add;
                
                } else {
                    //输出
                    printf("%05d\n",next_traget);
                    printf("%05d %d ",next_traget, List[next_traget].value);
                    ref[abs(List[next_traget].value)] = 1;
                    next_traget = List[next_traget].next_add;
                    
                }
        }
    }
    printf("-1\n");
    //输出被删除的列表
    for (int i = 0; i < count; i++) {
        if (i == 0)
            printf("%05d %d ", del[i], List[del[i]].value);
        else {
            printf("%05d\n", del[i]);
            printf("%05d %d ",del[i], List[del[i]].value);
        }
    }
    printf("-1\n");
    
    return 0;
}
