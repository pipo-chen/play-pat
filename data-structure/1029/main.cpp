//
//  main.cpp
//  1029
//
//  Created by mark on 2021/1/21.
//  Copyright © 2021 xihe. All rights reserved.
//
#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string a, b, c, d;
    cin>>a>>b>>c>>d;
    char t[2];
    int i=0,j=0,pos;
     while(i < a.length() && i < b.length()) {
        if(a[i]==b[i]&&(a[i] >= 'A' && a[i] <= 'G')){//??ASCII?
            t[0]=a[i];
            break;
        }
        i++;
    }
    i=i+1;
        while (i < a.length() && i < b.length()) {
        if (a[i] == b[i] && ((a[i] >= 'A' && a[i] <= 'N') || isdigit(a[i]))) {
            t[1] = a[i];
            break;
        }
        i++;
    }
        while (j < c.length() && j < d.length()) {
        if (c[j] == d[j] && isalpha(c[j])) {
            pos = j;
            break;
        }
        j++;
    }
    string week[7]={"MON ", "TUE ", "WED ", "THU ", "FRI ", "SAT ", "SUN "};
        int m = isdigit(t[1]) ? t[1] - '0' : t[1] - 'A' + 10;
    cout << week[t[0]-'A'];
    printf("%02d:%02d", m, pos);
    return 0;
}
