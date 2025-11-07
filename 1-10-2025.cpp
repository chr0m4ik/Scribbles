#include <iostream>
using namespace std;

// Функция для проверки високосного года
bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    }
    return false;
}

// Функция для вычисления количества дней между двумя датами
int task1(int day1, int month1, int year1, int day2, int month2, int year2) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    auto daysSinceEpoch = [&](int day, int month, int year) {
        int totalDays = 0;
        
        for (int y = 0; y < year; y++) {
            totalDays += isLeapYear(y) ? 366 : 365;
        }
        
        for (int m = 0; m < month - 1; m++) {
            totalDays += daysInMonth[m];
            if (m == 1 && isLeapYear(year)) {
                totalDays += 1;
            }
        }
        
        totalDays += day;
        
        return totalDays;
    };
    
    int days1 = daysSinceEpoch(day1, month1, year1);
    int days2 = daysSinceEpoch(day2, month2, year2);
    
    return abs(days2 - days1);
}

// Функция для вычисления среднего арифметического элементов массива
double task2(int arr[], int size) {
    if (size == 0) {
        return 0.0;
    }
    
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    double average = static_cast<double>(sum) / size;
    return average;
}

// Функция для подсчета положительных, отрицательных и нулевых элементов
void task3(int arr[], int size, int &positive, int &negative, int &zero) {
    positive = 0;
    negative = 0;
    zero = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;  
        } else {
            zero++;
        }
    }
}

int main() {
    cout << "=== Задание 1: Разность в днях между датами ===" << endl;
    
    int day1 = 1, month1 = 1, year1 = 2020;
    int day2 = 1, month2 = 1, year2 = 2021;
    int difference = task1(day1, month1, year1, day2, month2, year2);
    
    cout << "Разница между " << day1 << "." << month1 << "." << year1;
    cout << " и " << day2 << "." << month2 << "." << year2;
    cout << " составляет " << difference << " дней" << endl;
    
    cout << endl << "=== Задание 2: Среднее арифметическое массива ===" << endl;
    
    int arr2[] = {10, -2, 8, 0, 14};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    double average2 = task2(arr2, size2);
    cout << "Массив: ";
    for (int i = 0; i < size2; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl << "Среднее арифметическое: " << average2 << endl;
    
    cout << endl << "=== Задание 3: Подсчет элементов массива ===" << endl;

    int arr3[] = {1, -2, 0, 5, -3, 0, 8};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    int positive, negative, zero;
    
    task3(arr3, size3, positive, negative, zero);
    
    cout << "Массив: ";
    for (int i = 0; i < size3; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl << "Положительных элементов: " << positive << endl;
    cout << "Отрицательных элементов: " << negative << endl;
    cout << "Нулевых элементов: " << zero << endl;
    
    return 0;
}
