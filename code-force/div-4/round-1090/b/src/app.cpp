#include<bits/stdc++.h>
#include<algorithm>
#define FIN std::ios::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0) // Upgrade std::cin & std::cout velocity
#define dt long long
#define forn(i, n) for(dt i = 0; i < n; i++)
const int INF = 10e8;

int main() {
    FIN;
    int n;
    std::cin >> n;
    dt max;
    dt output;
    dt e; // entry
    for(dt i = 0; i < n; i++) {
        max = -INF;
        output = 0;
        for(int j = 0; j < 7; j++) {
            std::cin >> e;
            output -= e;
            if(e > max)
                max = e;
        }
        output += 2*max;
        std::cout << output << '\n';
    }
    return 0;
}