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
    int res[3];
    int carry = 0;
    for (int i = 2; i >= 0; i--) {
        int ans = a[i] + b[i] + carry;
        carry = 0;
        
        if (i == 1 && ans >= GALLEON) {
            carry = ans / GALLEON;
            ans = ans % GALLEON;
        }
        if (i == 2 && ans >= SICKLE) {
    
            carry = ans / SICKLE;
            ans = ans % SICKLE;
        }
        //carry 加完之后 没有被重置
        res[i] = ans;
    }
    
    for (int j = 0; j < 3; j++) {
        printf("%d",res[j]);
        if (j != 2) {
            printf(".");
        }
    }
    printf("\n");
    return 0;
}
