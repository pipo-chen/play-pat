//
//  main.cpp
//  1025
//
//  Created by mark on 2021/3/6.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;;

const int maxn = 100010;

struct Node {
    int address, data, next;
    int order;
}node[maxn];

bool cmp(Node a, Node b) {
    return a.order < b.order; //按 order 的从小到大的排序
}

int main(int argc, const char * argv[]) {
    for (int i = 0; i < maxn; i++) {
        node[i].order = maxn;
    }
    int begin, n, K, address;
    scanf("%d %d %d", &begin, &n, &K);
    for (int i = 0; i < n; i++) {
        scanf("%d", &address);
        scanf("%d %d", &node[address].data, &node[address].next);
        node[address].address = address;
    }
    int p = begin, count = 0; //计算有效节点的数目
    while (p != -1) {
        node[p].order = count++; //节点在单链表中的序号
        p = node[p].next; // 下一个节点
    }
    sort(node, node + maxn, cmp);
    
    n = count;
    for (int i = 0; i < n / K; i++) { //枚举完整个 n / K 块
        for (int j = (i + 1) * K - 1; j > i * K; j--) {
            printf("%05d %d %05d\n",node[j].address, node[j].data, node[j-1].address);
        }
        //下面是每一块的最后一个结点的 next 地址的处理
        printf("%05d %d ",node[i * K].address, node[i * K].data);
        if (i < n / K - 1) { //如果不是最后一块，则指向下一块的最后一个结点
            printf("%5d\n", node[(i + 2) * K - 1].address);
        } else {
            if (n % K == 0) {
                printf("-1\n");
            } else {
                printf("%05d\n", node[(i + 1) * K].address);
                for (int i = n / K * K; i < n; i++) {
                    printf("%05d %d ",node[i].address, node[i].data);
                    if (i < n - 1) {
                        printf("%05d\n", node[i + 1].address);
                    } else {
                        printf("-1\n");
                    }
                }
            }
        }
    }
    
    return 0;
}
