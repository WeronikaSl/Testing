#pragma once
#include "ProductStruct.hpp"
#include <vector>
#include <algorithm>

class BarcodeScanner
{
private:
	std::vector<Product> _products = {};
public:
	int getSizeOfVector() const; //to test addProductMethod
	void addProduct(const Product& product);
	std::string getNameAndPrice(int barcode) const;


};