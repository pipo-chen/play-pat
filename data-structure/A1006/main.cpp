//
//  main.cpp
//  A1006
//
//  Created by mark on 2020/12/8.
//  Copyright © 2020 xihe. All rights reserved.
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
    int current_begin, current_end;
    
    for (int i = 0; i < n; i++) {
        scanf("%s %d:%d:%d %d:%d:%d", name, &bh,&bm,&bs,&eh,&em,&es);
        //计算
        current_begin = bh * 3600 + bm * 60 + bs;
        current_end = eh * 3600 + em * 60 + es;
        if (current_begin < begin) {
            strcpy(open_name, name);
            begin = current_begin;
            
        }
        if (current_end > end) {
            strcpy(close_name, name);
            end = current_end;
        }
    }
    printf("%s %s\n",open_name, close_name);
    
    return 0;
}
