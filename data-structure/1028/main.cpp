//
//  main.cpp
//  1028
//
//  Created by mark on 2020/12/8.
//  Copyright © 2020 xihe. All rights reserved.
//
// 今年是 2014-9-6

#include <iostream>
#include <cstdio>
using namespace::std;

const int TODAY_YYYY = 2014;
const int TODAY_MM = 9;
const int TODAY_DD = 6;

struct Person {
    char name[10];
    int yyyy;
    int MM;
    int dd;
} ans_old, ans_young, temp;

bool Older(int y1, int m1, int d1, int y2, int m2, int d2) {
 
    if (y1 < y2) {
        return true;
    }
    else if (y1 == y2) {
        if (m1 < m2) {
            return true;
        }
        else if (m1 == m2) {
            if (d1 < d2) {
                return true;
            }
        }
    }
    return false;
}

int main(int argc, const char * argv[]) {
    int n, count = 0;
    scanf("%d",&n);

    ans_old.yyyy = TODAY_YYYY;
    ans_old.MM = TODAY_MM;
    ans_old.dd = TODAY_DD;
    ans_young.yyyy = TODAY_YYYY - 200;
    ans_young.MM = TODAY_MM;
    ans_young.dd = TODAY_DD;
    
    for (int i = 0; i < n; i++) {
        scanf("%s %d/%d/%d",temp.name, &temp.yyyy, &temp.MM, &temp.dd);

        if (Older(temp.yyyy, temp.MM, temp.dd, TODAY_YYYY - 200, TODAY_MM, TODAY_DD)) {
            continue;
        }
        
        if (Older(TODAY_YYYY,TODAY_MM, TODAY_DD, temp.yyyy, temp.MM, temp.dd)) {
            continue;
        }
       
        count++;
        if (Older(temp.yyyy, temp.MM, temp.dd, ans_old.yyyy, ans_old.MM, ans_old.dd)) {
            ans_old = temp;
        }
        if (Older(ans_young.yyyy, ans_young.MM, ans_young.dd, temp.yyyy, temp.MM, temp.dd)) {
            ans_young = temp;
        }
        
    }
    if (count != 0)
        printf("%d %s %s\n",count,ans_old.name, ans_young.name);
    else
        printf("%d\n",count);

    return 0;
}
