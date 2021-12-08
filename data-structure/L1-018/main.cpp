//
//  main.cpp
//  L1-018
//
//  Created by zihan on 2021/12/8.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;
int main(int argc, const char * argv[]) {
    int hh, mm;
    scanf("%d:%d",&hh, &mm);
    if (hh <= 12 && hh >= 0) {
        printf("Only %02d:%02d.  Too early to Dang.", hh, mm);
    } else {
        //只在后半夜敲 13 - 24
        for (int i = 0; i < hh - 12; i++) {
            printf("Dang");
        }
        if (mm > 0) {
            printf("Dang\n");
        }
    }
    
    return 0;
}
