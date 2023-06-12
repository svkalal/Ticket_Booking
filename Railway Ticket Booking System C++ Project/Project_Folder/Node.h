#include<iostream>
using namespace std;
#include "Pass.h"

class Node
{
	Pass data;
	Node* next;
	public:
	  Node(Pass);
	  Pass getdata();
	  Node* getnext();
	  void setdata(Pass);
	  void setnext(Node*);	
};
