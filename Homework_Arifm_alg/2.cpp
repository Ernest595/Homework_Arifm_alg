/*#include <iostream>
#include <vector>
#include <cmath>

// Функция для оценки многочлена в точке x
double evaluate_poly(const std::vector<double>& coeffs, double x) {
    double result = 0.0;
    double power = 1.0;
    for (size_t i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * power;
        power *= x;
    }
    return result;
}

// Разложение многочлена f(x) по базису (x - a)^k
// Возвращает коэффициенты c_k, такие что 
// f(x) = sum c_k * (x - a)^k
std::vector<double> decompose_into_binom(const std::vector<double>& f_coeffs, double a) {
    int n = f_coeffs.size() - 1; // степень многочлена
    std::vector<double> c(n + 1, 0.0);
    std::vector<double> temp_coeffs = f_coeffs;

    // Используем алгоритм для преобразования в биномиальные коэффициенты
    for (int k = n; k >= 0; --k) {
        c[k] = temp_coeffs[k];
        for (int j = 0; j < k; ++j) {
            temp_coeffs[j] -= c[k] * pow(a, k - j);
        }
    }
    return c;
}

int main() {
    int degree;
    std::cout << "Введите степень многочлена f(x): ";
    std::cin >> degree;

    std::vector<double> f_coeffs(degree + 1);
    std::cout << "Введите коэффициенты многочлена f(x) в порядке от константы к старшей степени: ";
    for (int i = 0; i <= degree; ++i)
        std::cin >> f_coeffs[i];

    double a;
    std::cout << "Введите число a: ";
    std::cin >> a;

    // Разложение
    std::vector<double> c_coeffs = decompose_into_binom(f_coeffs, a);

    // Вывод результата
    std::cout << "Разложение многочлена в базис (x - " << a << ")^k:\n";
    for (size_t k = 0; k < c_coeffs.size(); ++k) {
        std::cout << c_coeffs[k] << " * (x - " << a << ")^" << k;
        if (k != c_coeffs.size() - 1)
            std::cout << " + ";
    }
    std::cout << std::endl;

    return 0;
}
*/