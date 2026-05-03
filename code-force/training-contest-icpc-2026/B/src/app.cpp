#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> set;


bool contains(const std::string& x) {
    return std::find(set.begin(), set.end(), x) != set.end();
}

void insert(std::string x) {
    if (std::find(set.begin(), set.end(), x) == set.end()) {
        set.push_back(x);
    }
}

#include <string>

std::string remove_once(std::string s, const std::string& sub) {
    if (sub.empty()) return {};
    if (s.rfind(sub, 0) == 0) {
        s.erase(0, sub.length());
        return s;
    }
    if (s.size() >= sub.size() &&
        s.compare(s.size() - sub.size(), sub.size(), sub) == 0) {
        s.erase(s.size() - sub.size(), sub.size());
        return s;
    }
    return {};
}

int main() {
    int n;
    int c;
    int i, j;
    int total;
    std::string s;

    std::cin >> n;
    for(i = 0; i < n; i++) {
        std::cin >> c;
        set.clear();
        for(j = 0; j < c; j++) {
            std::cin >> s;
            insert(s);
        }
        for(std::string act : set) {
            total = 0;
            for(std::string aux : set) {
                std::string act_c = act;
                act_c = remove_once(act_c, aux);
                // std::cout << "act: " << act << ", aux: " << aux << ", act_c: " << act_c << std::endl;
                if(!act_c.empty()) {
                    if (contains(act_c)) {
                        total++;
                        break;
                    }
                }
            }
            std::cout << total;
        }
        std::cout << std::endl;
    }
    
    return 0;
}