//
//  main.cpp
//  A1062
//
//  Created by mark on 2021/1/6.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;;
struct Student {
    int cai, de, sum;
    char id[10];
    int level;
} stu[100010];

bool cmp(Student a, Student b) {
    if (a.level != b.level)
        return a.level < b.level; //类别小的在前面
    else if (a.sum != b.sum)
        return a.sum > b.sum;
    else if (a.de != b.de)
        return a.de > b.de;
    //最后根据id进行
    else
        return strcmp(a.id, b.id) < 0;
}

int main(int argc, const char * argv[]) {
    int N, L, H, m = 0;
    scanf("%d %d %d",&N, &L, &H);
    
    for (int i = 0; i < N; i++) {
        scanf("%s %d %d",stu[m].id, &stu[m].de, &stu[m].cai);
       //把不及格的也纳入考虑
        if (stu[m].de >= L && stu[m].cai >= L) {
            stu[m].sum = stu[m].cai + stu[m].de;
            
            if (stu[m].cai >= H && stu[m].de >= H)
                stu[m].level = 1;
            
            else if (stu[m].de >= H && stu[m].de < H)
                stu[m].level = 2;
            
            else if (stu[m].de >= stu[m].cai)
                stu[m].level = 3;
            
            else
                stu[m].level = 4;
            m++;
        }
        
    }
    //排序
    sort(stu, stu + m, cmp);
    printf("%d\n",m);
    for (int i = 0; i < m; i++) {
        printf("%s %d %d\n",stu[i].id, stu[i].de, stu[i].cai);
    }

    return 0;
}
