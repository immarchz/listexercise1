#include <iostream>
#include "list.h"
using namespace std;

List::~List() {
	for (Node* p; !isEmpty(); ) {
		p = head->next;
		delete head;
		head = p;
	}
}

void List::pushToHead(char el)
{
	head = new Node(el, head);
	if (tail == 0)
	{
		tail = head;
	}
}
void List::pushToTail(char el)
{
	Node* t = new Node(el);
	tail->next = t;
	tail = t;
}
char List::popHead()
{
	char el = head->data;
	Node* tmp = head;
	if (head == tail)
	{
		head = tail = 0;
	}
	else
	{
		head = head->next;
	}
	delete tmp;
	return el;
}
char List::popTail()
{
	Node* p = head;
	int store = tail->data; //store value before delete
	while (p->next != tail) {
		p = p->next;
	}
	delete tail;
	p->next = 0;
	tail = p;
	return store;
}
bool List::search(char el)
{
	Node* f = head;

	while (f != 0) {
		if (f->data == el) {
			return true;
		}
		else {
			f = f->next;
		}
	}

	return false;
}
void List::reverse()
{
	List rev;
	for (Node* r = head; r != NULL; r = r->next) {
		char t = r->data;
		rev.pushToHead(t);
	}
	rev.print();

}
void List::print()
{
	if (head == tail)
	{
		cout << head->data;
	}
	else
	{
		Node* tmp = head;
		while (tmp != tail)
		{
			cout << tmp->data;
			tmp = tmp->next;
		}
		cout << tmp->data;
	}
}
