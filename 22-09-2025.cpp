#include <iostream>

void TASK1() {
  int time, length;
  cout << "Введите расстояние в километрах: ";
  cout.flush();
  cin >> length;
  
  cout << "Введите время пути в минутах: ";
  cout.flush();
  cin >> time;

  if (length <= 0 || time <= 0) {
      cout << "Ошибка! Введите положительные числа!";
      return 1;
  }

  double hours = time / 60.0;  // Исправлено здесь
  double speed = length / hours;

  cout << "Скорость должна составлять: " << speed << " километров в час.";
  return 0;
}

int main(){
  using namespace std;
  
}

