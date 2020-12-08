//
//  main.cpp
//  1032
//
//  Created by mark on 2020/12/8.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int n;
    int score[100001] = {0};
    
    scanf("%d",&n);
    int id, s;
    for (int i = 0; i < n; i++) {
        scanf("%d %d",&id, &s);
        score[id] += s;
    }
    
    int max_index = 0;
    
    for (int i = 1; i < 100000; i++) {
        if (score[i] != 0) {
            if (score[i] > score[max_index]) {
                max_index = i;
            }
        }
    }
    printf("%d %d\n",max_index, score[max_index]);
    
    return 0;
}
