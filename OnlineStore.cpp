#include "OnlineStore.h"
#include <string>
#include <iostream>

// Item class functions.
Item::Item(std::string name, long id, double price, int quantity)
	: name{ validateItemName(name) },
	id{ validateNumber(id, "Id") },
	price{ validateNumber(price, "Price") },
	quantity{ validateNumber(quantity, "Quantity") }
{ }

Item::Item()
	: name{ "-placeholder-" }, id{ 0 }, price{ 0.0 }, quantity{ 0 } { }

std::string Item::validateItemName(std::string name) {
	if (name == "" || name == "-placeholder-") {
		std::cout << "Item name is required and cannot be '-placeholder-' - setting name to 'Unknown item'.\n";
		return "Unknown item";
	}
	else {
		return name;
	}
}

template<typename T> T Item::validateNumber(T userNumber, std::string dataName) {
	if (userNumber < 0) {
		std::cout << dataName << " cannot be negative. " << dataName << " will be 1.\n";
		return 1;
	}
	else {
		return userNumber;
	}
}

std::string Item::getItemName() {
	return name;
}

long Item::getItemId() {
	return id;
}

double Item::getItemPrice() {
	return price;
}

int Item::getItemQuantity() {
	return quantity;
}


// Store class functions.
Store::Store () { }

void Store::addStoreItem(Item item) {
	for (int i = 0; i < 100; i++) {
		if (storeItemList[i].getItemName() == "-placeholder-") {
			storeItemList[i] = item;
			break;
		}
	}
}

std::string Store::getStoreContent() {
	std::string storeContentString = "STORE: \n";

	for (int i = 0; i < 100; i++) {
		if (storeItemList[i].getItemName() != "-placeholder-") {
			storeContentString += storeItemList[i].getItemName() + " x " +
				std::to_string(storeItemList[i].getItemQuantity()) + "\n";
		}
	}

	return storeContentString;
}

void printStoreContent(Store store) {
	std::cout << store.getStoreContent() << "\n";
}


// Order class functions.
Order::Order() : orderTotalPrice{ 0.0 } { }

void Order::addOrderItem(Item item) {
	for (int i = 0; i < 10; i++) {
		if (orderItemList[i].getItemName() == "-placeholder-") {
			orderItemList[i] = item; // Add item to the order list.
			orderTotalPrice += item.getItemPrice() * item.getItemQuantity(); // Add item cost.
			break;
		}
	}
}

double Order::getOrderTotalPrice() {
	return orderTotalPrice;
}