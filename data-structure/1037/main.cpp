//
//  main.cpp
//  1037
//
//  Created by mark on 2020/12/10.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
using namespace std;
//17 西可 = 1 加隆 29 纳特 = 1 西可
const int JIALONG_XIKE = 17;
const int XIKE_NATE = 29;

int main(int argc, const char * argv[]) {
    int galleon, sickle, knut;
    int pay_galleon, pay_sickle, pay_knut;
    scanf("%d.%d.%d %d.%d.%d",&galleon, &sickle, &knut,&pay_galleon,&pay_sickle,&pay_knut);
    int origin_sum = galleon *JIALONG_XIKE * XIKE_NATE + sickle *XIKE_NATE + knut;
    int pay_sum = pay_galleon * JIALONG_XIKE * XIKE_NATE + pay_sickle * XIKE_NATE + pay_knut;
    
    int diff = pay_sum - origin_sum;
    if (diff < 0) {
        printf("-");
        diff *= -1;
    }
    int v1 = diff / (JIALONG_XIKE * XIKE_NATE);
    int v2 = (diff - JIALONG_XIKE * XIKE_NATE * v1) / XIKE_NATE;
    int v3 = diff - v2 * XIKE_NATE - v1 * JIALONG_XIKE * XIKE_NATE;
    
    //因为负号只要保留一个
    printf("%d.%d.%d\n",v1, v2, v3);
    return 0;
}
