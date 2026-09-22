#include <bits/stdc++.h>
using namespace std;

int depth[2001] = {0};
int p[2001];

// dfs and count height
int getDepth(int i) {
    if (depth[i]) return depth[i];
    if (p[i] == -1) return depth[i] = 1;
    return depth[i] = 1 + getDepth(p[i]);
}

int main() {
    int n;
    cin >> n;

    // add to array
    for (int i = 1; i <= n; i++)
        cin >> p[i];

    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans = max(ans, getDepth(i));

    cout << ans << endl;
}
