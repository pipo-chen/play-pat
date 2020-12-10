//
//  main.cpp
//  A1031
//
//  Created by mark on 2020/12/10.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    char s[81];
    scanf("%s",s);
    int len = strlen(s);
   
    int n1 = len / 3;
    int n2 = len - n1 * 2;
    if (n1 >= n2) {
        n1 --;
        n2 += 2;
    }
    
    int head = 0;
    int tail = len - 1;
    //开始循环
    for (int i = 0; i < n1 + 1; i++) {
        for (int j = 0; j < n2; j++) {
            
            if (i != n1) {
                if (j == 0) {
                    printf("%c",s[head++]);
                }
                else if (j == n2 - 1) {
                    printf("%c",s[tail--]);
                }
                
                else {
                    printf(" ");
                }
            } else {
                printf("%c",s[head++]);
            }
            
        }
        printf("\n");
    }
    
    return 0;
}
