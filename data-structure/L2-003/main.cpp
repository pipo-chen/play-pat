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
    int capacity;
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
        int p;
        cin >> p;
        cake[i].price = p * 1.0 / cake[i].capacity;
    }
    sort(cake, cake + 1010, cmp);
    //优先卖贵的
    int give = 0, type = 0;
    float pay = 0;
    while (give < demand) {
        if (cake[type].capacity + give <= demand) {
            give += cake[type].capacity;
            pay += cake[type].capacity * cake[type].price;
            type++;
        } else {
            //多了 只取需要的
            int diff = demand - give;
            pay += diff * cake[type].price;
            break;
        }
    }
    printf("%.2f\n",pay);
    
    return 0;
}
