//
//  main.cpp
//  02
//
//  Created by zihan on 2021/12/1.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read() {
    List L = (List)malloc(sizeof(struct Node));
    List p = L;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        PtrToNode node = (PtrToNode)malloc(sizeof(struct Node));
        node->Data = num;
        p->Next = node;
        p = p->Next;
    }
    return L->Next;
} /* 细节在此不表 */
void Print( List L ) {
    printf("--->");
    while (L) {
        printf("%d->",L->Data);
        L = L->Next;
    }
    printf("\n");
} /* 细节在此不表；空链表将输出NULL */

List Merge( List L1, List L2 );

int main()
{
    List L1, L2, L;
    L1 = Read();
    L2 = Read();
    L = Merge(L1, L2);
    Print(L);
    Print(L1);
    Print(L2);
    return 0;
}

/* 你的代码将被嵌在这里 */
List Merge( List L1, List L2 ) {
    List L3 = (List)malloc(sizeof(struct Node));
    List tp1 = L1->Next;
    List tp2 = L2->Next;
    List tp3 = L3;
    while (tp1 && tp2) {
        if (tp1->Data < tp2->Data) {
            tp3->Next = tp1;
            tp1 = tp1->Next;
        } else {
            tp3->Next = tp2;
            tp2 = tp2->Next;
        }
        tp3 = tp3->Next;
    }
    if (tp1)
        tp3->Next = tp1;
    if (tp2)
        tp3->Next = tp2;
    L1->Next = NULL;
    L2->Next = NULL;
    return L3;
}
