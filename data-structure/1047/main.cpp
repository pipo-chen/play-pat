//
//  main.cpp
//  1047
//
//  Created by mark on 2021/2/4.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int N;
    int team, person, score;
    int count[1010] = {0};
    
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d-%d %d", &team, &person, &score);
        count[team] += score;
    }
    int max = 0;
    int index = 0;
    for (int i = 0; i < 1010; i++) {
        if (count[i] > max) {
            max = count[i];
            index = i;
        }
    }
    printf("%d %d\n",index, max);
    
    return 0;
}
