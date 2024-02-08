#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    setlocale(LC_ALL, "Russian");
    std::string text;
    std::cout << "¬ведите текст: ";
    std::getline(std::cin, text);

    std::map<char, int> charFrequency;

    for (char c : text) {
       
        if (c == ' ')
            continue;

        charFrequency[c]++;
    }

    std::vector<std::pair<char, int>> charFreqVector;
    for (const auto& pair : charFrequency) {
        charFreqVector.push_back(pair);
    }

    std::sort(charFreqVector.begin(), charFreqVector.end(), [](const std::pair<char, int>& a, const std::pair<char, int>& b) {
        return a.second > b.second;
        });

    for (const auto& pair : charFreqVector) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}

