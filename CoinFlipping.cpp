#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    char choice;
    int flip, total;
    double heads, tails;
    total = 0;
    heads = 0;
    tails = 0;

    unsigned seed = time(0);
    srand(seed);

    flip = rand() % 2 + 1;

    if (flip == 1)
        cout << "Flip = Heads" << endl;
    if (flip == 2)
        cout << "Flip = Tails" << endl;

    cout << "Flip again (Y/N)?: ";
    cin >> choice;

    while (!(choice == 'y') && !(choice == 'Y') && !(choice == 'n') && !(choice == 'N'))
    {
        cout << "Input is invalid" << endl;
        cout << "Flip again (Y/N)?: ";
        cin >> choice;
    }

    while (choice)
    {

        if ((choice == 'n') || (choice == 'N'))
        {
            break;
        }

        flip = rand() % 2 + 1;

        if ((choice == 'y') || (choice == 'Y'))
        {

            if (flip == 1)
            {
                cout << "Flip = Heads" << endl;
                heads ++;
            }
            if (flip == 2)
            {
                cout << "Flip = Tails" << endl;
                tails ++;
            }
        }

        cout << "Flip again (Y/N)?: ";
        cin >> choice;

        while (!(choice == 'y') && !(choice == 'Y') && !(choice == 'n') && !(choice == 'N'))
        {
            cout << "Input is invalid" << endl;
            cout << "Flip again (Y/N)?: ";
            cin >> choice;

        }

    total++;

    }

    double headperc, tailperc;
    headperc = (heads/total) * 100;
    tailperc = (tails/total) *100;

    cout << heads << " of the " << total << " flips were Heads or " << headperc << "% were Heads." << endl;
    cout << tails << " of the " << total << " flips were Tails or " << tailperc << "% were Tails." << endl;

}
