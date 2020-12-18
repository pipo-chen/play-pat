//
//  main.cpp
//  1048
//
//  Created by mark on 2020/12/18.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace :: std;

int main(int argc, const char * argv[]) {
    char a[100], b[100];
    scanf("%s %s",a, b);
    char ref[] = {'0','1','2','3','4','5','6','7','8','9','J','Q','K'};

    int pos = 1;
    int diff = strlen(b) - strlen(a);
    while (pos <= strlen(a)) {
        int index = strlen(a) - pos;
        if (pos % 2 != 0) {
            int num = (a[index]-'0') + (b[index + diff] - '0');
            
            b[index + diff] = ref[num % 13];
        }
        else {
            int res = (b[index + diff] - '0') - (a[index] - '0');
            if (res < 0) {
                res += 10;
            }
            b[index + diff] = (res + '0');
        }
        pos++;
    }
    for (int i = 0; i < strlen(b); i++) {
        printf("%c",b[i]);
    }
    printf("\n");
    
    return 0;
}
