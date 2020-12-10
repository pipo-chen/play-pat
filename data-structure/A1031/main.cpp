//
//  main.cpp
//  A1031
//
//  Created by mark on 2020/12/10.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char s[81];
    scanf("%s",s);
    int len = strlen(s);
    int n1 = len / 3;
    int n2 = len / 3 + len % 3;
    
    int letter = 0;
    //开始循环
    for (int i = 0; i < n1 + 1; i++) {
        for (int j = 0; j < n2; j++) {
            
            if (i != n1) {
                if (j == 0 || j == n2 - 1) {
                    printf("%c",s[letter++]);
                }
                else {
                    printf(" ");
                }
            } else {
                printf("%c",s[letter++]);
            }
        }
        printf("\n");
    }
    
    return 0;
}
