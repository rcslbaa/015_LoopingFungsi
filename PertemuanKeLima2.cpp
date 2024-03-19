#include <iostream>
using namespace std;

int main(){

    int bilangan;

    srand(time(0));

    bilangan = rand() % 10;

    while (bilangan > 4)
    {
        cout << "Bilangan lebih dari 4" << endl;
    }
}