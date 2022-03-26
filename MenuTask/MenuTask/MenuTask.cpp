// Menu.cpp

#include <iostream>
#include <math.h>
#include <ymath.h>
using namespace std;
void WolfGoatAndCabbage()
{
    system("cls");
    cout << "At first, farmer must take a fucking goat with him in the his fucking boat and ferry it to the other shore.\n";
    cout << "Then he must take a fucking wolf with him in his boat and ferry it to the other shore also.\n";
    cout << "After he delivered a wolf to the other shore, he must take a fucking goat with him in the his fucking boat and ferry it to the first shore to cabbage.\n";
    cout << "Then farmer must take a cabbage with him and ferry it to the other shore to wolf.\n";
    cout << "And finally, he must take a fucking goat with him in the his fucking boat and ferry it to the other shore again and finish this shit.\n";
    cout << endl;
    system("pause");
    system("cls");
}
void SimpleCalculator()
{
    auto num1 = 0, num2 = 0, num3 = 0;
    char symbol;
    cout << "Enter your number: ";
    cin >> num1;
    cout << "Enter your second number: ";
    cin >> num2;
    cout << "Enter your symbol: ";
    cin >> symbol;
    switch (symbol)
    {
    case '+':
        num1 + num2;
        num3 = num1 + num2;
        break;
    case '-':
        num1 - num2;
        num3 = num1 - num2;
        break;
    case '*':
        num1 * num2;
        num3 = num1 * num2;
        break;
    case ':':
        num1 / num2;
        num3 = num1 / num2;
        break;
    }

    cout << endl << num3 << endl;
    system("pause");
    system("cls");
}
void TheFactorialOfNumber()
{

    int num, f = 1;
    cout << "Enter your number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        f = f * i;
    }
    cout << f << endl;
    system("pause");
    system("cls");


}
void GuessTheNumber()
{
    setlocale(LC_ALL, "ru");
    int x, y;
    x = rand();
    cout << "Enter your number: ";
    cin >> y;
    while (y != x)
    {



        if (y < x)
        {
            cout << "твоё число меньше заданного\n";
        }
        if (y > x)
        {
            cout << "твоё число больше заданного\n";
        }
        system("pause");
        cout << "\nEnter your number again: ";
        cin >> y;
    }
    cout << "\nугадал\n";
    system("cls");
}

int main()
{
    bool menu = true;

    while (menu)
    {
        cout << "\n1) Wolf , goat and cabbage" << endl << "2) Simple calculator" << endl << "3) The factorial of number" << endl << "4) Guess the Number" << endl << "5) Exit";

        int UserChoose;
        cout << "\nYour choose: ";
        cin >> UserChoose;
        switch (UserChoose)
        {
        case 1:
            WolfGoatAndCabbage();
            break;
        case 2:
            SimpleCalculator();
            break;
        case 3:
            TheFactorialOfNumber();
            break;
        case 4:
            GuessTheNumber();
            break;
        default:
            system("cls");
            cout << "You have missed!";
            break;

        }
    }

}


