#include <iostream>
#include <conio.h>
using namespace std;

int int_validation(string Text = "Enter number: ")
{
    float num_float;
    int num_output;
    while (true)
    {
        cout << Text;
        cin >> num_float;
        num_output = num_float;

        if (cin.fail() || num_float != num_output)
        {
            cout << "\nInput only integer number!!!!!\n\n";
            cin.clear();
            cin.ignore(80, '\n');
        }
        else
        {
            break;
        }
    }
    return num_output;
}

int main()
{
    int min;
    int max;
    int result;
    char input;
    char ans_resetgame = 'y';

    while (ans_resetgame == 'y' || ans_resetgame == 'Y')
    {
        cout << "\n\n ================================= Number of Wizard Game =================================\n\n";
        while (true)
        {
            min = int_validation(" Enter minimum number: ");
            max = int_validation(" Enter maximum number: ");
            if (min > max)
            {
                cout << "\n !!! Error !!!\n";
                cout << " !!! maximun value must more than minimum value !!! .....\n\n";
            }
            else
            {
                break;
            }
        }
        cout << ("\n\n ------------------------------------------------------------------------------------------------------------\n\n");
        cout << " Min is: " << min << "\n";
        cout << " Max is: " << max << "\n\n";

        cout << " *** Please select your number between " << min << " and " << max << " and keep it in your mind. *** \n\n Press 'Enter' to start ...\n";
        getch(); // press any key

        cout << " ... Start guessing ...\n\n";
        for (int i = 1; i > 0; i++)
        {
            result = (min + max) / 2;
            cout << "\n\n =========================================================================================================\n\n";
            cout << " Round: " << i;
            cout << "\n Guessing number is: " << result;
            cout << "\n Is your number higher or lower than " << result << " ?";
            cout << "\n\n Please enter value by press key !!\n 'H' for higher \n 'L' for lower \n 'C' for correct guessing\n";
            input = getch();
            if (input == 'c' || input == 'C')
            {
                cout << "\n Hooray, my guess is correct.\n";
                break;
            }
            else if (input == 'h' || input == 'H')
            {
                cout << "\n Aww my guess is too low.";
                min = result;
            }
            else if (input == 'l' || input == 'L')
            {
                cout << "\n Oops my guess is too high";
                max = result;
            }
            else
            {
                cout << "\n **** You input wrong key !!!! ****";

                while (true)
                {
                    cout << "\n\n Please enter value by press key !!\n 'H' for higher \n 'L' for lower \n 'C' for correct guessing\n";
                    input = getch();
                    if (input == 'c' || input == 'C')
                    {
                        cout << "\n Hooray, my guess is correct.\n";
                        i = -1;
                        break;
                    }
                    else if (input == 'h' || input == 'H')
                    {
                        cout << "\n Aww my guess is too low.";
                        min = result;
                        break;
                    }
                    else if (input == 'l' || input == 'L')
                    {
                        cout << "\n Oops my guess is too high";
                        max = result;
                        break;
                    }
                    else
                    {
                        cout << "\n **** You input wrong key !!!! ****";
                    }
                }
            }
        }
        cout << ("\n\n ------------------------------------------------------------------------------------------------------------\n\n");
        cout << " Do you want to play again? [y/n] ...\n";
        ans_resetgame = getch();

        if (ans_resetgame != 'n' && ans_resetgame != 'N' && ans_resetgame != 'y' && ans_resetgame != 'Y')
        {
            while (true)
            {
                cout << "You press the wrong key !!!\n";
                cout << "Please press only y or n [yes / no]\n";
                ans_resetgame = getch();
                if (ans_resetgame == 'n' || ans_resetgame == 'N' || ans_resetgame == 'y' || ans_resetgame == 'Y')
                {
                    break;
                }
            }
        }
        if (ans_resetgame == 'n' || ans_resetgame == 'N')
        {
            cout << "\n\n ==========================>>>>>>>  OK.Thank for playing game XD  <<<<<<<==========================\n\n";
            cout << " Closing game ...\n\n";
        }
        cout << "\n\n";
    }
}