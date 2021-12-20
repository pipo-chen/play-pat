//
//  main.cpp
//  L1-56
//
//  Created by zihan on 2021/12/20.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace::std;
struct student {
    string name;
    int guess;
    int diff;
}students[10010];

bool cmp(student a, student b) {
    return a.diff < b.diff;
}
int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> students[i].name >> students[i].guess;
        sum += students[i].guess;
    }
    sum /= n * 2;
    for (int i = 0; i < n; i++) {
        //绝对值
        int diff = students[i].guess - sum;
        students[i].diff = diff < 0 ? -1 * diff : diff ;
    }
    //开始进行排序
    sort(students, students + n, cmp);
    cout << sum << " " << students[0].name << endl;

    return 0;
}
