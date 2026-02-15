/*#include <iostream>
#include <vector>
#include <cmath>

// Вычисление биномиального коэффициента C(n, k)
unsigned long long binomial_coeff(int n, int k) {
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;
    unsigned long long res = 1;
    for (int i = 1; i <= k; ++i) {
        res = res * (n - i + 1) / i;
    }
    return res;
}

// Получение коэффициентов по базе (x - B)^j
std::vector<double> change_base(const std::vector<double>& f_coeffs, double a, double B) {
    int n = f_coeffs.size() - 1;
    std::vector<double> new_coeffs(n + 1, 0.0);

    for (int k = 0; k <= n; ++k) {
        for (int j = 0; j <= k; ++j) {
            double coeff = binomial_coeff(k, j) * pow(a - B, k - j);
            new_coeffs[j] += f_coeffs[k] * coeff;
        }
    }
    return new_coeffs;
}

int main() {
    int degree;
    std::cout << "Введите степень многочлена f(x): ";
    std::cin >> degree;

    std::vector<double> f_coeffs(degree + 1);
    std::cout << "Введите коэффициенты многочлена f(x): ";
    for (int i = 0; i <= degree; ++i)
        std::cin >> f_coeffs[i];

    double a, B;
    std::cout << "Введите исходное значение a: ";
    std::cin >> a;
    std::cout << "Введите значение B: ";
    std::cin >> B;

    std::vector<double> new_coeffs = change_base(f_coeffs, a, B);

    std::cout << "Коэффициенты по базе (x - " << B << ")^k:\n";
    for (size_t i = 0; i < new_coeffs.size(); ++i) {
        std::cout << new_coeffs[i] << " * (x - " << B << ")^" << i;
        if (i != new_coeffs.size() - 1)
            std::cout << " + ";
    }
    std::cout << std::endl;

    return 0;
}*/