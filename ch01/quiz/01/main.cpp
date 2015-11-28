#include <iostream>

int readNumber() {
	int x;
	std::cin >> x;
	return x;
}

void writeAnswer(int x) {
	std::cout << x << std::endl;
}

int main() {
	int x = readNumber();
	int y = readNumber();
	writeAnswer(x + y);
}