#include <iostream>
#include <iomanip>
#include "./include/mylib.hpp" 

using namespace std;

int main() {
    matr a;  
    vekt x;  

    elem_Matr(a);

    cout << "Matrix:\n" << fixed;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++)
            cout <<  setw(10) << a[i][j]; 
        cout << endl;
    }

    elem_Vect(a, x);

    cout << "\nVector:\n";
    for (int i = 0; i < k; i++)
        cout << setw(10) << x[i];
    cout << endl;

    

    double avg = calculate(a);
    cout << "\nСреднее арифметическое элементов с чётными индексами: " << avg << endl;

    system("pause");
    return 0;
}
