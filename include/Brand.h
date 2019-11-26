#ifndef BRAND_H
#define BRAND_H
#include <iostream>

class Brand
{
    public:
        Brand();
        virtual ~Brand();
        int id;
        std::string name;
        std::string logo;
    protected:

    private:
};

#endif // BRAND_H
