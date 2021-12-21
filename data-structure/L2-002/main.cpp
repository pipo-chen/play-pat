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
    int address, key, next, num;
}node[maxn];

bool exist[maxn];

bool cmp(Node a, Node b) {
    return a.num < b.num;
}

int main(int argc, const char * argv[]) {
    int begin, n, cnt1 = 0, cnt2 = 0, a;
    cin >> begin >> n;
    for (int i = 0; i < maxn; i++) {
        node[i].num = 2 * maxn;
    }
    for (int i = 0; i < n; i++) {
        cin >> a;
        cin >> node[a].key >> node[a].next;
        node[a].address = a;
    }
    
    for (int i = begin; i != -1; i = node[i].next) {
        if (exist[abs(node[i].key)] == false) {
            exist[abs(node[i].key)] = true;
            node[i].num = cnt1++;
        } else {
            node[i].num = maxn + cnt2;
            cnt2++;
        }
    }
    
    int cnt = cnt1 + cnt2;
    //根据 num 进行排序
    sort(node, node + maxn, cmp);
    for (int i = 0; i < cnt; i++) {
        if (i != cnt1 - 1 && i != cnt - 1)
            printf("%05d %d %05d\n",node[i].address, node[i].key, node[i+1].address);
        else
            printf("%05d %d -1\n",node[i].address, node[i].key);
    }
    return 0;
}
  
