#pragma once
#include <string>

// First class represents an item.
class Item {
public:
	Item(std::string name, long id, double price, int quantity);
	Item(); // Default constructor to make placeholder items in storeItemList.

	// Functions to validate user input.
	std::string validateItemName(std::string name);
	template<typename T> T validateNumber(T userNumber, std::string dataName);

	// Getter functions
	std::string getItemName();
	long getItemId();
	double getItemPrice();
	int getItemQuantity();

private:
	std::string name;
	long id;
	double price;
	int quantity;
};

// Second class represents a store.
class Store {
public:
	Store();

	void addStoreItem(Item item);
	std::string getStoreContent();

private:
	Item storeItemList[100]; // Item information initialized with default Item constructor.
};

// Function to print contents of store.
void printStoreContent(Store store);


// Third class represents an order.
class Order {
public:
	Order();
	void addOrderItem(Item item);
	double getOrderTotalPrice();

private:
	Item orderItemList[10]; // Item information initialized with default Item constructor.
	double orderTotalPrice;
};
