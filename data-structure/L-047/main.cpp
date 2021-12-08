//
//  main.cpp
//  L-047
//
//  Created by zihan on 2021/12/8.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

//呼吸频率 15 - 20 脉搏 50 -70
int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int breath, beat;
        string name;
        cin >> name >> breath >> beat;
        if (!(breath >= 15 && breath <=20) || !(beat >= 50 && beat <= 70))
            cout << name << endl;
    }
  
    return 0;
}
