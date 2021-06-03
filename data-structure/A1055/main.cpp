//
//  main.cpp
//  A1055
//
//  Created by mark on 2021/6/2.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace :: std;

struct People {
    char name[10];
    int age;
    long net_worth;
}people[100010];

//排序
bool cmp_worth(People a, People b) {
    if (a.net_worth != b.net_worth)
        return a.net_worth > b.net_worth;
    if (a.age != b.age)
        return a.age < b.age;
    return strcmp(a.name, b.name) < 0;
}

//在每个年龄区间范围内 再进行排序 先进行年龄排序吧
int main(int argc, const char * argv[]) {
    
    int n, k;
    scanf("%d %d",&n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%s %d %ld",people[i].name, &people[i].age, &people[i].net_worth);
    }

    int num, minAge, maxAge;
    sort(people, people + n, cmp_worth);
    
    for (int j = 1; j <= k; j++) {
        scanf("%d %d %d",&num, &minAge, &maxAge);
        printf("Case #%d:\n",j);
        //方法二、按财富进行排序 财富相同按年龄 年龄相同按姓名 遍历 如果年龄满足区间则输出
        int flag = 0;
        for (int j = 0; j < n && flag < num; j++) {
            if (people[j].age >= minAge && people[j].age <= maxAge) {
                printf("%s %d %ld\n",people[j].name, people[j].age, people[j].net_worth);
                flag++;
            }
        }
        if (flag == 0)
            printf("None\n");
      
    }
    
    return 0;
}
