#ifndef COMPUTER_H
#define COMPUTER_H

#include <Product.h>


class Computer : public Product
{
    public:
        int RAM;
        int screenSize;
        bool isLaptop;

        Computer();
        virtual ~Computer();

    protected:

    private:
        void update();
};

#endif // COMPUTER_H
