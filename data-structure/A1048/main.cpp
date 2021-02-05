//
//  main.cpp
//  A1048
//
//  Created by mark on 2021/2/5.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace :: std;

int main(int argc, const char * argv[]) {
    int N, M;
    scanf("%d %d",&N, &M);
    int data[N];
    for (int i = 0; i < N; i++) {
        scanf("%d",&data[i]);
    }
    sort(data, data + N);
    int i = 0;
    int j = N - 1;
    while (i < j) {
        if (data[i] + data[j] < M)
            i++;
        else if (data[i] + data[j] > M)
            j--;
        else {
            printf("%d %d\n",data[i], data[j]);
            break;
        }
    }
    if (i == j) {
        printf("No Solution\n");
    }
    return 0;
}
