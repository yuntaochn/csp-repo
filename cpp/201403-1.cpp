/*********************************************************************************
 * @copyright Copyright (c) 2022  德州安丰机械制造有限公司
 * 
 * @author Zhang Yuntao (yuntaochn@gmail.com)
 * @version 0.1
 * @date 2022-02-09
 * 
 * @file 201403-1.cpp
 * @brief 相反数
 ********************************************************************************/
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    gg n, ans=0;
    cin >> n;
    vector<gg> A(n);
    for(gg &i : A) {
        cin >> i;
    }
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if (A[i] + A[j] == 0) {
                ans ++;
            }
        }
    }
    cout << ans;
    return 0;
}
