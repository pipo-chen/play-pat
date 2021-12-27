//
//  main.cpp
//  L2-005
//
//  Created by zihan on 2021/12/27.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <set>
using namespace::std;

int main(int argc, const char * argv[]) {
    int n, k;
    cin >> n;
    set<int> v[51];
    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        for (int j = 0; j < num; j++) {
            int temp;
            cin >> temp;
            v[i].insert(temp);
        }
    }
    cin >> k;
    for (int i = 0; i < k; i++) {
        long c1, c2, Nt = 0, same = 0;
        cin >> c1 >> c2;
        
        for (const int& temp : v[c1]) {
            if (v[c2].find(temp) != v[c2].end())
                same++;
        }
        Nt = v[c1].size() - same + v[c2].size();
        printf("%.2lf%%\n", 100 * (same * 1.0 / Nt));
        
    }
    
    return 0;
}
