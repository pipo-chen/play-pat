//
//  main.cpp
//  L1-035
//
//  Created by zihan on 2021/12/13.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    string name;
    cin >> name;
    int count = 1;
    string a = "", b = "";
    while (name != ".") {
        if (count == 2)
            a = name;
        if (count == 14)
            b = name;
        count++;
        cin >> name;
    }
    if (count <= 2)
        cout << "Momo... No one is for you ..." << endl;
    else if (count < 14)
        cout << a << " is the only one for you..." << endl;
    else
        cout << a <<" and "<< b <<" are inviting you to dinner..." << endl;
    
    return 0;
}
