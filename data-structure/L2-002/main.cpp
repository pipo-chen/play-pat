//
//  main.cpp
//  L2-002
//
//  Created by zihan on 2021/12/20.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <algorithm>
using namespace::std;
const int maxn = 100010;
struct Node {
    int address, value, next, num;
}node[maxn];

bool exist[maxn];

bool cmp(Node a, Node b) {
    return a.num < b.num;
}

int main(int argc, const char * argv[]) {
    int begin, n;
    cin >> begin >> n;
    for (int j = 0; j < maxn; j++) {
        //排序皆为最大
        node[j].num = 2 * maxn;
        exist[j] = false;
    }
    
    for (int i = 0; i < n; i++) {
        //开始输入节点 初始化 当前地址 值 下一个地址
        int add;
        cin >> add;
        node[add].address = add;
        cin >> node[add].value >> node[add].next;
    }
    //输入完成之后 开始比较 是否存在
    int cnt1 = 0, cnt2 = 0;
    for (int i = begin; i != -1; i = node[i].next) {
        //绝对值 value
        if (exist[abs(node[i].value)]) {
            //说明存在
            node[i].num = maxn + cnt2;
            cnt2++;
        } else {
            exist[abs(node[i].value)] = true;
            node[i].num = cnt1++;
        }
    }
    //开始排序输出
    sort(node, node + maxn, cmp);
    
    for (int j = 0; j < n; j++) {
        //输出 cnt1 然后再输出 cnt2 从begin 开始
        if (j != cnt1 - 1 && j != n - 1)
            printf("%05d %d %05d\n",node[j].address, node[j].value, node[j+1].address);
        else
            printf("%05d %d -1\n",node[j].address, node[j].value);
    }
}
  
