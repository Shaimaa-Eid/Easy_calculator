
/*
- Simple Calculator
*/

#include <iostream>
using namespace std;

int main()
{
    double num, num2;
    char symbol;

    cout << "=========== SIMPLE CALCULATOR ===========";
    cout << endl;
    cout << "Enter number1 : ";
    cin >> num;
    cout << "Enter symbol (* , - , / , + ) : ";
    cin >> symbol;
    cout << "Enter number2 : ";
    cin >> num2;

    switch (symbol)
    {
    case '*':
        cout << num << "*" << num2 << " = " << num * num2;
        break;
    case '-':
        cout << num << "-" << num2 << " = " << num - num2;
        break;
    case '/':
        cout << num << "/" << num2 << " = " << num / num2;
        break;
    case '+':
        cout << num << "+" << num2 << " = " << num + num2;
        break;

    default:
        cout << " ERROR ! operator is not correct ";
        break;
    }




    return 0;
}