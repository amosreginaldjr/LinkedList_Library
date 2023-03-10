#include<iostream>
#include"LinkedList.h"
#include"LinkedList.cpp"
using namespace std;

int main()
{
	LinkedList<int> LL;

	cout << "is_empty: ";
	cout << LL.is_empty();
	cout << endl;

	LL.append(3);
	LL.append(5);
	LL.append(7);
	LL.append(9);
	LL.prepend(2);
	LL.prepend(4);
	LL.prepend(6);
	LL.prepend(8);

	cout << "is_empty: ";
	cout << LL.is_empty() << endl;
	cout << "front: ";
	cout << LL.get_head() << endl;
	cout << "back: ";
	cout << LL.get_tail() << endl;
	cout << "size: ";
	cout << LL.get_size() << endl;

	LL.output();

	LL.reverse_data();
	LL.output();
	LL.output();
	LL.output();

	return 0;
}