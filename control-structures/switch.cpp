#include <iostream>
using namespace std;

int main(){
    char x = 'A';

    switch (x)
    {
    case 'A':
        cout << "A" << endl;
        break;

    case 'B':
        cout << "B" << endl;
        break;

    default:
        cout << "Other than A and B" <<  endl;
        break;
    }
    

    return 0;
}