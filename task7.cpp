#include <bits/stdc++.h>
// THIS IS A GUESSING THE NUMBER GAME......
using namespace std;

int main()
{
    int guess, movs = 5, i, rguess = 13;
    char choice;
    cout << "                                        #############  WELCOME TO THE GUESSING THE NUMBER GAME  #################" << endl;
    cout << endl;
    cout << endl;
label1:
    cout << " ENTER A NUMBER BETWEEN 1-20" << endl;
    cin >> guess;

    if (guess != rguess)
    {

        movs--;
        cout << movs << "MOVES LEFT" << endl;
        if (movs == 0)
        {
            cout << "Opps! You Are Out Of Moves" << endl;
            cout << endl;
            cout << "Do you want to play again!!" << endl
                 << "Y for 'yes' & N for 'no'" << endl;
            cin >> choice;
            if (choice == 'y' || choice == 'Y')
            {
                movs = 5;

                goto label1;
            }
            else
            {
                exit(0);
            }
        }

        if (guess < rguess)
        {
            cout << " HINT: Your guessed number  is too small than true value!!  " << endl;
            cout << endl;
            goto label1;
        }
        else if (guess > rguess)
        {
            cout << " HINT : Your guessed number is too large than the true value!!  " << endl;
            cout << endl;
            goto label1;
        }
    }
    else if (guess == rguess)
    {
        cout << "  CONGRATS YOU HAVE GUESSED THE CORRECT NUMBER!!!!!" << endl;
    }
    return 0;
}
