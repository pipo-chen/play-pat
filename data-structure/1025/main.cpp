//
//  main.cpp
//  1025
//
//  Created by mark on 2021/3/6.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace std;;

struct node {
    char address[5];
    int data;
    char next_add[5];
} node_list[100001];


int main(int argc, const char * argv[]) {
    char target[5];
    int N, K, order[100001], index = 0;
    scanf("%s %d %d",target, &N, &K);
    K = K - 1;//作为下标
    //创建链表
    for (int i = 0; i < N; i++) {
        scanf("%s %d %s", node_list[i].address, &node_list[i].data, node_list[i].next_add);
    }
    //开始反转 递归？
    int count = 0;
    while (count < N) {
        for (int i = 0; i < N; i++) {
            int j = 0;
            while (j < 5) {
                if (target[j] != node_list[i].address[j]) {
                    break;
                }
                j++;
            }
            if (j == 5) {
                //说明找到了
                order[index++] = i;
                //数组的拷贝
                for (int k = 0; k < 5; k++) {
                    target[k] = node_list[i].next_add[k];
                }
                count++;
                break;
            }
        }
    }
 
    // 然后开始反转链表每 K 个 节点进行反转
    // [1][5][3][0][4][2]
    // [0][3][5][1][4][2] l = 4 r = 5 k = 3 tur
    // [0][3][5][1][4][2][7][8][9][10][11][12]
    // k = 3
    // l = 0 r = 3
    // l = 3 * 1 + 1 = 4
    // l = 3 * 2 + 1 = 7

    int left = 0;
    int right = K;
    while (left < N) {
        int last = right;
        while (left < right) {
            int temp = order[left];
            order[left] = order[right];
            order[right] = temp;
            left++;
            right--;
        }
        left = last + 1;
        right =  left + K;
        if (right >= N)
            right = N - 1;
    }

    
    return 0;
}
