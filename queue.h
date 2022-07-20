/*
	Chang Oh
	Test 2
	queue.cpp
*/

#include <iostream>

using std::cout;
using std::endl;


struct node
{
    int data;
    node *next;
};

class FIFO
{
private:
    node *head,*tail;
public:
    FIFO();
	~FIFO();

    void push(int);
    void pull();
    int peek();
    bool isempty();
};
