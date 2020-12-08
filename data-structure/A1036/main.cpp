//
//  main.cpp
//  A1036
//
//  Created by mark on 2020/12/8.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

const int MAX_GRADE = 101;
const int MIN_GRADE = -1;
struct Person {
    char name[15];
    char id[15];
    char gender;
    int grade;
} ans_male, ans_female, temp;

int main(int argc, const char * argv[]) {
  
    int n;
    scanf("%d",&n);
    ans_male.grade = MAX_GRADE;
    ans_female.grade = MIN_GRADE;
    for (int i = 0; i < n; i++) {
        scanf("%s %c %s %d",temp.name, &temp.gender, temp.id, &temp.grade);
        //女生中取最高分
        if (temp.gender == 'F' && temp.grade > ans_female.grade) {
            ans_female = temp;
        }
        //男生中取最低分
        else if (temp.gender == 'M' && temp.grade < ans_male.grade) {
            ans_male = temp;
        }
    }
    if (ans_male.grade != MAX_GRADE && ans_female.grade != MIN_GRADE) {
        printf("%s %s\n%s %s\n%d\n",ans_female.name, ans_female.id, ans_male.name,ans_male.id,ans_female.grade - ans_male.grade);
    }
    else if (ans_male.grade == MAX_GRADE && ans_female.grade != MIN_GRADE) {
        printf("%s %s\nAbsent\nNA\n",ans_female.name, ans_female.id);
    }
    else if (ans_male.grade != MAX_GRADE && ans_female.grade == MIN_GRADE) {
        printf("Absent\n%s %s\nNA\n",ans_male.name, ans_male.id);
    }
    else {
        printf("NA\n");
    }
    return 0;
}
