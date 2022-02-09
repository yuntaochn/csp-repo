/*********************************************************************************
 * @copyright Copyright (c) 2022  德州安丰机械制造有限公司
 * 
 * @author Zhang Yuntao (yuntaochn@gmail.com)
 * @version 0.1
 * @date 2022-02-09
 * 
 * @file 20131201.cpp
 * @brief 出现次数最多的数
 ********************************************************************************/
#include <bits/stdc++.h>

using namespace std;

using gg = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    gg ni, ai;
    cin >> ni;
    map<gg, gg> m;
    while (ni--)
    {
        cin >> ai;
        ++m[ai];    
    }
    cout << max_element(m.begin(), m.end(),
                [](const pair<gg, gg>& p1, const pair<gg, gg>& p2){
                    return p1.second < p2.second;
                })->first;

    return 0;
}
