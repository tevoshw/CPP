#include <iostream>
using namespace std;

int main(){

    float n; float n2;

    cout << "Enter the first number between 0-9: ";
    cin >> n;
    n2 = n;

    while (n2 < 10)
    {

        cout << "Your number was: " << n  << endl << "We are in the number: " << n2 << endl;;
        n2 += 1;

    }

    // OR OR OR OR

    do // IN THIS CASE EXECUTION ONE TIME, AND AFTER THE CONDITION
    {
        cout << "Your number was: " << n  << endl << "We are in the number: " << n2 << endl;;
        n2 += 1;

    } while (n2 < 10);
    
    

    return 0;
}