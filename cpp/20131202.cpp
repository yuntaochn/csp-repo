/*********************************************************************************
 * @copyright Copyright (c) 2022  德州安丰机械制造有限公司
 * 
 * @author Zhang Yuntao (yuntaochn@gmail.com)
 * @version 0.1
 * @date 2022-02-09
 * 
 * @file 20131202.cpp
 * @brief ISBN 号码
 ********************************************************************************/
#include <bits/stdc++.h>
using namespace std;

using gg = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string si;
    cin >> si;
    gg num = 1, s = 0;
    for(gg i=0; i<si.size()-1; i++) {
        if (isdigit(si[i])) {
            s +=  (si[i]-'0') * (num++);
        }
    }
    // 注意X的大小写要求，题目明确要求大写
    char c = s % 11 == 10 ? 'X' : s%11+'0';
    if (si.back() == c) {
        cout << "Right" << endl;
    } else {
        si.back() = c;
        cout << si;
    }
    return 0;
}
