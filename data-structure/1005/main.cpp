//
//  main.cpp
//  1005
//
//  Created by mark on 2021/2/4.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace ::std;

bool cmp(int a, int b) {
    return a > b;
}
/*
 //对：只要首个待处理数字出现在 hash_table 的 算是被覆盖的？
 //还是：只要处理过一次之后 出现在 hash_table 的都是被覆盖的
 //例如：n=3， 5 8 4 2 1 n=7， 11 17 26 13 20 10 5 8 4 2 1 结果算是 7 3 还是 7？
int main() {
    int n, m, a[110];
    scanf("%d",&n);
    bool hash_table[10000] = {0};
    
    for (int i = 0; i < n; i++) {
        scanf("%d",&a[i]);
        m = a[i];
        while (m != 1) {
            if (m % 2 == 1)
                m = (3 * m + 1)/2;
            else
                m = m / 2;
            hash_table[m] = true;
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (hash_table[a[i]] == false) {
            count++;
        }
    }
    sort(a, a+n, cmp);
    for (int i = 0; i < n; i++) {
        if (hash_table[a[i]] == false) {
            printf("%d",a[i]);
            count--;
            if (count > 0)
                printf(" ");
        }
    }
    return 0;
}
*/
//判断有没有被其他数字覆盖
int main(int argc, const char * argv[]) {
    int K;
    scanf("%d",&K);
    int data[K];
    int res[K];
    bool hash_table[10000] = { false };
    for (int i = 0; i < K; i++) {
        scanf("%d", &data[i]);
        int digit = data[i];
        //判断是否被覆盖 求取每个值得
        while (digit != 1) {
            if (digit % 2 == 0) {
                digit /= 2;
            } else {
                digit = (digit * 3 + 1)/2;
            }
            //记录每一次 digit 的值
            hash_table[digit] = true;
        }
    }
   
    int index = 0;
    for (int i = 0; i < K; i++) {
        if (!hash_table[data[i]]) {
            res[index++] = data[i];
        }
    }
    //结果集按从大到小的顺序排列
    sort(res, res + index, cmp);
    for (int i = 0; i < index; i++) {
        printf("%d",res[i]);
        if (i != index - 1)
            printf(" ");
    }
    printf("\n");
    return 0;
}
