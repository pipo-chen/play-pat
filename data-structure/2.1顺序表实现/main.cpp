//
//  main.cpp
//  2.1顺序表实现
//
//  Created by zihan on 2022/3/8.
//  Copyright © 2022 xihe. All rights reserved.
//

#include <iostream>
using namespace :: std;

#define MAXSIZE 50
typedef int ElemType;
typedef struct {
    ElemType data[MAXSIZE];
    int length;
}SqList;


//插入操作
bool ListInsert(SqList &L, int i, ElemType e) {
    if (i < 1 || i > L.length + 1)
        return  false;
    if (L.length >= MAXSIZE)
        return false;
    for (int j = L.length; j >= i; j--) {
        L.data[j] = L.data[j-1];
    }
    L.data[i - 1] = e;
    L.length ++;
    return true;
}

//删除操作
bool ListDelete(SqList &L, int i, ElemType e) {
    if (i <= 1 || i >= L.length)
        return false;
    e = L.data[i - 1];
    for (int j = i; j < L.length; j++) {
        L.data[j-1] = L.data[j];
    }
    L.length--;
    return true;
}

//按值查找
int LocateElem(SqList L, ElemType e) {
    int i;
    for (i = 0; i < L.length; i++) {
        if (L.data[i] == e)
            return i + 1;
    }
    return 0;
}
//删除最小值的元素，返回被删除的元素，空出的位置由最后一位不上
ElemType deleteSmallestElem(SqList &L) {
    if (L.length <= 0) {
        return -1;
    }
    int min = 99999;
    int min_index = -1;
    for (int i = 0; i < L.length; i++) {
        if (L.data[i] < min) {
            min_index = i;
            min = L.data[i];
        }
    }
    //删除第 i 个元素
    L.data[min_index] = L.data[L.length - 1];
    L.length--;
    return min;
}
//所有元素逆置
void reserve(SqList &L) {
    int i = 0, j = L.length - 1;
    while (i <= j) {
        ElemType temp = L.data[i];
        L.data[i] = L.data[j];
        L.data[j] = temp;
        i++;
        j--;
    }
}
//删除范围在 s-t之间的值
void deleteRange(SqList &L, ElemType s, ElemType t) {
    if (s >= t || L.length == 0) {
        return;
    }
    int k = 0;
    for (int i = 0; i < L.length; i++) {
        if (!(L.data[i] <= t && L.data[i] >= s)) {
            L.data[k++] = L.data[i];
        }
    }
    L.length = k;
}
int main(int argc, const char * argv[]) {
   
    return 0;
}
