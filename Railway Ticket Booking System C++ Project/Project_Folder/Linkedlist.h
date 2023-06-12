#include"Node.h"

class Linkedlist
{
	Node* start;
	public:
		
		Linkedlist();
		void InsertBeg(Pass);
		void InsertEnd(Pass);
		void InsertPosi(Pass,int);
		void DeleteBeg();
		void DeleteEnd();
		void DeletePos(int);
		void searchpassbyid(int);
		void searchpassbyname(char*);
		void updateinfo(int,char*,char*,int);
		void Display();	
		void avalibletrn();
		~Linkedlist();
}; 
