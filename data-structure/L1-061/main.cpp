//
//  main.cpp
//  L1-061
//
//  Created by zihan on 2021/12/14.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    float height, weight;
    cin >> weight >> height;
    float res = weight / (height * height);
    printf("%.1f\n",res);;
    if (res> 25) {
        printf("PANG\n");
    } else {
        printf("Hai Xing\n");
    }

    return 0;
}
