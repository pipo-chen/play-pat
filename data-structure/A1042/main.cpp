//
//  main.cpp
//  A1042
//
//  Created by mark on 2020/9/17.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    char s[] = {'S','H','C','D','J'};
    int k;
    int len = 54;
    int order[len],op[len],data[len];
    scanf("%d",&k);
    
    //初始化排序方式
    for (int i = 0; i < len; i++) {
        scanf("%d",&order[i]);
        data[i] = i + 1;
        op[i] = i + 1;
    }
    while (k > 0) {
        for (int i = 0; i < len; i++) {
            op[order[i] - 1] = data[i];
        }
        //再把 op copy 给 data
        for (int i = 0; i < len; i++) {
            data[i] = op[i];
        }
        k--;
    }
    for (int i = 0; i < len; i++) {
        printf("%c%d",s[(op[i]-1)/13],op[i] % 13 == 0 ? 13 :op[i] % 13);
        if (i != len - 1)
            printf(" ");
    }
    printf("\n");
    
    return 0;
}
