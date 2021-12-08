//
//  main.cpp
//  L1-010
//
//  Created by zihan on 2021/12/8.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b && a < c) {
        printf("%d->",a);
        if (b < c)
            printf("%d->%d\n",b, c);
        else
            printf("%d->%d\n", c, b);
    }
    else if (b < a && b < c) {
        printf("%d->",b);
        if (a < c)
            printf("%d->%d\n",a, c);
        else
            printf("%d->%d\n", c, a);
    }
    else {
        printf("%d->", c);
        if (b < a)
            printf("%d->%d\n",b, a);
        else
            printf("%d->%d\n", a, b);
    }
    
    return 0;
}
