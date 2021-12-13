//
//  main.cpp
//  L1-043
//
//  Created by zihan on 2021/12/13.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

struct book {
    int begin;
    int end;
    int status;
    int minutes;
} books[1010];

int main(int argc, const char * argv[]) {
    int n, day = 0;
    cin >> n;
    //初始化
    for (int i = 0; i < 1010; i++) {
        books[i].status = -1;
        books[i].minutes = 0;
    }
    while (day < n) {
        int index, begin, end;
        char ope;
        //如果输入的是 0 则开始结算
        scanf("%d %c %d:%d",&index, &ope, &begin, &end);
        if (index == 0) {
            day++;
            //开始清算
            int count = 0, total_time = 0;
            for(int i = 0; i < 1010; i++) {

                if (books[i].minutes != 0) {
                    count++;
                    total_time += books[i].minutes;
                }
                books[i].status = -1;
                books[i].minutes = 0;
            }
            printf("%d %.0f\n", count, count != 0 ? total_time * 1.0 / count : 0);
        }
        else {
            //判断之前是否有begin 和 end 且当前的ope 是E
            if (ope == 'E' && books[index].status != -1) {
                //结束计时⌛️
                books[index].minutes = begin * 60 + end - books[index].begin * 60 - books[index].end;
            } else if (ope == 'S' && books[index].status == -1) {
                //开始录入
                books[index].status = 1;
                books[index].begin = begin;
                books[index].end = end;
            }
            
        }
    }
    
    return 0;
}
