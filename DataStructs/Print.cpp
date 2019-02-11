#include <iostream>
#include "Print.h"
#include "Node.h"


void print(const char* message) {
	std::cout << message << std::endl;
}

void print(float message) {
	std::cout << message << std::endl;
}

void print(Node n) {
	std::cout << n.value << std::endl;
}