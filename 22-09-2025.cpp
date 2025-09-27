#include <iostream>
#include <vector>
#include <iomanip>

void TASK1() { 
  using namespace std;
  
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

  double hours = time / 60.0;
  double speed = length / hours;

  cout << "Скорость должна составлять: " << speed << " километров в час.";
  return 0;
}

void TASK2() {
  using namespace std;

  int hours, minutes, seconds;
  int total_minutes;
  double cost;
  
  cout << "Введите время поездки:" << endl;
  cout << "Часы: ";
  cout.flush();
  cin >> hours;
  cout << "Минуты: ";
  cout.flush();
  cin >> minutes;
  cout << "Секунды: ";
  cout.flush();
  cin >> seconds;
  
  total_minutes = hours * 60 + minutes;
  if (seconds > 0) {
      total_minutes = total_minutes + 1;
  }

  cost = total_minutes * 2.0;
  
  cout << endl << "Результат расчета:" << endl;
  cout << "Общее время: " << total_minutes << " минут" << endl;
  cout << "Стоимость поездки: " << cost << " гривен" << endl;
  
  return 0;
}

void TASK3() {
  double distance, consumption;
  double price92, price95, price100;
  double total_fuel;
  double cost92, cost95, cost100;
  
  cout << "Введите расстояние (км): ";
  cout.flush();
  cin >> distance;
  
  cout << "Введите расход бензина на 100 км (л): ";
  cout.flush();
  cin >> consumption;
  
  cout << "Введите стоимость бензина 92 (гривны/литр): ";
  cout.flush();
  cin >> price92;
  
  cout << "Введите стоимость бензина 95 (гривны/литр): ";
  cout.flush();
  cin >> price95;
  
  cout << "Введите стоимость бензина 100 (гривны/литр): ";
  cout.flush();
  cin >> price100;
  
  total_fuel = (consumption * distance) / 100.0;
  cost92 = total_fuel * price92;
  cost95 = total_fuel * price95;
  cost100 = total_fuel * price100;
  
  cout << endl << "Результаты расчета:" << endl;
  cout << "Общий расход бензина: " << fixed << setprecision(2) << total_fuel << " л" << endl << endl;
  
  cout << "----------------------------------------" << endl;
  cout << "| Марка бензина | Цена за литр | Стоимость |" << endl;
  cout << "----------------------------------------" << endl;
  cout << "| 92         | " << setw(11) << price92 << " | " << setw(8) << cost92 << " |" << endl;
  cout << "| 95         | " << setw(11) << price95 << " | " << setw(8) << cost95 << " |" << endl;
  cout << "| 100        | " << setw(11) << price100 << " | " << setw(8) << cost100 << " |" << endl;
  cout << "----------------------------------------" << endl;

  return 0;
}

int main() {
  using namespace std;
  int buffer;
  cout << "Выберите задание (1 - 3): "
  cout.flush();
  cin >> buffer;

  if (buffer == 1) {
      TASK1();
  }
  else if (buffer == 2) {
      TASK2();
  }

  else if (buffer == 3) {
      TASK3();
  }

  else {
      cout  << "Введите число от 1 до 3!";
  }
  return 0;
}
