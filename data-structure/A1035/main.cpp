//
//  main.cpp
//  A1035
//
//  Created by mark on 2021/1/3.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;;

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    char info[2][100];
    char res[1001][200];
    int index = 0;
    int num = n;
    
    while (n > 0) {
        scanf("%s %s",info[0],info[1]);
        bool flag = false;
        unsigned long user_len = strlen(info[0]);
        unsigned long pw_len = strlen(info[1]);
        
        for (unsigned long i = 0; i < pw_len; i++) {
            //判断每个字符
            if (info[1][i] == 'l') {
                info[1][i] = 'L';
                flag = true;
            } else if (info[1][i] == '0') {
                info[1][i] = '%';
                flag = true;
                
            } else if (info[1][i] == '1') {
                info[1][i] = '@';
                flag = true;
            } else if (info[1][i] == 'O') {
                info[1][i] = 'o';
                flag = true;
            }
        }
        if (flag) {
            for (unsigned long j = 0; j < user_len; j++) {
                res[index][j] = info[0][j];
            }
            res[index][user_len] = ' ';
            int begin = 0;
            for (unsigned long k = user_len + 1; k <= user_len + pw_len; k++) {
                
                res[index][k] = info[1][begin++];
            }
            index++;
        }
        n--;
    }
    if (index == 0) {
        if (num > 1) {
            printf("There are %d accounts and no account is modified\n",num);
        } else {
            printf("There is 1 account and no account is modified\n");
        }
    }
    else {
        printf("%d\n",index);
        for (int i = 0; i < index; i++) {
            printf("%s\n",res[i]);
        }
    }
    
    return 0;
}
