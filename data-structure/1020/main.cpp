//
//  main.cpp
//  1020
//
//  Created by mark on 2021/2/5.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace :: std;

struct Cake {
    int inventory;
    float price;
} cake[1010];

int cmp (Cake a, Cake b) {
    return a.price > b.price;
}

int main(int argc, const char * argv[]) {
    int N, D;
    scanf("%d %d", &N, &D);
    
    //输入库存量
    for (int i = 0; i < N; i++) {
        scanf("%d",&cake[i].inventory);
    }
    //输入总售价
    for (int i = 0; i < N; i++) {
        float total_price;
        scanf("%f", &total_price);
        //单价存储 还要根据单价进行排序
        cake[i].price = total_price / cake[i].inventory;
    }
    
    sort(cake, cake + N, cmp);
    float total_pay = 0;
    for (int i = 0; i < N; i++) {
        //如果能全部提供
        if (D <= cake[i].inventory) {
            total_pay += D * cake[i].price;
            break;
        } else {
            total_pay += cake[i].inventory * cake[i].price;
            D -= cake[i].inventory;
        }
    }
    
    printf("%.2f\n",total_pay);
    
    return 0;
}
