#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

int main() {
    setlocale(LC_ALL, "RU");
    std::vector<int> firstVector;
    srand(static_cast<unsigned>(time(0)));
    for (int i = 0; i < 10; ++i) {
        firstVector.push_back(rand() % 41 - 20);
    }
    std::cout << "Первый вектор: ";
    for (int num : firstVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    firstVector.erase(std::remove_if(firstVector.begin(), firstVector.end(), [](int num) {
        return num <= 0;
        }), firstVector.end());
    std::sort(firstVector.begin(), firstVector.end());
    std::cout << "Первый вектор после изменений: ";
    for (int num : firstVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::vector<int> secondVector;
    for (int num : firstVector) {
        secondVector.push_back(num);
    }
    std::cout << "второй вектор : ";
    for (int num : secondVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
