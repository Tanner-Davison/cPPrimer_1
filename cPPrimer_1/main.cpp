#include <iostream>
#include "Sales_item.h"


int main() {

	Sales_item total;
	std::string spacer = "-------------------------\n";
	if (std::cin >> total) {
		Sales_item trans, allSales;
		int groupCnt = 1, occurances = 1;
		while (std::cin >> trans) {
			if (total.isbn() == trans.isbn()) {
				total += trans;
				++occurances;
			}
			else {
				std::cout << "\n" << total << "\n"
					<< "Trans count: " << ++occurances << "\n"
					<< spacer;
				allSales += total;
				total = trans;
				occurances = 0;
				groupCnt++;
			}
		}
		allSales += total;
		std::cout << total << "\n"
			<< "Trans Count: " << ++occurances << "\n" << spacer
			<< "\nTotal Summary: \n" << allSales
			<< "\n" << "Book IBSN Groups Sold: " << groupCnt
			<< std::endl;
	}
	return 0;
}