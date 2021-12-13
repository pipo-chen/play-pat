//
//  main.cpp
//  L1-034
//
//  Created by zihan on 2021/12/13.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int count[10010] = {0};
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int blog;
            cin >> blog;
            count[blog]++;
        }
    }
    int max = 0;
    for (int k = 0; k < 10010; k++) {
        if (count[k] != 0 && count[k] >= count[max]) {
            max = k;
        }
    }
    cout << max << " " << count[max] << endl;
    return 0;
}
