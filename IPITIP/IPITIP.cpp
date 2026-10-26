#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Сколько чисел хотите ввести? ";
    std::cin >> n;

    std::vector<double> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Число " << i + 1 << ": ";
        std::cin >> numbers[i];
    }

    double sum = 0;
    for (double x : numbers) sum += x;

    std::cout << "Вы ввели: ";
    for (double x : numbers) std::cout << x << " ";
    std::cout << "\nСумма: " << sum;
    if (n > 0) std::cout << "\nСреднее: " << sum / n;
    std::cout << std::endl;

    return 0;
}