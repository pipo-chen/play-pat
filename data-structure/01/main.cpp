//
//  main.cpp
//  01
//
//  Created by zihan on 2021/12/1.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10
#define NotFound 0
typedef int ElementType;

typedef int Position;
typedef struct LNode *List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* 保存线性表中最后一个元素的位置 */
};

List ReadInput() {
    List l = (List)malloc(sizeof(struct LNode));
    l->Last = 0;

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        l->Data[l->Last++] = num;
    }
    return l;
} /* 裁判实现，细节不表。元素从下标1开始存储 */
Position BinarySearch( List L, ElementType X );

int main()
{
    List L;
    ElementType X;
    Position P;

    L = ReadInput();
    scanf("%d", &X);
    P = BinarySearch( L, X );
    printf("%d\n", P);

    return 0;
}

Position BinarySearch( List L, ElementType X ) {
    //在 l 数组中进行二分查找
    int left = 1, right = L->Last, mid;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (L->Data[mid] == X) {
            return mid;
        } else if (L->Data[mid] < X) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return NotFound;
    
}

