#include <iostream>

class MegaStore
{
public:
    enum DiscountType 
    {
        Standard,
        Seasonal,
        Weight
    };

    static double getDiscountedPrice(double cartWeight, double totalPrice, DiscountType discountType)
    {
        if(discountType == DiscountType::Standard){
            return totalPrice * 0.94;
        }
        else if(discountType == DiscountType::Seasonal){
            return totalPrice * 0.88;
        }
        else{
            if(cartWeight <= 10){
                return totalPrice * 0.94;
            }
            else{
                return totalPrice * 0.82;
            }
        }
    }
};

#ifndef RunTests
int main()
{
    std::cout << MegaStore::getDiscountedPrice(12, 100, MegaStore::DiscountType::Weight);
    return 0;
}
#endif