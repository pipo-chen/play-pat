//
//  main.cpp
//  A1058
//
//  Created by mark on 2020/12/11.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;
//最大值：4930000000 galleon + 289 + 29
//longlong 9223372036854775807 //long：2147483647肯定溢出-4930000000

const int GALLEON = 17 * 29;
const int SICKLE = 29;
//注意 10^7 * GALLEON 有可能会溢出
int main(int argc, const char * argv[]) {
    long long g1,s1,k1,g2,s2,k2;
    scanf("%lld.%lld.%lld %lld.%lld.%lld",&g1,&s1,&k1,&g2,&s2,&k2);
    
    //即便是long long sum = 1270066392 实际=9860000000 在计算过程中，仍然错误；
    //所以在计算过程中就会出现问题
    long long sum = (g1 + g2) * GALLEON + (s1 + s2) * SICKLE + k1 + k2;
   
    long long g = sum / GALLEON;
    long long s = (sum - g * GALLEON) / SICKLE;
    long long k = sum - g * GALLEON - s * SICKLE;
    
    printf("%lld.%lld.%lld\n",g,s,k);
    return 0;
}
