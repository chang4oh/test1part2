/*
	Chang Oh
	Test 2
	main.cpp
*/


#include "main.h"

int main()
{
    FIFO test;
    
    cout << "Is Empty "<< test.isempty()<< endl;
	cout << "Adding Numbers "<< endl;
	for (int i=0; i<10; i++)
	{
		cout << i << endl;
		test.push(i);	
	} 
    cout << "Is Empty "<< test.isempty()<< endl;
	cout << "Peek" << endl;
	test.peek();
	
	cout << "Pulling Numbers "<< endl;
	for (int i=0; i<10; i++)
	{
		cout << i << endl;
		test.pull();	
	} 	
    cout << "Is Empty "<< test.isempty()<< endl;
	cout << "Peek" << endl;
	test.peek();
	cout << "adding 50" << endl;
	test.push(50);
    cout << "Is Empty "<< test.isempty()<< endl;
	cout << "Peek" << endl;
	test.peek();
	cout << "Pulling"<< endl;
	test.pull();
    cout << "Is Empty "<< test.isempty()<< endl;
	cout << "Peek" << endl;
	test.peek();
	cout << "Pulling"<< endl;
	test.pull();		
    cout << "Is Empty "<< test.isempty()<< endl;
	cout << "Peek" << endl;
    test.peek();
    return 0;
}
