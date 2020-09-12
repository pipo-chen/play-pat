//
//  main.cpp
//  _5
//
//  Created by 西河 on 2020/9/11.
//  Copyright © 2020 xihe. All rights reserved.
//

/**
 Each input file contains one test case. For each case, the first line contains a positive integer K (≤20) which is the number of repeat times. Then the next line contains the given order. All the numbers in a line are separated by a space.

 注意最末尾的空格要去掉
 */
#include <iostream>

using namespace::std;

int main(int argc, const char * argv[]) {
    int k;
    int len = 54, order[len], card[len], op[len];
    char mp[] = {'S','H','C','D','J'};
    
    scanf("%d", &k);
   
    for (int i = 0; i < len; i++) {
        scanf("%d", &order[i]);
        card[i] = i + 1;
        op[i] = i + 1;
    }
    
    while (k >= 1) {
        for (int i = 0; i < len; i++) {
            op[order[i] - 1] = card[i];
        }
        
        for (int i = 0; i < len; i++) {
            card[i] = op[i];
        }
        k--;
    }
    for (int i = 0; i < len; i++) {
         
        printf("%c%d",mp[(op[i] - 1)/13], op[i] % 13 == 0 ? 13 : op[i] % 13);
        if (i != len - 1) {
            printf(" ");
        }
    }
    
    printf("\n");
  
    return 0;
}





