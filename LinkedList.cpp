#include<iostream>
#include"LinkedList.h"
using namespace std;

template<typename node_data>
LinkedList<node_data>::LinkedList()
{
	head = new Node();
	tail = head;
	list_length = 0;
}

template<typename node_data>
LinkedList<node_data>::~LinkedList()
{
	delete head;
	delete tail;
	cout << "Destructor called" << endl;
}

template<typename node_data>
bool LinkedList<node_data>::is_empty()
{
	if (head->data == NULL)
		return true;
	return false;
}

template<typename data_node>
void LinkedList<data_node>::output()
{
	//make a base case!
	Node* tempNode = head;
	while (tempNode)
	{
		cout << tempNode->data << ' ';
		tempNode = tempNode->next;
	}
	cout << endl;
	delete tempNode;
}

template<typename node_data>
void LinkedList<node_data>::append(node_data user_input)
{
	if (is_empty())
	{
		head->data = user_input;
		head->next = new Node();
		list_length++;
	}
	else if (!is_empty())
	{
		Node* newNode = new Node();
		newNode->data = user_input;
		tail->next = newNode;
		tail = newNode;
		list_length++;
	}
}

template<typename node_data>
void LinkedList<node_data>::prepend(node_data user_input)
{
	if (is_empty())
	{
		head->data = user_input;
		head->next = new Node();
		list_length++;
	}
	else if (!is_empty())
	{
		Node* temp = new Node();
		temp->data = user_input;
		temp->next = head;
		head = temp;
		list_length++;
	}
}

template<typename node_data>
int LinkedList<node_data>::get_size()
{
	//make a base case!
	return list_length;
}

template<typename node_data>
node_data LinkedList<node_data>::get_head()
{
	//make a base case!
	return head->data;
}

template<typename node_data>
node_data LinkedList<node_data>::get_tail()
{
	//make a base case!
	return tail->data;
}

template<typename node_data>
void LinkedList<node_data>::reverse_data()
{
	//make a base case!
	for (size_t i = 0; i < 10; i++)
	{
		tail->next = prev;
		cout << prev->data;
	}
}