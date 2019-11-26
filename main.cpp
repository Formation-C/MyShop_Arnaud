#include <iostream>
#include "Computer.h"

using namespace std;

void displayProduct(const Product& product) {
    //cout << &product << endl;
    cout << product.model << endl;
}
int main()
{
    Computer myComputer ;
    myComputer.model = "Super Computer of the death";
    myComputer.price = 30;
    cout << "Computer addr="<< &myComputer << endl;

    //Product myProduct;
    displayProduct(myComputer);
    myComputer.turnOnOff();

    cout << "Hello world!" << endl;
    return 0;
}
