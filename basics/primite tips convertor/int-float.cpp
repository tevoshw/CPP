#include <iostream>
using namespace std;

int main(){

    int integer = 1;
    float a = float(integer); // first way
    cout << a << endl;

    float float_number = 2.5;
    int b = int(float_number);
    cout << b <<endl;





    int integer2 = 3;
    float c = static_cast<float>(integer2); // second way
    cout << c << endl;

    float float_number2 = 4.5;
    int d = static_cast<int>(float_number2);
    cout << d <<endl;




    return 0;


}