//
//  main.cpp
//  A1028
//
//  Created by mark on 2021/5/27.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <algorithm>

using namespace :: std;
struct Student {
    char name[8];
    long id;
    int grade;
}stu[100010];

bool cmp_id(Student a, Student b) {
    return a.id < b.id;
}
bool cmp_name(Student a, Student b) {
    if (strcmp(a.name, b.name) != 0)
        return strcmp(a.name, b.name) < 0;
    return a.id < b.id;
}
bool cmp_grade(Student a, Student b) {
    if (a.grade != b.grade)
        return a.grade < b.grade;
    return a.id < b.id;
}

int main(int argc, const char * argv[]) {
    int n, c;
    scanf("%d %d", &n, &c);
    for (int i = 0; i < n; i++) {
        //输出id 的时候 前面不足 就补零
        scanf("%ld %s %d",&stu[i].id, stu[i].name, &stu[i].grade);
    }
    if (c == 1) {
        sort(stu, stu + n, cmp_id);
    } else if (c == 2) {
        sort(stu, stu + n, cmp_name);
    } else {
        sort(stu, stu + n, cmp_grade);
    }
    for (int i = 0; i < n; i++) {
        printf("%06ld %s %d\n",stu[i].id, stu[i].name, stu[i].grade);
    }
    return 0;
}
