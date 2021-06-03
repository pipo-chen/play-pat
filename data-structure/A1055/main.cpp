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

//进行年龄排序
bool cmp_age(People a, People b) {
    return a.age < b.age;
}

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
    //进入 k 循环
    //按年龄进行排序
    int num, minAge, maxAge;
    sort(people, people+n, cmp_age);
    for (int j = 1; j <= k; j++) {
        sort(people, people + n, cmp_age);
        scanf("%d %d %d",&num, &minAge, &maxAge);
        printf("Case #%d:\n",j);
    
        int left = 0;
        int right = n - 1;
        
        while (people[left].age < minAge && left < n)
            left++;
        while (people[right].age > maxAge && right > 0)
            right--;
        
        //1 不变 left < right
        if (left > right) {
            printf("None\n");
        }
        //2. 输出 left - right 之间的财富排序
        else {
            sort(people + left, people + right + 1, cmp_worth);
            int total = (right - left + 1) < num ? (right - left + 1) : num;
            //读取也是从排好序的这个区间内进行
            for (int k = left; k < total + left; k++) {
                printf("%s %d %ld\n",people[k].name, people[k].age, people[k].net_worth);
            }
        }
       
    }
    
    return 0;
}
