#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>

class Product
{
    public:
        int id;
        float price;
        int size_;
        std::string model;

        Product();
        virtual ~Product();
        void turnOnOff();

    protected:

    private:
};

#endif // PRODUCT_H
