#include <iostream>
#include "Node.h"
#include "Print.h"


//constructors
Node::Node(float f) {
	value = f;
	next = 0;
}
Node::Node() {
	next = 0;
}

//methods
void Node::link(Node& n) {
	next = &n;
}
Node Node::getNext() {
	return *next;
}