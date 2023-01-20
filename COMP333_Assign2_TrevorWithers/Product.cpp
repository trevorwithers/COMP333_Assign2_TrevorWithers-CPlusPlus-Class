#include "Product.h"

//Trevor Withers
//Implementation file for 3 different classes that are derived from product

/// <summary>
/// Product Class
/// </summary>
Product::Product()
{
	string name;
	cout << "Hello, please enter the name of the product: ";
	getline(cin, name);
	while (name == "")
	{
		cout << "Please enter a valid name: ";
		getline(cin, name);
	}
	productName = new string(name);
	assert(productName != NULL);
	cout << "Hello, please enter a bar code for the product: ";
	cin >> barCode;
	while (barCode < 0 || cin.fail())
	{
		cin.clear();
		cin.ignore(80, '\n');
		cout << "Please enter a positive number for the bar code: ";
		cin >> barCode;
	}
	cin.ignore(80, '\n');
}

Product::~Product()
{
	delete productName;
}

Product::Product(int pBarCode, string name)
{
	barCode = (pBarCode > -1) ? pBarCode : 0;
	productName = new string((name != "") ? name : "No Name");
	assert(productName != NULL);
}

void Product::show(ostream& out) const
{
	out << "Bar Code: " << barCode << endl;
	out << "Product Name: " << *productName << endl;
}

/// <summary>
/// PrePackedFood Class
/// </summary>
PrePackedFood::PrePackedFood() : Product()
{
	cout << "Hello, please enter a unit price for the product: ";
	cin >> unitPrice;
	while (unitPrice < 0.0 || cin.fail())
	{
		cin.clear();
		cin.ignore(80, '\n');
		cout << "Please enter a positive number for the unit price: ";
		cin >> unitPrice;
	}
	cin.ignore(80, '\n');
}

PrePackedFood::PrePackedFood(int barCode, string name, double price) : Product(barCode, name)
{
	unitPrice = (price > 0.0) ? price : 0.0;
}

void PrePackedFood::show(ostream& out) const
{
	Product::show(out);
	out << "Unit Price: " << unitPrice << endl;
}

/// <summary>
/// FreshFood Class
/// </summary>
FreshFood::FreshFood() : Product()
{
	cout << "Hello, please enter a unit price for the product: ";
	cin >> unitPrice;
	while (unitPrice < 0.0 || cin.fail())
	{
		cin.clear();
		cin.ignore(80, '\n');
		cout << "Please enter a positive number for the unit price: ";
		cin >> unitPrice;
	}
	cout << "Hello, please enter a weight for the product: ";
	cin >> weight;
	while (weight < 0.0 || cin.fail())
	{
		cin.clear();
		cin.ignore(80, '\n');
		cout << "Please enter a positive number for the weight: ";
		cin >> weight;
	}
	cin.ignore(80, '\n');
}

FreshFood::FreshFood(int barCode, string name, double price, double pWeight) : Product(barCode, name)
{
	unitPrice = (price > 0.0) ? price : 0.0;
	weight = (pWeight > 0.0) ? pWeight : 0.0;
}

void FreshFood::show(ostream& out)
{
	Product::show(out);
	out << "Price Per Gram: " << unitPrice << endl;
	out << "Weight: " << weight << endl;
	out << "Total Price: " << unitPrice * weight << endl;
}