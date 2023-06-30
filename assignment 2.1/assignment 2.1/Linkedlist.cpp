#include "Linkedlist.h"
LinkedList::LinkedList() { this->head = nullptr; this->tail=nullptr; }


void LinkedList::push_front(listType activeData) {
	Node* curData = new Node; //creates new Node
	curData->data = activeData;//sets current data as the active data
	curData->next = nullptr;//sets next ptr ass null 
	curData->prev = nullptr;//sets prev ptr as null
	if (head == nullptr) {//sets first item as curr data if looking at a nullptr and since there is nothing previous its just null
		head = curData;
		tail = curData->prev;//sets the cur data as previous data
	}
	else if (head->data.enterQtime > curData->data.enterQtime) {// if enter time of head is > enter time of curData set curData as next item and head as curData
		curData->next = head;
		head = curData;
	}
	else {
		Node* temp = head;
		while (temp != nullptr && temp->next != nullptr && curData->next->data.enterQtime)
		{
			temp = temp->next;
		}
	}
	

}

void LinkedList::push_back(listType activeData) {
	Node* curData = new Node; //creates new Node
	curData->data = activeData;//sets current data as the active data
	curData->next = nullptr;//sets next ptr ass null 
	curData->prev = nullptr;//sets prev ptr as null
	if (tail == nullptr) {
		tail = curData;

	}
	else if (head->data.enterQtime < curData->data.enterQtime) {// if enter time of head is > enter time of curData set curData as next item and head as curData
		curData->next = tail;
		head = curData;
	}
	else {
		Node* temp = tail;//iterates through until available node is open.
		while (temp != nullptr && temp->next != nullptr && curData->next->data.enterQtime)
		{
			temp = temp->next;
		}
	}
}


void LinkedList::pop_front(int Id, int enter) {
	if (head == nullptr) {//if list is empty
		cout << "List is Empty" << endl;
		return;
	}
	if (head->data.name == Id)
	{
		Node* del = head;//selects what needs to be deleted
		delete del;
		del = nullptr;

	}
	Node* temp = head;
	while (temp != nullptr && temp->next != nullptr && temp->next->data.enterQtime < enter) {//itterates through the list
		temp = temp->next;
	}
	if (temp->next->data.name == Id) {//selects node to delete if the id and name are the same
		Node* del = temp->next;
		temp->next = temp->next->next;
		delete del;
		del = nullptr;//deletes

	}
	cout << " test" << endl;
}

void LinkedList::pop_back(int Id, int enter) {
	if (tail == nullptr){
		cout << "List is Empty" << endl;
	return;
	}
	Node* removed_node = tail;
	tail = tail->prev;
	delete removed_node;
	if (tail != NULL)
		tail->next = NULL;
	else
		head = NULL;
}


bool LinkedList::empty() {
	Node* check = head;
	if (check != nullptr)//if null returns false else returns true
	{
		return false;
	}
	else {
		return true;
	}
}


int LinkedList::listCount() {
	int count = 0;
	static Node* rep = head;
	while (rep != nullptr) {
		count++;
		rep = rep->next;
	}
	return count;
}

int main() {
	return 1;
}


//Sorry I spent more time on the class than the linked list. 