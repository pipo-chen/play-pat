//
//  main.cpp
//  A1050
//
//  Created by mark on 2021/2/4.
//  Copyright © 2021 xihe. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace :: std;

int main(int argc, const char * argv[]) {
    char s1[10010], s2[10010];
    bool hash_table[256] = {false};
    cin.getline(s1, 10010);
    cin.getline(s2, 10010);
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for (int i = 0; i < len2; i++) {
        hash_table[s2[i]] = true;
    }
    for (int i = 0; i < len1; i++) {
        if (!hash_table[s1[i]])
            printf("%c",s1[i]);
    }
    printf("\n");
    
    return 0;
}
