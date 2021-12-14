//
//  main.cpp
//  L1-063
//
//  Created by zihan on 2021/12/14.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    for (int i =0; i < n; i++) {
        int sex, height, weight;
        cin >> sex >> height >> weight;
        int stand_height = sex == 0 ?  129 : 130;
        int stand_weight = sex == 0 ? 25 : 27;
        if (height < stand_height) {
            printf("duo chi yu! ");
            
        }
        if (height > stand_height) {
            printf("ni li hai! ");
        }
        if (height == stand_height) {
            printf("wan mei! ");
        }
        if (weight < stand_weight) {
            printf("duo chi rou!");
            
        }
       
        if (weight > stand_weight) {
            printf("shao chi rou!");
        }
        if (weight == stand_weight) {
            printf("wan mei!");
        }
        printf("\n");
    }
    return 0;
}
