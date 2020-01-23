#include <iostream>

using namespace std;

int main()
{
    string options[6] = {"Aalo", "Pyaj", "Tamatar", "Dhaniya", "Tinde", "Matar"};
    int val;
    
    cout << "Enter the number from 1 to 6, with the numbers standing for Aalo, Pyaj, Tamatar, Dhaniya, Tinde and Matar in the same order: ";
    cin >> val;
    
    if (val == 1)
    {
        cout << options[0] << endl;
    }
    else if (val == 2)
    {
        cout << options[1] << endl;
    }
    else if (val == 3)
    {
        cout << options[2] << endl;
    }
    else if (val == 4)
    {
        cout << options[3] << endl;
    }
    else if (val == 5)
    {
        cout << options[4] << endl;
    }
    else if (val == 6)
    {
        cout << options[5] << endl;
    }
    else
    {
        cout << "invalid";
    }

    return 0;
}
