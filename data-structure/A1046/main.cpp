//
//  main.cpp
//  A1046
//
//  Created by mark on 2020/9/17.
//  Copyright © 2020 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;

int main() {
    int n;
    scanf("%d",&n);
    int data[n];
    int length = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d",&data[i]);
        length += data[i];
       
    }
    
    int count, num1, num2, sum=0, i = 0;
    scanf("%d",&count);
    int result[count];
    
    while (i < count) {
        scanf("%d %d",&num1,&num2);
        sum = 0;
        if (num1 > num2) {
            int temp = num2;
            num2 = num1;
            num1 = temp;
        }
        
        for (int k = num1 - 1; k < num2 - 1; k++) {
            sum += data[k];
        }
        result[i] = sum < length - sum ? sum : length - sum;
        printf("%d\n",result[i]);
        i++;
    }
    
    return 0;
}
