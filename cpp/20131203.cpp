/*********************************************************************************
 * @copyright Copyright (c) 2022  德州安丰机械制造有限公司
 * 
 * @author Zhang Yuntao (yuntaochn@gmail.com)
 * @version 0.1
 * @date 2022-02-09
 * 
 * @file 20131203.cpp
 * @brief 最大的矩形
 ********************************************************************************/
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main()
{
    gg n, ans;
    cin >> n;
    vector<gg> edges(n);
    for(gg& i : edges) {
        cin >> i;
    }
    for(gg i=0; i<n; i++) {
        gg m = edges[i];    // 最小高度
        for(gg j=i; j<n; j++) {
            m = min(m, edges[j]);
            ans = max(ans, (j-i+1)*m);
        }
    }
    cout << ans;
}
