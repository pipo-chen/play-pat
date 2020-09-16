//
//  main.cpp
//  1018
//
//  Created by mark on 2020/9/15.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    
    int n;
    char x,y;
    //甲 赢 平 输
    int xwin = 0, xbalance = 0, xfail = 0;
    int xc = 0, xj = 0, xb = 0, yc = 0, yj = 0, yb = 0;
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        //记录平
        if (x == y)
            xbalance++;
        //记录 y 赢
        else if (x == 'C' && y == 'B') {
            yb++;
            xfail++;
        }
        else if (x=='J' && y == 'C') {
            yc++;
            xfail++;
        }
        else if (x == 'B' && y == 'J') {
            yj++;
            xfail++;
        }
        //记录 x 赢
        else if (y == 'C' && x == 'B') {
            xb++;
            xwin++;
        }
        else if (y =='J' && x == 'C') {
            xc++;
            xwin++;
        }
        else if (y == 'B' && x == 'J') {
            xj++;
            xwin++;
        }
    }
    
    printf("%d %d %d\n",xwin, xbalance, xfail);
    printf("%d %d %d\n",xfail,xbalance, xwin);
    if (xb >= xc && xb >= xj)
        printf("B ");
    else if (xc >= xb && xc >= xj)
        printf("C ");
    else if (xj >= xb && xj >= xc)
        printf("J ");
    if (yb >= yc && yb >= yj) 
        printf("B\n");
    else if (yc >= yb && yc >= yj)
        printf("C\n");
    else if (yj >= yc && yj >= yb)
        printf("J\n");
    
    return 0;
}
