#include<iostream>
#include<set>

int main() {
    int n;
    int l;
    int j;
    int i;
    int total = 0;
    std::set<char> set;
    std::string s;

    std::cin >> n;
    
    for (i = 0; i < n; i++) {
        total = 0;
        set.clear();

        std::cin >> l;
        std::cin >> s;
        
        for(j = 0; j < l; j++) {
            if(set.contains(s[j])) {
                total++;
            } else {
                total+=2;
                set.insert(s[j]);
            }
        }
    
        std::cout << total << std::endl;
    }
    return 0;
}