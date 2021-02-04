//
//  main.cpp
//  1043
//
//  Created by mark on 2021/2/4.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    char str[10010];
    int count[6] = {0};
    scanf("%s",str);
    //PATest
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == 'P')
            count[0]++;
        else if (str[i] == 'A')
            count[1]++;
        else if (str[i] == 'T')
            count[2]++;
        else if (str[i] == 'e')
            count[3]++;
        else if (str[i] == 's')
            count[4]++;
        else if (str[i] == 't')
            count[5]++;
        
    }
    
    while ((count[0] + count[1] + count[2] + count[3] + count[4] + count[5]) != 0) {
      
        if (count[0] != 0) {
            printf("P");
            count[0]--;
        }
        if (count[1] != 0) {
            printf("A");
            count[1]--;
        }
        if (count[2] != 0) {
            printf("T");
            count[2]--;
        }
        if (count[3] != 0) {
            printf("e");
            count[3]--;
        }
        if (count[4] != 0) {
            printf("s");
            count[4]--;
        }
        if (count[5] != 0) {
            printf("t");
            count[5]--;
        }
    }
    printf("\n");
    return 0;
}
