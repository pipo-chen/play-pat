//
//  main.cpp
//  A1012
//
//  Created by mark on 2021/1/8.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace::std;

struct Student {
    int id;
    int grade[4];
}stu[2010];

int now;

bool cmp(Student a, Student b) {
    return a.grade[now] > b.grade[now];
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d %d",&stu[i].id, &stu[i].grade[1], &stu[i].grade[2], &stu[i].grade[3]);
        
        stu[i].grade[0] = round((stu[i].grade[1] + stu[i].grade[2] + stu[i].grade[3]) / 3.0) + 0.5;
    }
    
    
}
