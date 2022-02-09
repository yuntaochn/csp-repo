#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
using gg = long long;

struct Window
{
    gg num, x1, y1, x2, y2;
};

int main()
{
    IOS;
    gg n, m;
    cin >> n >> m;

    gg num = 1;
    list<Window> windows(n);
    // 反向迭代器 输入是按从最下层到最顶层的顺序输入的
    for(auto i=windows.rbegin(); i!=windows.rend(); i++) {
        cin >> i->x1 >> i->y1 >> i->x2 >> i->y2;
        i->num = num++;
    }
    gg x, y;
    while (m--) {
        cin >> x >> y;
        auto i = find_if(windows.begin(), windows.end(), [x, y](const Window& w) {
            return w.x1 <= x and w.x2 >= x and w.y1 <= y and w.y2 >= y;
        });
        if (i == windows.end()) {
            cout << "IGNORED" << endl;
            continue;
        }
        cout << i->num << endl;
        windows.push_front(*i);
        windows.erase(i);
    }
    return 0;
}
