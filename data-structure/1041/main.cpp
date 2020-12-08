//
//  main.cpp
//  1041
//
//  Created by mark on 2020/12/8.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, m;
    scanf("%d",&n);
    long long ids[n];
    int tseats[n];
    int seats[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld %d %d", &ids[i], &tseats[i], &seats[i]);
    }
    scanf("%d",&m);
    int target;
    for (int i = 0; i < m; i++) {
        scanf("%d",&target);
        for (int j = 0; j < n; j++) {
            if (tseats[j] == target) {
                printf("%lld %d\n",ids[j], seats[j]);
            }
        }
    }
    
    return 0;
}
