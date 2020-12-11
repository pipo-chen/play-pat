//
//  main.cpp
//  1009
//
//  Created by mark on 2020/12/12.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char str[90][90];
    int index = 0;
    
    while (scanf("%s",str[index]) != EOF) {
        index++;
    }
    for (int i = index - 1; i >= 0; i--) {
        printf("%s",str[i]);
        if (i != 0)
            printf(" ");
    }
    printf("\n");
   
    return 0;
}
