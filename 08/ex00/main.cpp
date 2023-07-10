#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

int main()
{
    std::vector<int> values = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < (int)values.size(); i++) {
        std::cout << values[i] << std::endl;
    }
    // for (int value : values) {
    //     std::cout << value << std::endl;
    // }
    for (std::vector<int>::iterator it = values.begin(); it != values.end(); it++) {
        std::cout << *it << std::endl;
    }
    
    using ScoreMap = std::unordered_map<std::string, int>;
    ScoreMap map;
    map["Hello"] = 5;
    map["World"] = 2;
    
    for (ScoreMap::const_iterator it = map.begin(); it != map.end(); it++) {
        std::cout << it->first << " : " << it->second << std::endl;
    }

}
