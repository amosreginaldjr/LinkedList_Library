#pragma once

template<typename node_data>
class LinkedList;

template<typename node_data>
class LinkedList
{
private:
	struct Node
	{
		node_data data;
		Node* next;
	};

private:
	Node* head;
	Node* tail;
	int	list_length;

public:
	LinkedList();
	~LinkedList();
	bool is_empty();
	void append(node_data user_input); //adds to the tail
	void prepend(node_data user_input);//adds to the head
	void output();
	int get_size();
	void reverse_data();

	node_data get_head();
	node_data get_tail();
};