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

	}/*access_node*/;

private:
	Node* head;
	Node* tail;
	int	list_length;

public:
	LinkedList();
	~LinkedList();
	bool is_empty();
	void append(node_data user_input);
	void prepend(node_data user_input);
	void output();
	int get_size();

	node_data front();
	node_data back();
};