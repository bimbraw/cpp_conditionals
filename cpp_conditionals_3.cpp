#include <iostream>

using namespace std;

int main()
{
    string options[12] = {"Jan", "Feb", "March", "April", "May", "June", "July", "Aug", "Sept", "Oct", "Nov", "Dec"};
    int val, year;
    
    cout << "Enter the number from 1 to 12, with the numbers standing from Jan to Dec in the usual order: ";
    cin >> val;
    
    switch(val)
    {
        case 1:
            cout << options[0] << " has 31 days" << endl;
            break;
        case 2:
            cout << "What year is it? ";
            cin >> year;
            
            if (year % 4 == 0)
            {
                if (year % 100 == 0 && year % 400 == 0)
                {
                    cout << options[1] << " has 29 days" << endl;
                }
                else if (year % 100 == 0)
                {
                    cout << options[1] << " has 28 days" << endl;
                }
                else
                {
                    cout << options[1] << " has 29 days" << endl;
                }
            }
            else
            {
                cout << options[1] << " has 28 days" << endl;
            }
            break;
        case 3:
            cout << options[2] << " has 31 days" << endl;
            break;
        case 4:
            cout << options[3] << " has 30 days" << endl;
            break;
        case 5:
            cout << options[4] << " has 31 days" << endl;
            break;
        case 6:
            cout << options[5] << " has 30 days" << endl;
            break;
        case 7:
            cout << options[6] << " has 31 days" << endl;
            break;
        case 8:
            cout << options[7] << " has 31 days" << endl;
            break;
        case 9:
            cout << options[8] << " has 30 days" << endl;
            break;
        case 10:
            cout << options[9] << " has 31 days" << endl;
            break;
        case 11:
            cout << options[10] << " has 30 days" << endl;
            break;
        case 12:
            cout << options[11] << " has 31 days" << endl;
            break;
        
        default:
            cout << "Wrong choice" << endl;
    }
    
    return 0;
}
