#include <iostream>
#include <random>
using namespace std;

random_device rd;
mt19937 gen(rd());

void task1(){
    const int SIZE = 10;
    int arr[SIZE];
    
    uniform_int_distribution<> dist(0, 99);
    
    cout << "Массив: ";
    for (int i = 0; i < SIZE; i++) {
        arr[i] = dist(gen);
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int minElement = arr[0];
    int maxElement = arr[0];
    
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    
    cout << "Минимальный элемент: " << minElement << endl;
    cout << "Максимальный элемент: " << maxElement << endl;
}

void task2(){
    const int SIZE = 10;
    int arr[SIZE];
    int userValue;
    
    uniform_int_distribution<> dist(0, 99);
    
    cout << "Массив: ";
    for (int i = 0; i < SIZE; i++) {
        arr[i] = dist(gen);
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Введите значение: ";
    cin >> userValue;
    
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] < userValue) {
            sum += arr[i];
        }
    }
    
    cout << "Сумма элементов меньше " << userValue << ": " << sum << endl;
}

void task3() {
    const int MONTHS = 12;
    int profit[MONTHS];
    int startMonth, endMonth;
    
    cout << "Введите прибыль фирмы за 12 месяцев:" << endl;
    for (int i = 0; i < MONTHS; i++) {
        cout << "Месяц " << (i + 1) << ": ";
        cin >> profit[i];
    }
    
    cout << "Введите начальный месяц диапазона (1-12): ";
    cin >> startMonth;
    cout << "Введите конечный месяц диапазона (1-12): ";
    cin >> endMonth;
    
    if (startMonth < 1 || startMonth > 12 || endMonth < 1 || endMonth > 12 || startMonth > endMonth) {
        cout << "Ошибка: некорректный диапазон!" << endl;
        return;
    }
    
    int maxProfit = profit[startMonth - 1];
    int minProfit = profit[startMonth - 1];
    int maxMonth = startMonth;
    int minMonth = startMonth;
    
    for (int i = startMonth; i <= endMonth; i++) {
        if (profit[i - 1] > maxProfit) {
            maxProfit = profit[i - 1];
            maxMonth = i;
        }
        if (profit[i - 1] < minProfit) {
            minProfit = profit[i - 1];
            minMonth = i;
        }
    }
    
    cout << "В диапазоне с " << startMonth << " по " << endMonth << " месяц:" << endl;
    cout << "Максимальная прибыль была в месяце " << maxMonth << ": " << maxProfit << endl;
    cout << "Минимальная прибыль была в месяце " << minMonth << ": " << minProfit << endl;
}

int main() {
    task1();
    task2();
    task3();
    return 0;
}
