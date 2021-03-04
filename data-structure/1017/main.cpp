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
    int B, index = 0, R = 0, cur = 0;
    scanf("%s %d",A, &B);
    
    for (int i = 0; i < strlen(A); i++) {
        cur = A[i] - '0' + R * 10;
        R = cur % B;
        //⚠️大于等于的时候 可以进行除法操作
        if (cur >= B) {
            ans[index++] = cur / B;
        } else {
            ans[index++] = 0;
        }
    }
    
    //过滤掉高位的 0
    int zero = 0;
    while (ans[zero] == 0) {
        zero++;
    }
    for (int i = zero; i < index; i++) {
        printf("%d",ans[i]);
    }
    
    //当 A 比 B 小的时候，0 余数形式输出
    if (index - zero == 0) {
        printf("0");
    }
    printf(" %d",R);
    printf("\n");
    
    return 0;
}
