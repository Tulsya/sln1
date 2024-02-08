#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    std::cout << "������� ���������� ���������: ";
    std::cin >> n;

    std::vector<int> numbers(n);
    std::cout << "������� �����:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::sort(numbers.begin(), numbers.end(), std::greater<int>());

    auto last = std::unique(numbers.begin(), numbers.end());
    numbers.erase(last, numbers.end());

    std::cout << "���������� ����� � ������� ��������:\n";
    for (int num : numbers) {
        std::cout << num << std::endl;
    }

    return 0;
}
