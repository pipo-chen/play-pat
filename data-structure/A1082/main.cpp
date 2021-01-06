//
//  main.cpp
//  A1082
//
//  Created by mark on 2021/1/5.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace std;;
const int YI_POS = 8;
const int WAN_POS = 4;

bool all_zero_next(char *digit, int begin) {
    
    for (int i = 0; i < begin; i++) {
        if (digit[i] != 0)
            return false;
    }
    return true;
}

bool print_num(int *last, char *digit) {
    char ref[11][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    bool zero_stop = false;
    for (int i = *last; i >= WAN_POS; i--) {
        int index = digit[i] - '0';
        printf("%s",ref[index]);
        zero_stop = all_zero_next(digit, i);
       
        if (i - WAN_POS == 3) {
            printf(" Qian");
            
        } else if (!zero_stop && i - WAN_POS == 2) {
            printf(" Bai");
            
        } else if (!zero_stop && i - WAN_POS == 1) {
            printf(" Shi");
        }
        if (!zero_stop && i != WAN_POS)
            printf(" ");
    }
    return zero_stop;
}

int main(int argc, const char * argv[]) {
    char digit[10];
    char ref[11][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};

    scanf("%s",digit);
    if (digit[0] == '-') {
        printf("fu ");
    } else if (digit[0] == '+') {
        printf("zheng ");
    }
    int len = strlen(digit);
    int end = len - 1;
    bool zero_stop = false;
    
    //1. 先倒序位置 下标与个十百千对应
    int first = 0;
    unsigned long last = len - 1;
    while (first < last) {
        char temp = digit[first];
        digit[first] = digit[last];
        digit[last] = temp;
        first++;
        last--;
    }
    
    if (digit[end] == '-' || digit[end] == '+')
        end--;

    //亿字辈：只有一种可能 个位的亿
    bool go_space = end >= YI_POS;
    if (end >= YI_POS) {
        int index = digit[end--] - '0';
        printf("%s Yi",ref[index]);
        zero_stop = all_zero_next(digit, end);
    }
    //万字辈
    if (!zero_stop) {
        //进行万内
        if (go_space) {
            printf(" ");
            go_space = end >= WAN_POS;
        }
        zero_stop = print_num(&end, digit);
    }
    
    //千以内
    if (!zero_stop) {
        if (go_space)
            printf(" ");
        zero_stop = print_num(&end, digit);
    }
    printf("\n");
    
    return 0;
}
