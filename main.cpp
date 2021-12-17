#include "WebURL.h"
#include "ImageMetadata.h"
#include "OnlineStore.h"
#include <iostream>

int main() {
	WebURL site1{ "htts://highline.edu/about" };

	std::cout << "\n" << site1.getURL() << "\n";
	std::cout << site1.getURLScheme() << "\n";
	std::cout << site1.getURLAuthority() << "\n";
	std::cout << site1.getURLPath() << "\n";

	std::cout << "\n\n ================ \n\n";

	ImageMetadata image1{
		"Stone bridge",
		"JPEG",
		"02/29/2012",
		5.409,
		"",
		1200,
		840,
		500,
		6000,
		1300,
		false
	};

	image1.setApertureSizeDenom(300);

	printImageInfo(image1);


	std::cout << "\n\n ================ \n\n";

	Item item1{ "Item1", 100, 10.0, 10 };
	Item item2{ "Item2", 200, 5.0, 10 };
	Item buyItem1{ "Item1", 100, 10.2, 3 };

	Store store1{};
	store1.addStoreItem(item1);
	store1.addStoreItem(item2);
	printStoreContent(store1);

	Order order1{};
	order1.addOrderItem(buyItem1);
	std::cout << order1.getOrderTotalPrice();
}