#include <iostream>
using namespace std;

int main(){

    float n;

    cout << "Enter the first number: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Your number was: " << n  << endl << "We are in the number: " << i << endl;;
    }
    

    return 0;
}