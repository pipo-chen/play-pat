//
//  main.cpp
//  1038
//
//  Created by mark on 2021/2/4.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int N, K;
    int count[100] = {0};
    scanf("%d",&N);
    for (int i = 0; i < N; i++) {
        int score;
        scanf("%d", &score);
        count[score]++;
    }
    scanf("%d",&K);
    for (int i = 0; i < K; i++) {
        int search;
        scanf("%d", &search);
        printf("%d",count[search]);
        if (i != K-1)
            printf(" ");
    }
    printf("\n");
    return 0;
}
