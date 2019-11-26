#ifndef COMPUTER_H
#define COMPUTER_H

#include <Product.h>


class Computer : public Product
{
    using Product::Product;
    public:
        int RAM;
        int screenSize;
        bool isLaptop;

        virtual ~Computer();
        void turnOnOff();
    protected:

    private:
        void update();
};

#endif // COMPUTER_H
