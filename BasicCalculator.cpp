#include <iostream>
using namespace std;
int main()
{
    float a, b;
    int c;
    while (1)
    {
        cout << "______________________________________________________________________\n";
        cout << "\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\nSelect operation : ";
        cin >> c;
        if (c==5)
            return 0;
        cout << "Enter First Value : ";
        cin >> a;
        cout << "Enter Second Value : ";
        cin >> b;
        switch (c)
        {
        case 1:
            cout << a << " + " << b << " = " << a + b << endl;
            break;
        case 2:
            cout << a << " - " << b << " = " << a - b << endl;
            break;
        case 3:
            cout << a << " x " << b << " = " << a * b << endl;
            break;
        case 4:
            cout << a << " / " << b << " = " << a / b << endl;
            break;
        default:
            cout << "Invalid input\n";
            break;
        }
    }
    return 0;
}
