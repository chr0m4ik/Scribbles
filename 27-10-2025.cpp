#include <iostream>
using namespace std;

// Функция распределения динамической памяти
int* task1(int size) {
    int* arr = new int[size];
    return arr;
}

// Функция инициализации динамического массива
void task2(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = 0;
    }
}

// Функция печати динамического массива
void task3(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Функция удаления динамического массива
void task4(int* arr) {
    delete[] arr;
}

// Функция добавления элемента в конец массива
int* task5(int* arr, int& size, int element) {
    int* newArr = new int[size + 1];
    
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }
    
    newArr[size] = element;
    size++;
    
    delete[] arr;
    return newArr;
}

int main() {
    int size = 5;
    int* arr = task1(size);
    task2(arr, size);
    cout << "Исходный массив: ";
    task3(arr, size);
    arr = task5(arr, size, 42);
    cout << "Массив после добавления элемента: ";
    task3(arr, size);
    task4(arr);
    
    return 0;
}
