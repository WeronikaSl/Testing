#include <iostream>
#include "BarcodeScannerClass.hpp"
#include "ProductStruct.hpp"


int main()
{
    try
    {
        BarcodeScanner bcs;
        bcs.addProduct(Product ("maslo", 8, 12345));
        bcs.addProduct (Product ("chleb", 5, 12378));
        bcs.addProduct(Product("ser", 4, 657364));
        std::cout << bcs.getNameAndPrice(12345) << std::endl;
        std::cout << bcs.getNameAndPrice(657364) << std::endl;
        std::cout << bcs.getNameAndPrice(12378) << std::endl;
    }
    catch (const std::invalid_argument& error)
    {
        std::cout << error.what() << std::endl;
    }
}
