//
//  main.cpp
//  L1-027
//
//  Created by zihan on 2021/12/10.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    string nums;
    cin >> nums;
    int count[10] = {0};
    //在第几个下标
    int index[12] = {0};
    for (int i = 0; i < nums.length(); i++) {
        count[(nums[i] - '0')]++;
    }
    //加入数组
    int rank = 0, arr[10];
    for (int j = 9; j >= 0; j--) {
        if (count[j] != 0) {
            arr[rank++] = j;
        }
    }
    for (int i = 0; i < nums.length(); i++) {
        //寻找对应在 arr 中的位置
        for (int j = 0; j < rank; j++) {
            if ((nums[i] - '0') == arr[j]) {
                index[i] = j;
                break;
            }
        }
    }
    printf("int[] arr = new int[]{");
    for (int i = 0; i < rank; i++) {
        printf("%d", arr[i]);
        if (i != rank - 1) {
            printf(",");
        } else {
            printf("};\n");
        }
    }
    
    printf("int[] index = new int[]{");
    for (int i = 0; i < 11; i++) {
        printf("%d",index[i]);
        if (i != 10) {
            printf(",");
        } else {
            printf("};");
        }
    }
   
    return 0;
}
