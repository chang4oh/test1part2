/*
	Chang Oh
	Test 2
	queue.cpp
*/

#include "queue.h"

FIFO::FIFO()
{
    head = NULL;
    tail = NULL;
};

FIFO::~FIFO()
{
};

void FIFO::push(int id)
{
	node *tmp = new node;
    tmp->data = id;
    tmp->next = NULL;

    if(head == NULL)
    {
        head = tmp;
        tail = tmp;
    }
    else
    {
        tail->next = tmp;
        tail = tail->next;
    }
    
};

void FIFO::pull()
{
    if(head == NULL){
    	cout<<"Empty FIFO\n";
    }
    else if(head->next == NULL){
        head = NULL;
        tail = NULL;
	}
    else{
        head = head->next;
    }
};

int FIFO::peek()
{
    if(head == NULL){
    	cout<<"Empty FIFO\n";
    }
    else{
    	cout<<head->data<<"\n";
    }
};

bool FIFO::isempty()
{
	return (head == NULL);
}
