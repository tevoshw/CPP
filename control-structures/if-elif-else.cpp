#include <iostream>
using namespace std;

int main(){

    float n;

    cout << "Enter the first number: ";
    cin >> n;

    if (n < 0){
        cout << " The number as negative" << endl;} 
    else if( n == 0){
        cout << "The number was 0" << endl;}
    else{
        cout << "The number as positive" << endl;}


    return 0;
}