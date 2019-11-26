#ifndef PRODUCT_H
#define PRODUCT_H


class Product
{
    public:
        int id;
        float price;
        int size_;
        string model;

        Product();
        virtual ~Product();
        void turnOnOff();

    protected:

    private:
};

#endif // PRODUCT_H
