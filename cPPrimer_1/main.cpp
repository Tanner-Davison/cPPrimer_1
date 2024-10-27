#include <iostream>
#include <print>

int main() {

	int currVal = 0, val = 0;

	if (std::cin >> currVal) {
		int cnt = 1;
		while (std::cin >> val) {
			if (val == currVal) {
				++cnt;
			}
			else {
				//only executes upon new group change-> prints last group;
				std::cout << currVal << " occurs " << cnt << " times " << std::endl;
				cnt = 1;
				currVal = val; //sets current val to new val;
			}
		}
		std::cout << currVal << " occurs " << cnt << " times " << std::endl;
	}

	return 0;
}