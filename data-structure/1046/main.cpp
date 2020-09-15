//
//  main.cpp
//  1046
//
//  Created by mark on 2020/9/15.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int x,xi,y,yi,cx = 0,cy = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d %d",&x,&xi,&y,&yi);
        
        if ((xi == x + y && yi == x + y) || (xi != x + y && yi != x + y))
            continue;
        
        if (xi == x + y)
            cy++;
        else if (yi == x + y)
            cx++;
    }
    printf("%d %d\n",cx,cy);
    return 0;
}
