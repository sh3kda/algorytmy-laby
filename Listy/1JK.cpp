#include <iostream>
#include <cstdlib> //srand
#include <ctime> //time

using namespace std;

struct Node
{
	Node * next;
	int data;
}; 

void insert_front (Node * &head, int data )
{
	Node * p = new Node;
	
	p->data = data;
	p->next = head;
	head = p;


}

void delete_p (Node * &head, Node *p)
{
	Node * prev = NULL;
	
	if( p == head)
		{
		Node * p = head;
        p = head->next;

		delete p;
		
		}else
			{
            prev = head;


            while(prev->next != p)
                prev = prev->next;

            prev->next = p->next;
            delete p;

			}
}
 
Node * find( Node * p, int data ){
    while (p != NULL && data != p->data)
        p = p->next;

    return p;

}

int size( Node * p )
{
	int size = 0;


    while (p != NULL) {

        size++;
        p = p->next;

    }
	
	cout << "Liczba elementów listy: " << size << endl;
	return 0;
}

void print ( Node * head )
{
	int i = 0;
	Node * p = head;

    while (p != NULL)

    {
        cout << i << ": " << p->data << " ";
        i++;
        p = p->next;

    }
	
	cout << endl;
}

int main ()
{
	Node * L, *p;
	int i, data;
	
	L = NULL;
	

		
	return 0;
	
}
