#include <iostream>
#include "Node.h"
#include "Print.h"


int main() {
	std::cout << "hey bitch" << std::endl;
	Node a = Node(2);
	Node b = Node(23);
	a.link(b);
	print(a);
	print(a.getNext());
	std::cin.get();
}