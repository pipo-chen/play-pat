//
//  main.cpp
//  AA1006
//
//  Created by zihan on 2022/10/31.
//  Copyright © 2022 xihe. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace::std;
int main(int argc, const char * argv[]) {
    
    int n;
    scanf("%d",&n);
    char name[20], open_name[20], close_name[20];
    int bh,bm,bs,eh,em,es, begin = 99999, end = 0;
    for (int i = 0; i < n; i++) {
        scanf("%s %d:%d:%d %d:%d:%d", name, &bh,&bm,&bs,&eh,&em,&es);
        int total_begin = bh * 3600 + bm * 60 + bs;
        int total_end = eh * 3600 + em * 60 + es;
        if (total_begin < begin) {
            strcpy(open_name, name);
            begin = total_begin;
        }
        if (total_end > end) {
            end = total_end;
            strcpy(close_name, name);
        }
    }
    printf("%s %s", open_name, close_name);
    
    return 0;
}
