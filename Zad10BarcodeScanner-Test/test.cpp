#include "pch.h"
#include "../Zad10BarCodeScannerMain/BarcodeScannerClass.hpp"
#include "../Zad10BarCodeScannerMain/ProductStruct.hpp"

class BarcodeScannerFixture : public ::testing::Test
{
protected:
	BarcodeScanner scanner;
};

TEST(ProductConstructorTest, Constuctor_PriceOrBarcodeLowerThan0_ThrowsInvalidArgumentException) 
{
	EXPECT_THROW(Product("maslo", -3, 12345), std::invalid_argument);
	EXPECT_THROW(Product("maslo", 3, -12345), std::invalid_argument);
	EXPECT_THROW(Product("maslo", -3, -12345), std::invalid_argument);
	EXPECT_THROW(Product("maslo", 0, 12345), std::invalid_argument);
	EXPECT_THROW(Product("maslo", 3, 0), std::invalid_argument);

}

TEST_F(BarcodeScannerFixture, AddProduct_PutsProductsInVector_VectorOfProductsIsFilled) 
{
	EXPECT_EQ(0, scanner.getSizeOfVector());
	scanner.addProduct(Product("mleko", 3, 12324));
	EXPECT_EQ(1, scanner.getSizeOfVector());

}

TEST_F(BarcodeScannerFixture, AddProduct_GivenBarcodeAlreadyExistsInSystem_ThrowsInvalidArgumentException)
{
	scanner.addProduct(Product("mleko", 3, 12324));
	EXPECT_THROW(scanner.addProduct(Product("maslo", 5, 12324)), std::invalid_argument);
}

TEST_F(BarcodeScannerFixture, GetNameAndPrice_IfCorrectDataForGivenBarcode_ReturnsNameAndPrice)
{
	scanner.addProduct(Product("mleko", 3, 12324));
	scanner.addProduct(Product("maslo", 5, 45543));
	EXPECT_EQ("maslo, 5", scanner.getNameAndPrice(45543));
}

TEST_F(BarcodeScannerFixture, GetNameAndPrice_GivenBarcodeIsNotFound_ThrowsInvalidArgumentException)
{
	scanner.addProduct(Product("mleko", 3, 12324));
	scanner.addProduct(Product("maslo", 5, 45543));
	EXPECT_THROW(scanner.getNameAndPrice(7777), std::invalid_argument);
}
