#include <iostream>

using namespace std;

int main()
{
    double val;
    
    cout << "Enter your points: ";
    cin >> val;
    
    if (val >= 0 && val <= 100)
    {
        if ((val > 50) ? cout << "Passed" : cout << "Failed");
    }
    else
    {
        cout << "Error. Enter the correct points." << endl;
    }
    
    return 0;
}
