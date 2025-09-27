#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
void TASK1() { 
    int length, time;
    cout << "Введите расстояние в километрах: ";
    cin >> length;
    cout << "Введите время пути в минутах: ";
    cin >> time;

    if (length <= 0 || time <= 0) {
        cout << "Ошибка! Введите положительные числа!";
        return;
    }

    double hours = time / 60.0;
    double speed = length / hours;

    cout << "Скорость должна составлять: " << speed << " километров в час.";
}

void TASK2() {
    int hours, minutes, seconds;
    cout << "Введите время поездки:" << endl;
    cout << "Часы: ";
    cin >> hours;
    cout << "Минуты: ";
    cin >> minutes;
    cout << "Секунды: ";
    cin >> seconds;

    int total_minutes = hours * 60 + minutes;
    if (seconds > 0) total_minutes++;

    double cost = total_minutes * 2.0;

    cout << endl << "Результат расчета:" << endl;
    cout << "Общее время: " << total_minutes << " минут" << endl;
    cout << "Стоимость поездки: " << cost << " гривен" << endl;
}

void TASK3() {
    double distance, consumption;
    double price92, price95, price100;
    
    cout << "Введите расстояние (км): ";
    cin >> distance;
    cout << "Введите расход бензина на 100 км (л): ";
    cin >> consumption;
    cout << "Введите стоимость бензина 92 (гривны/литр): ";
    cin >> price92;
    cout << "Введите стоимость бензина 95 (гривны/литр): ";
    cin >> price95;
    cout << "Введите стоимость бензина 100 (гривны/литр): ";
    cin >> price100;

    double total_fuel = (consumption * distance) / 100.0;
    double cost92 = total_fuel * price92;
    double cost95 = total_fuel * price95;
    double cost100 = total_fuel * price100;

    cout << endl << "Результаты расчета:" << endl;
    cout << "Общий расход бензина: " << fixed << setprecision(2) << total_fuel << " л" << endl;
    cout << "----------------------------------------" << endl;
    cout << "| Марка бензина | Цена за литр | Стоимость |" << endl;
    cout << "----------------------------------------" << endl;
    cout << "| 92            | " << setw(11) << price92 << " | " << setw(8) << fixed << setprecision(2) << cost92 << " |" << endl;
    cout << "| 95            | " << setw(11) << price95 << " | " << setw(8) << fixed << setprecision(2) << cost95 << " |" << endl;
    cout << "| 100           | " << setw(11) << price100 << " | " << setw(8) << fixed << setprecision(2) << cost100 << " |" << endl;
    cout << "----------------------------------------" << endl;
}

int main() {
    int task;
    cout << "Выберите задание (1 - 3): ";
    cin >> task;

    switch (task) { 
        case 1: TASK1(); break;
        case 2: TASK2(); break;
        case 3: TASK3(); break;
        default: cout << "Введите число от 1 до 3!";
    }
    return 0;
}
