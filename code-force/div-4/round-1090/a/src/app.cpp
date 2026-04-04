#include<bits/stdc++.h>
#include<algorithm>
#define FIN std::ios::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0) // Upgrade std::cin & std::cout velocity
#define dt int
#define forn(i, n) for(dt i = 0; i < n; i++)
const int INF = 10e8;

int main() {
    FIN;
    int n;
    int x;
    std::cin >> n;
    int nums[n];
    std::string s = "";
    for(dt i = 0; i < n; i++) {
        std::cin >> x;
        nums[n] = x;
        if(x != 67)
            s += std::to_string(x+1) + '\n';
        else
            s += std::to_string(67) + '\n';
    }
    std::cout << s;

    return 0;
}