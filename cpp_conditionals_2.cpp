#include <iostream>

using namespace std;

int main()
{
    string options[6] = {"Aalo", "Pyaj", "Tamatar", "Dhaniya", "Tinde", "Matar"};
    int val;
    
    cout << "Enter the number from 1 to 6, with the numbers standing for Aalo, Pyaj, Tamatar, Dhaniya, Tinde and Matar in the same order: ";
    cin >> val;
    
    switch(val)
    {
        case 1:
            cout << options[0] << endl;
            break;
        case 2:
            cout << options[1] << endl;
            break;
        case 3:
            cout << options[2] << endl;
            break;
        case 4:
            cout << options[3] << endl;
            break;
        case 5:
            cout << options[4] << endl;
            break;
        case 6:
            cout << options[5] << endl;
            break;
        default:
            cout << "Wrong choice" << endl;
    }
    
    return 0;
}
