//
//  main.cpp
//  L1-05
//
//  Created by zihan on 2021/12/6.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace :: std;

struct Student {
    string num;
    int exam;
}Student[1010];

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int t, e;
        string id;
        cin >> id >> t >> e;
        Student[t].num = id;
        Student[t].exam = e;
    }
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        int search;
        scanf("%d", &search);
        cout << Student[search].num << " "<<Student[search].exam << endl;
    }
   
    return 0;
}
