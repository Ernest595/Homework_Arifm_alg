/*#include <iostream>
#include <vector>
#include <cmath>

// Функция для вычисления многочлена в точке x
double evaluate_poly(const std::vector<double>& coeffs, double x) {
    double result = 0.0;
    double power = 1.0;
    for (size_t i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * power;
        power *= x;
    }
    return result;
}

// Решение системы линейных уравнений методом Гаусса
bool solve_linear_system(std::vector<std::vector<double>>& A, std::vector<double>& b, std::vector<double>& x) {
    int n = A.size();

    for (int i = 0; i < n; ++i) {
        // Поиск максимального элемента для численного стабилизации
        int maxRow = i;
        for (int k = i + 1; k < n; ++k) {
            if (fabs(A[k][i]) > fabs(A[maxRow][i])) {
                maxRow = k;
            }
        }
        std::swap(A[i], A[maxRow]);
        std::swap(b[i], b[maxRow]);

        if (fabs(A[i][i]) < 1e-12) {
            // Система не имеет уникального решения
            return false;
        }

        // Обнуляем ниже
        for (int k = i + 1; k < n; ++k) {
            double factor = A[k][i] / A[i][i];
            for (int j = i; j < n; ++j) {
                A[k][j] -= factor * A[i][j];
            }
            b[k] -= factor * b[i];
        }
    }

    // Обратный ход
    x.resize(n);
    for (int i = n - 1; i >= 0; --i) {
        double sum = b[i];
        for (int j = i + 1; j < n; ++j) {
            sum -= A[i][j] * x[j];
        }
        x[i] = sum / A[i][i];
    }
    return true;
}

int main() {
    int k; // число многочленов g_i
    std::cout << "Введите число многочленов g_i: ";
    std::cin >> k;

    int degree_f, degree_g;
    std::cout << "Введите степень многочлена f(x): ";
    std::cin >> degree_f;

    std::vector<double> f_coeffs(degree_f + 1);
    std::cout << "Введите коэффициенты многочлена f(x): ";
    for (int i = 0; i <= degree_f; ++i)
        std::cin >> f_coeffs[i];

    std::vector<std::vector<double>> g_coeffs(k);
    std::vector<int> g_degrees(k);
    for (int i = 0; i < k; ++i) {
        std::cout << "Введите степень многочлена g_" << i + 1 << ": ";
        std::cin >> g_degrees[i];
        g_coeffs[i].resize(g_degrees[i] + 1);
        std::cout << "Введите коэффициенты многочлена g_" << i + 1 << ": ";
        for (int j = 0; j <= g_degrees[i]; ++j)
            std::cin >> g_coeffs[i][j];
    }

    // Выбираем точки для проверки
    int points = degree_f + 1; // число точек для определения системы
    std::vector<double> xs(points);
    std::vector<double> fs(points);
    double step = 1.0; // шаг по x, можно изменить
    for (int i = 0; i < points; ++i) {
        xs[i] = i * step;
        fs[i] = evaluate_poly(f_coeffs, xs[i]);
    }

    // Формируем систему A * A = b
    std::vector<std::vector<double>> A(points, std::vector<double>(k));
    std::vector<double> b(points);
    for (int i = 0; i < points; ++i) {
        for (int j = 0; j < k; ++j) {
            A[i][j] = evaluate_poly(g_coeffs[j], xs[i]);
        }
        b[i] = fs[i];
    }

    // Решаем систему
    std::vector<double> Al(k);
    if (solve_linear_system(A, b, Al)) {
        std::cout << "Многочлен f(x) принадлежит линейной оболочке, представление:\n";
        std::cout << "f(x) = ";
        for (int l = 0; l < k; ++l) {
            std::cout << Al[l] << " * g_" << l + 1 << "(x)";
            if (l != k - 1)
                std::cout << " + ";
        }
        std::cout << std::endl;
    }
    else {
        std::cout << "Нет решения: многочлен не принадлежит линейной оболочке или система несовместна.\n";
    }

    return 0;
}
*/