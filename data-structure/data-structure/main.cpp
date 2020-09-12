//
//  main.cpp
//  data-structure
//
//  Created by 西河 on 2020/9/11.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
using namespace std;

int triangle(int spNum, int syNum, char symbol) {
    int count =0;
    for (int j = 0; j < spNum; j++)
        printf(" ");
    for (int i = 0; i < syNum; i++) {
        printf("%c",symbol);
        count++;
    }
    printf("\n");
    return count;
}

int main(int argc, const char * argv[]) {
    char symbol;
    int n;
    scanf("%d %c", &n, &symbol);
    int level = 0;
    int sum = 1;
    while (sum <= n) {
        sum += (2 * level + 3) * 2;
        level++;
    }
    sum = 0;
    
    for (int cur_level = 1; cur_level < level; cur_level ++)
        sum += triangle(cur_level - 1, -2*cur_level+2*level+1, symbol);
    
    for (int cur_level = 1; cur_level <= level; cur_level++)
        sum += triangle(level - cur_level, cur_level * 2 - 1, symbol);
    
    printf("%d",n - sum);
    return 0;
}
