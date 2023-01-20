#include "Product.h"

//Trevor Withers
//Client code for 2 different classes that are derived from the product class

void show(const Product* p)
{
	p->show(cout);
}

int main()
{
	// do not change my main except where you call the polymorphic function as indicated below

	cout << "1a) Create dynamic Product (non default): " << endl;
	Product* phone = new Product(90, "Android cell");
	assert(phone);
	cout << "Name= " << phone->getProductName() << endl;
	cout << "Bar code=" << phone->getBarCode() << endl << endl;
	phone->show(cout);
	cout << "Call polymorphic function:\n ";
	show(phone);


	cout << endl << endl;
	delete phone;

	cout << "1b) Create dynamic Product (default): " << endl;
	Product* item = new Product;
	assert(item);
	cout << "Name= " << item->getProductName() << endl;
	cout << "Bar code=" << item->getBarCode() << endl << endl;
	item->show(cout);
	cout << "Call polymorphic function:\n ";
	show(item);


	cout << endl << endl;
	delete item;


	cout << "2a) Create dynamic PrePackedFood (non default): " << endl;
	PrePackedFood* pasta = new PrePackedFood(40, "spaghetti", -.67);
	assert(pasta);
	cout << "Name= " << pasta->getProductName() << endl;
	cout << "Bar code=" << pasta->getBarCode() << endl << endl;
	cout << "Unit Price=" << pasta->getUnitPrice() << endl << endl;
	pasta->show(cout);
	cout << "Call polymorphic function:\n ";
	show(pasta);


	cout << endl << endl;
	delete pasta;


	cout << "2b) Create dynamic Prepacked (default): " << endl;
	PrePackedFood* food = new PrePackedFood;
	assert(food);
	cout << "Name= " << food->getProductName() << endl;
	cout << "Bar code=" << food->getBarCode() << endl << endl;
	cout << "Unit Price=" << food->getUnitPrice() << endl << endl;
	food->show(cout);
	cout << "Call polymorphic function:\n ";
	show(food);


	cout << endl << endl;
	delete food;


	cout << "3a) Create dynamic FreshFood (non default): " << endl;
	FreshFood* apples = new FreshFood(-6, "Delicious", 1.1, .67);
	assert(apples);
	cout << "Name= " << apples->getProductName() << endl;
	cout << "Bar code=" << apples->getBarCode() << endl << endl;
	cout << "Weight=" << apples->getWeight() << endl << endl;
	cout << "Price=" << apples->getUnitPrice() << endl << endl;
	apples->show(cout);
	cout << "Call polymorphic function:\n ";
	show(apples);


	cout << endl << endl;
	delete apples;

	cout << "3b) Create dynamic FreshFood (default): " << endl;
	FreshFood* freshPtr = new FreshFood;
	assert(freshPtr);
	cout << "Name= " << freshPtr->getProductName() << endl;
	cout << "Bar code=" << freshPtr->getBarCode() << endl << endl;
	cout << "Weight=" << freshPtr->getWeight() << endl << endl;
	cout << "Price=" << freshPtr->getUnitPrice() << endl << endl;
	freshPtr->show(cout);
	cout << "Call polymorphic function:\n ";
	show(freshPtr);


	cout << endl << endl;
	delete freshPtr;

	system("pause");
}
/*
	1a) Create dynamic Product (non default):
	Name= Android cell
	Bar code=90

	Bar Code: 90
	Product Name: Android cell
	Call polymorphic function:
	 Bar Code: 90
	Product Name: Android cell


	1b) Create dynamic Product (default):
	Hello, please enter the name of the product: Bag
	Hello, please enter a bar code for the product: 444
	Name= Bag
	Bar code=444

	Bar Code: 444
	Product Name: Bag
	Call polymorphic function:
	 Bar Code: 444
	Product Name: Bag


	2a) Create dynamic PrePackedFood (non default):
	Name= spaghetti
	Bar code=40

	Unit Price=0

	Bar Code: 40
	Product Name: spaghetti
	Unit Price: 0
	Call polymorphic function:
	 Bar Code: 40
	Product Name: spaghetti
	Unit Price: 0


	2b) Create dynamic Prepacked (default):
	Hello, please enter the name of the product: Noodles
	Hello, please enter a bar code for the product: 5656
	Hello, please enter a unit price for the product: 5.66
	Name= Noodles
	Bar code=5656

	Unit Price=5.66

	Bar Code: 5656
	Product Name: Noodles
	Unit Price: 5.66
	Call polymorphic function:
	 Bar Code: 5656
	Product Name: Noodles
	Unit Price: 5.66


	3a) Create dynamic FreshFood (non default):
	Name= Delicious
	Bar code=0

	Weight=0.67

	Price=1.1

	Bar Code: 0
	Product Name: Delicious
	Price Per Gram: 1.1
	Weight: 0.67
	Total Price: 0.737
	Call polymorphic function:
	 Bar Code: 0
	Product Name: Delicious


	3b) Create dynamic FreshFood (default):
	Hello, please enter the name of the product: Letuce
	Hello, please enter a bar code for the product: 4343
	Hello, please enter a unit price for the product: 0.99
	Hello, please enter a weight for the product: 0.5
	Name= Letuce
	Bar code=4343

	Weight=0.5

	Price=0.99

	Bar Code: 4343
	Product Name: Letuce
	Price Per Gram: 0.99
	Weight: 0.5
	Total Price: 0.495
	Call polymorphic function:
	 Bar Code: 4343
	Product Name: Letuce


	Press any key to continue . . .

	C:\Users\withe\OneDrive - St. Lawrence College\Documents\School\St. Lawrence\Year 2\Semester 1\Comp 333\COMP333_Assign2_TrevorWithers\x64\Debug\COMP333_Assign2_TrevorWithers.exe (process 16724) exited with code 0.
	To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
	Press any key to close this window . . .
*/