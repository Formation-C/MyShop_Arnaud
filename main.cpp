#include <iostream>
#include "Computer.h"

using namespace std;

void displayProduct(const Product& product) {
    //cout << &product << endl;
    cout <<  product.model << " @ " <<product.brand->Getname()<< endl;
}
int main()
{
    Brand smallSoft;
    smallSoft.Setname("BigSoft");
    Computer myComputer(&smallSoft);
    myComputer.model = "Super Computer of the death";
    myComputer.price = 30;
    cout << "Computer addr="<< &myComputer << endl;

    //Product myProduct;
    displayProduct(myComputer);
    myComputer.turnOnOff();

    cout << "Hello world!" << endl;
    return 0;
}
