//
//  main.cpp
//  L1-076
//
//  Created by zihan on 2021/12/9.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        float p;
        cin >> p;
        if ( p < m ) {
            printf("On Sale! %.1f\n",p);
        }
    }
    

    return 0;
}
