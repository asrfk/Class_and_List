#pragma once
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct listType {
	int name, itemCount, enterQtime, exitQtime;
};
struct Node {
	listType data;
	Node* next;
	Node* head;
	Node* tail;
	Node* prev;
};

class LinkedList
{
public:
	LinkedList();
	void push_front(listType activeData);
	void push_back(listType activeData);
	void pop_front(int Id, int enter);
	void pop_back(int Id, int enter);
	bool empty();
	int listCount();

private:
	Node* head;
	Node* tail;
};