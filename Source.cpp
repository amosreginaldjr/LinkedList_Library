#include<iostream>
using namespace std;

template<typename Node_data>
class Node
{
	Node_data data;
	Node* next;
};

template<typename LL_data>
class LinkedList : template<typename Node_data>private Node
{
private:
	Node* head = new Node();
	Node* tail = head;
	int length = 0;


public:
	void is_empty();

};

template<typename LL_data>
void LinkedList<LL_data>::is_empty()
{
	if (head == nullptr)
		return 1;
	return 0;
}

int main()
{
	LinkedList<int> LL;
	LL.is_empty();
	//if (LL.is_empty())
		cout << 112112;
	

	return 0;
}