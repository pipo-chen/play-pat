//
//  main.cpp
//  L2-003
//
//  Created by zihan on 2021/12/22.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace ::std;

struct Cake {
    float price;
    float total;
    float capacity;
}cake[1010];

bool cmp(Cake a, Cake b) {
    return a.price > b.price;
}
int main(int argc, const char * argv[]) {
    int n, demand;
    cin >> n >> demand;

    for (int i = 0; i < n; i++) {
        cin >> cake[i].capacity;
    }
    for (int i = 0; i < n; i++) {
        cin >> cake[i].total;
        cake[i].price = cake[i].total / cake[i].capacity;
    }
    sort(cake, cake + 1010, cmp);
    //优先卖贵的
    float pay = 0;
    //还有一种可能 供不应求 或者 供给全满了也满足不了
    for (int i = 0; i < n; i++) {
        if (cake[i].capacity <= demand) {
            pay = pay + cake[i].total;
        } else {
            //多了 只取需要的
            pay = pay + demand * cake[i].price;
            break;
        }
        demand = demand - cake[i].capacity;
    }
    printf("%.2f",pay);
    
    return 0;
}
