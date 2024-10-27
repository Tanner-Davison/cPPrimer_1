#include <iostream>
#include <print>

#include "Sales_item.h"

int main() {
	Sales_item currentItem, nextItem;

	if (std::cin >> currentItem) {
		//stuck in while loop until no more items
		while (std::cin >> nextItem) {
			if (nextItem.isbn() == currentItem.isbn()) {
				currentItem += nextItem;
			}
			//item does not equal prev item read prev items group & reset current;
			else {
				std::cout << currentItem << "\n\t" << std::endl;
				currentItem = nextItem;
			}
		}
		//this doesnt get called until there are no more items.(calls last item group)
		std::cout << "CALLED LAST ITEM\n" << currentItem << std::endl;
	}



	return 0;
}