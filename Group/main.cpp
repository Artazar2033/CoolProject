#include <iostream>
#include "funcs.h"
using namespace std;

 int main()

 {
    int count; // переменная для выбора в switch
    double a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second numbe: ";
    cin >> b;
    cout << "Choose an action: 1-addition,2-subtraction,3-multiplication,4-division: ";
    cin >> count;
 switch (count) // начало оператора switch
 {
 case 1: // если count = 1
 {
     cout << MySum(a, b)<<endl; // выполнить сложение
     break;
 }
 case 2: // если count = 2
 {
     cout << MySub(a, b) <<endl;  // выполнить вычитание
     break;
 }
 case 3: // если count = 3
 {
     cout << "Feature in development" <<endl; // выполнить умножение
     break;
 }
 case 4: // если count = 4
 {
    cout << "Feature in development" <<endl; // выполнить деление
    break;
 }
 default: // если count равно любому другому значению
    cout << "Input error!" << endl;
 }
    system("pause");
    return 0;
 }

