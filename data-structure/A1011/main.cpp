//
//  main.cpp
//  A1011
//
//  Created by mark on 2020/12/8.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    
    float arr[3][3];
    for (int i = 0; i < 3; i++) {
        scanf("%f %f %f",&arr[i][0],&arr[i][1],&arr[i][2]);
    }

    float multi = 0.65;
    
    for (int i = 0; i < 3; i++) {
        int max_index = 0;
        
        for (int j = 1; j < 3; j++) {
            if (arr[i][j] > arr[i][max_index]) {
                max_index = j;
            }
        }
        
        if (max_index == 0)
            printf("W ");
        else if (max_index == 1)
            printf("T ");
        else
            printf("L ");
        multi *= arr[i][max_index];
    }
    
    printf("%.2f\n",(multi-1) * 2);

    return 0;
}
