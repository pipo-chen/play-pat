//
//  main.cpp
//  1002
//
//  Created by mark on 2020/12/11.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main(int argc, const char * argv[]) {
    char n[101];
    scanf("%s",n);
    int sum = 0;
    int ans[4], index =0;
    char pinyin[][10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    for (int i = 0; i < strlen(n); i++) {
        sum += (n[i]-'0');
    }
    
    do {
        ans[index++] = sum % 10;
        sum /= 10;
    } while (sum > 0);
    for (int i = index - 1; i >= 0; i--) {
        printf("%s",pinyin[ans[i]]);
        if (i != 0)
            printf(" ");
    }
    printf("\n");
    
    return 0;
}
