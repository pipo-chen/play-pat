//
//  main.cpp
//  1006
//
//  Created by mark on 2020/12/11.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    char ans[30];
    int level = 0;
    int index = 0;
    do {
        int last = n % 10;
        for (int i = 0; i < last; i++) {
            if (level == 0) {
                ans[index++] = (last - i)+'0';
            }
            else if (level == 1) {
                ans[index++] = 'S';
            }
            else {
                ans[index++] = 'B';
            }
        }
        level++;
        n /= 10;
    } while (n > 0);
    
    for (int i = index - 1; i >= 0; i--) {
        printf("%c",ans[i]);
    }
    printf("\n");
    return 0;
}
