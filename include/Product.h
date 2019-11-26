#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include "Brand.h"

class Product
{
    public:
        int id;
        float price;
        int size_;
        std::string model;
        Brand brand;
        Product();
        virtual ~Product();
        virtual void turnOnOff() = 0;

    protected:

    private:
};

#endif // PRODUCT_H
