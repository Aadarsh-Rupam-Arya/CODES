#include <iostream>
#include <string.h>
using namespace std;
#define MAXSIZE 100

void pass_arr();
void sign();
void sign1();
void menue();
void selection();
void dealer_module();

int main()
{
    sign();
    menue();
    selection();

    return 0;
}

void sign()
{
    cout << "\n\n********************\tWelcome to inventory management system\t ********************\n\n\n";
    cout << "\t\t1. Login\n\t\t2. Create a new account\n";
    cout << "Please enter 1 for login OR 2 for new account : ";

    char user_name[100] = {"Aadarsh"};
    char password_arr[100] = {"Aadarsh31"};

    int signin;
    cin >> signin;
    
    if (signin == 1)
    {

        char registered_passcode[10] = "Aadarsh31";
        char user_name[20] = "aadarsharya";
        char password[10];
        cout << "\nEnter registered name : ";

        cin >> user_name;
        cout << "\nEnter the password    : ";

        cin >> password;

        if (strcmp(registered_passcode, password) == 0)
        {
            cout << "\nYou are succesfully logined";
        }
        else
        {
            cout << "Enter a valid name or password!" << endl;
        }
    }

    else if (signin == 2)
    {

        string user_name_for_new_acc[MAXSIZE], password_for_new_acc[MAXSIZE];
        cout << "\n\tEnter your name   : ";
        int k = 0;
        int *ptr = &k;
        cin >> user_name_for_new_acc[*ptr];
        cout << "\tCreate a password : ";
        cin >> password_for_new_acc[*ptr];
        ptr++;
        cout << "\nYour details have been saved successfully! \n\n";
        system("pause");

        // we are doing login again now for start

        string password;
        cout << "Enter registered name : ";

        cin >> user_name;
        cout << "Enter the password    : ";

        cin >> password;

        for (int i = 0; i < 10; i++)
        {
            if (password_for_new_acc[i] == password)
            {
                cout << "\nYou are succesfully logined\n"
                     << endl;
                system("pause");
                cout << endl
                     << endl;
                break;
            }
            else
            {

                cout << "Enter a valid name or password!" << endl;
                cin >> password;
                for (int i = 0; i < 10; i++)
                {
                    if (password_for_new_acc[i] == password)
                    {
                        cout << "\nYou are succesfully logined\n"
                             << endl;
                        system("pause");
                        cout << endl
                             << endl;
                        break;
                    }
                    else
                    {

                        cout << "Please Try after sometime!" << endl;
                    }
                }
                break;
            }
        }
    }

    else
    {
        cout << "Invalid input! Please try again!\n";
    }
}

void sign1()
{
}

void menue()
{
    cout << endl
         << endl
         << "********************\tWelcome to inventory management system\t ********************\n"
         << endl
         << endl;
    cout << "\t\t\t\t1. Dealer Menue\n"
         << endl;
    cout << "\t\t\t\t2. Employe Menue\n"
         << endl;
    cout << "\t\t\t\t3. Customer Menue\n"
         << endl;
    cout << "\n**************************************************************************************\n\n";
}

void selection()
{
    int a;
    char passcode[10] = "Aadarsh31", passcode_pin[10];
    cout << "\t\tEnter 1/2/3 for above choices respectively : ";
    cin >> a;
    cout << endl;

    switch (a)
    {
    case 1:
        cout << "\t\t\tYour are on Dealer Menue" << endl;
        cout << "\tEnter the password: ";
        cin >> passcode_pin;

        if (strcmp(passcode, passcode_pin) == 0)
        {
            dealer_module();
        }
        else
        {
            cout << "\t\tInvalid pin!!" << endl;
            cout << "\tEnter the valid pin: ";
            cin >> passcode_pin;
            for (int i = 1; i < 4; i++)
            {

                if ((strcmp(passcode, passcode_pin) != 0))
                {
                    cout << "\t\tInvalid pin!!" << endl;
                    cout << "\tEnter the valid pin: ";
                    cin >> passcode_pin;
                }
            }

            if (strcmp(passcode, passcode_pin) == 0)
            {
                dealer_module();
            }
            else
            {
                "You have reached maximum attempts";
                system("pause");
            }
        }
        break;

    case 2:
        cout << "\t\t\tYour are on Employe Menue" << endl;

        break;

    case 3:
        cout << "\t\t\tYour are on Customer Menue" << endl;

        break;

    default:
        break;
    }
}

void dealer_module()
{
    cout << "\n";
    cout << "\t\t\tWelcome! You are now logined as Dealer" << endl;
    cout << "\n";
    cout << "\t\t1. Check Inventory\n"
         << endl;
    cout << "\t\t2. Insert items\n"
         << endl;
    cout << "\t\t3. Remove items\n"
         << endl;
    int dealer_selection;
    cout << "Please select 1/2/3 as given above: ";
    cin >> dealer_selection;
    cout << endl;
    switch (dealer_selection)
    {
    case 1:
        cout << "Inventory is as followed\n";
        cout << "\t-----------------------------------------------------\n";
        cout << "\t| Sr.no  | Name                | Quantity           |\n";
        cout << "\t-----------------------------------------------------\n";
        cout << "\t| 1.     | Pumps               | 50                 |\n";
        cout << "\t| 1.     | Pumps               | 50                 |\n";
        cout << "\t| 1.     | Pumps               | 50                 |\n";
        cout << "\t-----------------------------------------------------\n";

        break;
    case 2:
        cout << "Inserting the items\n";
        break;
    case 3:
        cout << "Removing the item\n";
        break;
    default:
        cout << "Enter the valid option\n";
        break;
    }
}
