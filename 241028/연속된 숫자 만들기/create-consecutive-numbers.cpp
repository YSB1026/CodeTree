#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

int mmin = INT_MAX;
int mmax = -1;
void DFS(int a, int b, int c, int cnt) {
    if (a == b || b == c) return;
    if (2 * b == a + c) {
        mmin = min(mmin, cnt);
        mmax = max(mmax, cnt);
        return;
    }

    int go1 = (b + c) / 2;
    int go2 = (a + b) / 2;

    DFS(b, go1, c, cnt + 1);
    DFS(a, go2, b, cnt + 1);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;
    DFS(a, b, c, 0);

    cout << mmin << "\n" << mmax;
    return 0;
}