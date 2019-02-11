
struct Node
{
	float value;
	Node();
	Node(float f);
	void link(Node& n);
	Node getNext();
private:
	Node * next;
};



void print(Node n);