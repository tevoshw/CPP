#include <iostream>
using namespace std;

int main(){

    int n; int n2;

    cout << "Enter the first number: ";
    cin >> n;


    cout << "Enter the second number: ";
    cin >> n2;

    if ( (n % 2 == 0) && (n2 % 2 == 0)){ // AND OPERATOR ( && )
        cout << "Todos os números são pares" << endl;
    }

    if (n || n2 % 2 == 0){ // OR OPERATOR ( || )
        cout << "Pelo menos um número é ar" << endl;
    }

     if (n % 2 == 0){ // EQUAL OPERATOR ( == )
        cout << "O primeiro número é par" << endl;
    }

     if (n % 2 != 0){ // DIFEERENT OPERATOR ( != )
        cout << "O primeiro número é impar" << endl;
    }



    return 0;
}