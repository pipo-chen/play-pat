//
//  main.cpp
//  L1-070
//
//  Created by zihan on 2021/12/14.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <string>

using namespace::std;

int main(int argc, const char * argv[]) {
    string sentence;
    getline(cin, sentence);
    int count = 0, flag = 0, first = -1;
    while (sentence != ".") {
        count++;
        
        if(sentence.find("chi1 huo3 guo1") != string :: npos) {
            flag++;
            first = first == -1 ? count : first;
        }
        
        //判断是否包含 chi1 huo3 guo1
        getline(cin, sentence);
    }
    cout << count << endl;
    if (flag) {
        cout << first << " " << flag << endl;
    } else {
        cout << "-_-#" << endl;
    }
    return 0;
}
