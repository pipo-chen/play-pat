//
//  main.cpp
//  A1001
//
//  Created by mark on 2021/1/1.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace std;;

int main(int argc, const char * argv[]) {
    int n1, n2;
    char res[15];
    scanf("%d %d",&n1, &n2);
    int sum = n1 + n2;
    
    if (sum < 0) {
        printf("-");
        sum *= -1;
    }
    int count = 0;
    
    if ( sum == 0 ) {
        printf("0");
    }
    while (sum > 0) {
        res[count++] = sum % 10 + '0';
        sum /= 10;
    }
   
    
    for (int i = count - 1; i >= 0; i--) {

        printf("%c",res[i]);
        if (count > 4) {
            if (i % 3 == 0 && i != 0) {
                printf(",");
            }
        }
    }
    printf("\n");
    
    return 0;
}
