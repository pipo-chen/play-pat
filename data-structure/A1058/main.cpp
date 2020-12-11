//
//  main.cpp
//  A1058
//
//  Created by mark on 2020/12/11.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

const int GALLEON = 17;
const int SICKLE = 29;

int main(int argc, const char * argv[]) {
    int a[3];
    int b[3];
    scanf("%d.%d.%d %d.%d.%d",&a[0],&a[1],&a[2],&b[0],&b[1],&b[2]);
    int carry = 0;
    int v1 = (a[2] + b[2] + carry) % SICKLE;
    carry = (a[2] + b[2] + carry) / SICKLE;
    int v2 = (a[1] + b[1] + carry) % GALLEON;
    carry = (a[1] + b[1] + carry) / GALLEON;
    int v3 = a[0] + b[0] + carry;
    
    printf("%d.%d.%d\n",v3,v2,v1);
    return 0;
}
