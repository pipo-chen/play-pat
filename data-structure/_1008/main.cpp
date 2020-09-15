//
//  main.cpp
//  _1008
//
//  Created by mark on 2020/9/15.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int n, m;
    scanf("%d %d", &n, &m);
    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d",&nums[i]);
    }

    int start = n - (m % n);
    for (int i = start; i < n; i++)
        printf("%d ",nums[i]);
    for (int i = 0; i < start; i++) {
        printf("%d",nums[i]);
        if (i != start-1)
            printf(" ");
    }
    printf("\n");
    
    return 0;
}
