#include <iostream>
using namespace std;

// Задача 1: Проверка "счастливого" шестизначного числа
void task1() {
    cout << "=== Задача 1: Проверка счастливого числа ===" << endl;
    
    int number;
    cout << "Введите шестизначное число: ";
    cin >> number;

    if (number < 100000 || number > 999999) {
        cout << "Ошибка! Число должно быть шестизначным." << endl;
        return;
    }
    
    int digit1 = number / 100000;
    int digit2 = (number / 10000) % 10;
    int digit3 = (number / 1000) % 10;
    int digit4 = (number / 100) % 10;
    int digit5 = (number / 10) % 10;
    int digit6 = number % 10;
    
    int sumFirst = digit1 + digit2 + digit3;
    int sumLast = digit4 + digit5 + digit6;
    
    if (sumFirst == sumLast) {
        cout << "Число " << number << " является счастливым!" << endl;
    } else {
        cout << "Число " << number << " не является счастливым." << endl;
    }
}

// Задача 2: Перестановка цифр в четырехзначном числе
void task2() {
    cout << "\n=== Задача 2: Перестановка цифр ===" << endl;
    
    int number;
    cout << "Введите четырехзначное число: ";
    cin >> number;

    if (number < 1000 || number > 9999) {
        cout << "Ошибка! Число должно быть четырехзначным." << endl;
        return;
    }
    
    int digit1 = number / 1000;
    int digit2 = (number / 100) % 10;
    int digit3 = (number / 10) % 10;
    int digit4 = number % 10;
    
    int newNumber = digit2 * 1000 + digit1 * 100 + digit4 * 10 + digit3;
    
    cout << "Исходное число: " << number << endl;
    cout << "Число после перестановки: " << newNumber << endl;
}

// Задача 3: Нахождение максимального из 7 чисел
void task3() {
    cout << "\n=== Задача 3: Поиск максимального числа ===" << endl;
    
    int numbers[7];
    
    cout << "Введите 7 целых чисел:" << endl;
    for (int i = 0; i < 7; i++) {
        cout << "Число " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    int maxNumber = numbers[0];
    for (int i = 1; i < 7; i++) {
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i];
        }
    }
    
    cout << "Максимальное число: " << maxNumber << endl;
}

int main() {
    task1();
    task2();
    task3();
    return 0;
}
