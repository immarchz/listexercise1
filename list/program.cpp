#include <iostream>
#include "list.h"
using namespace std;

void main()
{
	//Sample Code
	List mylist;
	mylist.pushToHead('k');
	mylist.pushToHead('e');
	mylist.pushToHead('n');
	mylist.print();
	
	//reverse words
	mylist.reverse();
	

	cout << "\nEnter find alphabet: ";
	cin >> f;
	if (mylist.search(f)) {
		cout << "Found";
	}
	else {
		cout << "Not Found";
	}
	//TO DO! Write a program that tests your list library - the code should take characters, push them onto a list, 
	//- then reverse the list to see if it is a palindrome!
	
}
