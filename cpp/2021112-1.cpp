/*********************************************************************************
 * @copyright Copyright (c) 2022  德州安丰机械制造有限公司
 * 
 * @author Zhang Yuntao (yuntaochn@gmail.com)
 * @version 0.1
 * @date 2022-02-08
 * 
 * @file 2021112-1.cpp
 * @brief 序列查询
 ********************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, N;
    cin >> n >> N;

    vector<int> A;
    A.emplace_back(0);
    for(int i=1; i<=n; i++) {
        int A_i;
        cin >> A_i;
        A.emplace_back(A_i);
    }
    A.emplace_back(N);

    int sum = 0;
    for(int i=0; i<=n; i++) {
        sum += (A[i+1] - A[i]) * i;
    }

    cout << sum << endl;

    return 0;
}


/*********************************************************************************
 * @brief 
 * 
 * push_back 加入元素需要先构造然后拷贝或移动，
 * 而emplace_back可以原地构造对象，然后加入到容器中，
 * 可以减少一次拷贝或构造。
 * 
 * sync_with_stdio
 * 这个函数是一个“是否兼容stdio”的开关，C++为了兼容C，
 * 保证程序在使用了std::printf和std::cout的时候不发生混乱，
 * 将输出流绑到了一起。
 ********************************************************************************/
