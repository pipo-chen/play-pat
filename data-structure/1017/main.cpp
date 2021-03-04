//
//  main.cpp
//  1017
//
//  Created by mark on 2021/3/4.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;
//A 是字符串 输出余数 和 商
int main(int argc, const char * argv[]) {
    char A[1001];
    int ans[1001];
    int B, index = 0, remainder = 0, cur = 0;
    scanf("%s %d",A, &B);
    for (int i = 0; i < strlen(A); i++) {
        cur = A[i] - '0' + remainder * 10;
        remainder = cur % B;
        if (cur >= B) {
            ans[index++] = cur / B;
        } else {
            ans[index++] = 0;
        }
    }
    int zero = 0;
    while (ans[zero] == 0) {
        zero++;
    }
    for (int i = zero; i < index; i++) {
        printf("%d",ans[i]);
    }
    printf(" %d",remainder);
    printf("\n");
    
    return 0;
}
