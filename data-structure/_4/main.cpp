//
//  main.cpp
//  _4
//
//  Created by 西河 on 2020/9/11.
//  Copyright © 2020 xihe. All rights reserved.
//
/**
 Each input contains one test case. Each case contains one positive integer with no more than 20 digits.

 */
#include <iostream>
using namespace::std;

void quick_sort(int nums[], int left, int right) {
    if (left > right)
        return;
    int i = left, j = right, base = nums[left];
    while (i < j) {
        while (i < j && nums[j] >= base) {
            j--;
        }
        while (i < j && nums[i] <= base) {
            i++;
        }
        if (i < j) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
    }
    nums[left] = nums[i];
    nums[i] = base;
    quick_sort(nums, left, i-1);
    quick_sort(nums, i+1, right);
}

int main(int argc, const char * argv[]) {
    char data[20];
    int num[20];
    scanf("%s",data);
    int len = 0;
    while (data[len] != '\0') {
        num[len] = data[len] - '0';
        len++;
    }
    //从末尾开始计算
    int flag = 0, start = 0, end = len;
    int res[end];
    int cp_res[end];
  
    len--;
    while (len >= 0) {
        int v = 2 * num[len] + flag;
        res[start] = v % 10;
        cp_res[start] = res[start];
        start++;
        flag = v > 9 ? 1 : 0;
        len--;
    }
    //说明位数肯定不一致。
    if (flag == 1) {
        printf("No\n");
        printf("1");
        for (int i = end - 1; i >= 0 ;i--) {
            printf("%d",res[i]);
        }
        return 0;
    }
    
    quick_sort(res, 0, end - 1);
    quick_sort(num, 0, end - 1);
    //先输出结果 后输出内容
    int r = 1;
    for (int i = 0; i < end; i++) {
        if (res[i] != num[i]) {
            r = 0;
        }
    }
    if (r == 1)
        printf("Yes\n");
    else
        printf("No\n");
    
    //卧槽 要输出排序前的原始 res
    for (int i = end - 1; i >= 0; i--){
        printf("%d",cp_res[i]);
    }
    
    return 0;
}

