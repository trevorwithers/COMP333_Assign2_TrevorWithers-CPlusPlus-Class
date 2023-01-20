#include <iomanip>
#include <iostream>
#include <string>
#include <cassert>

//Trevor Withers
//header file for 3 different classes that are derived from product

using namespace std;

class Product
{
public:
	Product();
	virtual ~Product();
	Product(int, string);
	virtual void show(ostream&) const;
	int getBarCode() { return barCode; }
	string getProductName() { return *productName; }
protected:
	int barCode;
	string* productName;
};

class PrePackedFood : public Product
{
public:
	PrePackedFood();
	PrePackedFood(int, string, double);
	void show(ostream&) const;
	double getUnitPrice() const { return unitPrice; }

private:
	double unitPrice;
};

class FreshFood : public Product
{
public:
	FreshFood();
	FreshFood(int, string, double, double);
	void show(ostream&);
	double getUnitPrice() { return unitPrice; }
	double getWeight() { return weight; }

private:
	double unitPrice;
	double weight;
};