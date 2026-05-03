#include <iostream>
#include <algorithm>

int main() {
    int n;
    int i, j, k;
    int w;
    std::string s;
    std::cin >> n;
    for(i = 0; i < n; i++) {
        std::cin >> w;
        int arr[w];
        for(j = 0; j < w; j++) {
            std::cin >> arr[j];
        }
        for(j = 0; j < w; j++) {
            std::cin >> k;
            std::cin >> s;
            for(k; k > 0; k--) {
                // std::cout << s[k-1] << std::endl;
                if(s[k-1] == 'U') {
                    arr[j]--;
                } else {
                    arr[j]++;
                }
            }

            if ( arr[j] > 9 )
                arr[j] -= 10;
            if ( arr[j] < 0 )
                arr[j] += 10;

            std::cout << arr[j] << " ";
        }
        std::cout << std::endl;
    }
}