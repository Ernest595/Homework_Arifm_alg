/*#include <iostream>
#include <vector>

double limit_at_infinity(const std::vector<double>& f_coeffs, const std::vector<double>& g_coeffs, bool positive_infinity) {
    int degree_f = f_coeffs.size() - 1;
    int degree_g = g_coeffs.size() - 1;

    double f_leading = f_coeffs.back();
    double g_leading = g_coeffs.back();

    if (degree_f > degree_g) {
        // Степень числителя больше, предел - бесконечность
        return (f_leading / fabs(f_leading)) * (positive_infinity ? 1 : -1);
    }
    else if (degree_f < degree_g) {
        // Степень знаменателя больше, предел 0
        return 0.0;
    }
    else {
        // Степень равна, предел - отношение ведущих коэффициентов
        return f_leading / g_leading;
    }
}

int main() {
    int degree_f, degree_g;
    std::cout << "Введите степень многочлена f(x): ";
    std::cin >> degree_f;
    std::vector<double> f_coeffs(degree_f + 1);
    std::cout << "Введите коэффициенты многочлена f(x): ";
    for (int i = 0; i <= degree_f; ++i)
        std::cin >> f_coeffs[i];

    std::cout << "Введите степень многочлена g(x): ";
    std::cin >> degree_g;
    std::vector<double> g_coeffs(degree_g + 1);
    std::cout << "Введите коэффициенты многочлена g(x): ";
    for (int i = 0; i <= degree_g; ++i)
        std::cin >> g_coeffs[i];

    // Предел при x -> +∞
    double limit_pos_inf = limit_at_infinity(f_coeffs, g_coeffs, true);
    // Предел при x -> -∞
    double limit_neg_inf = limit_at_infinity(f_coeffs, g_coeffs, false);

    std::cout << "Предел при x -> +∞: " << limit_pos_inf << std::endl;
    std::cout << "Предел при x -> -∞: " << limit_neg_inf << std::endl;

    return 0;
}*/