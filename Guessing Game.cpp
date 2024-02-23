#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int guess, num, choice;
    while (choice)
    {
        srand(time(0));
        num = rand() % 100 + 1;
        cout << "______________________________________________________________________\n";
        cout << "\nGuess the number between 1 to 100\n";
        for (int i = 1; i != 0; i++)
        {
            cin >> guess;
            if (guess == num)
            {
                cout << "You guessed the correct number in " << i << " attempts";
                break;
            }
            else if (guess < num)
            {
                cout << "Higher number please...\n";
            }
            else
            {
                cout << "Lower number please...\n";
            }
        }
        cout << "\n______________________________________________________________________";
        cout << "\n\nWant to play again (0/1): ";
        cin >> choice;
    }
}
