//
//  main.cpp
//  L1-030
//
//  Created by zihan on 2021/12/8.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

#define NOT_VISITED -1
#define VISITED 1

struct student {
    int sex;
    string name;
    int visit;
}students[50];

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int s;
        string n;
        cin >> s >> n;
        students[i].name = n;
        students[i].sex = s;
        students[i].visit = NOT_VISITED;
    }
    int left = 0, right = n - 1;
    //根据前半段学生排名去匹配，匹配对象排名从最后往前
    while (left < n / 2) {
        right = n - 1;
        //匹配的目标性别
        int target = students[left].sex == 0 ? 1 : 0;
        //找到目标性别，且该学生尚未被匹配
        while (students[right].sex != target || students[right].visit != NOT_VISITED) {
            right--;
        }
        cout << students[left].name << " " << students[right].name << endl;
        //匹配完成，打上标签，避免重复匹配
        students[right].visit = VISITED;
        left++;
    }
    
    return 0;
}
