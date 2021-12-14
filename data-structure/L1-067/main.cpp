//
//  main.cpp
//  L1-067
//
//  Created by zihan on 2021/12/14.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace::std;

int main(int argc, const char * argv[]) {
    float a, b;
    int type;
    cin >> a >> type >> b;
    a = type == 0 ? a * 2.455 : a * 1.26;
    printf("%.2f ",a);
    if ( a >= b )
        printf("T_T\n");
    else
        printf("^_^\n");

    return 0;
}
