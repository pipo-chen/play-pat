//
//  main.cpp
//  L1-064
//
//  Created by zihan on 2021/12/14.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
using namespace::std;
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++) {
        string str;
        getline(cin, str);
        cout << str << endl;
        cout << "AI: ";
        //开始处理字符串
        //去掉收尾的空格
        long first_space = 0, last_space = str.size() - 1;
        //去掉前空格
        while (str[first_space] == ' ') {
            first_space++;
        }
        //去掉后空格
        while (str[last_space] == ' ') {
            last_space--;
        }
        //先做字符替换
        //先处理一边字符串中间的空格
        for (long index = last_space; index >= first_space; index--) {
            //大写字母全部小写
            if (str[index] >= 'A' && str[index] <='Z' && str[index] != 'I') {
                str[index] += 32;
            }
            while ( index != first_space && str[index - 1] == ' ' && (ispunct(str[index]) || str[index] == ' ' )) {
                //从前往后覆盖
                for (long x = index - 1; x > first_space; x--) {
                    str[x] = str[x - 1];
                }
                first_space++;
            }
        }
        
        //开始输出 去掉中间多余的空格 符号前面的空格也属于多余
        for (long j = first_space; j <= last_space; j++) {
            //不输出中间多余空格
            if ( j > first_space && str[j] == ' ' && str[j] == str[j - 1]) {
                continue;
            }
            
            if (str[j] == '?') {
                cout << "!";
                continue;
            }
            //把原文中所有独立的 I 和 me 换成 you；
            if (str[j] =='I') {
                //前面不是字母 后面也不是字母 符号是没关系的
                if ((j != first_space && j != last_space && (! (str[j - 1] <= 'z' && str[j - 1] >= 'a')) && (! (str[j + 1] <= 'z' && str[j + 1] >= 'a'))) || (j == first_space && j + 1 <= last_space && (! (str[j + 1] <= 'z' && str[j + 1] >= 'a'))) || (j == last_space && j - 1 >= first_space && (! (str[j - 1] <= 'z' && str[j - 1] >= 'a')))) {
                    printf("you");
                    continue;
                }
//                else {
//                    printf("i");
//                    continue;
//                }
                
            }
            if (str[j] == 'm') {
                //判断后面的字符是否是 e 和 ' ' 或者最后一位
                if ((j + 1 <= last_space && str[j + 1] == 'e' && j + 2 <= last_space && str[j + 2] == ' ') || (j + 1 == last_space && str[j + 1] == 'e') ) {
                    printf("you");
                    //多移动了一位
                    j++;
                    continue;
                }
            }
            //遇到 c 开头 就要判断后面的字符是否是 can you 或者是 could you
            if (str[j] == 'c') {
                //从这往后数 先判断后续是否是 can you
                string compare = "can you";
                bool flag = true;
                for (int k = 0; k < compare.size(); k++) {
                    if (!(j + k <= last_space && str[j + k] == compare[k])) {
                        flag = false;
                        break;
                    }
                        
                }
                if (flag) {
                    printf("I can");
                    j += compare.size() - 1;
                    continue;
                }
                
                //有可能中间还有单词夹着 还是得先处理空格才行 中间的空格不能跳开了
                compare = "could you";
                flag = true;
                for (int k = 0; k < compare.size(); k++) {
                    if (!(j + k <= last_space && str[j + k] == compare[k])) {
                        flag = false;
                        break;
                    }
                        
                }
                if (flag) {
                    printf("I could");
                    j += compare.size() - 1;
                    continue;
                }
            }
            cout << str[j];

        }
        cout << endl;
    }
    return 0;
}
