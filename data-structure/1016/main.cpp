//
//  main.cpp
//  1016
//
//  Created by mark on 2020/9/15.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int sumPattern(int num, int d) {
    int sum = 0;
    int count = 1;
    while (num > 0) {
        if (num % 10 == d) {
            sum = d * count + sum;
            count = count * 10;
        }
        num = num / 10;
    }
    return sum;
}
int main(int argc, const char * argv[]) {
    int a, da, b, db;
    int suma = 0, sumb = 10;
    scanf("%d %d %d %d",&a,&da,&b,&db);
    suma = sumPattern(a, da);
    sumb = sumPattern(b, db);
    printf("%d+%d=%d\n",suma,sumb,sumb+suma);
    return 0;
}


