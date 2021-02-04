//
//  main.cpp
//  A1041
//
//  Created by mark on 2021/2/4.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace :: std;

int main(int argc, const char * argv[]) {
    int N;
    scanf("%d",&N);
    int data[100010];
    int hash_table[10010] = {0};
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &data[i]);
        hash_table[data[i]]++;
    }
    
    for (int i = 0; i < N; i++) {
        if (hash_table[data[i]] == 1) {
            printf("%d\n",data[i]);
            return 0;
        }
    }

    printf("None\n");
    
    return 0;
}
