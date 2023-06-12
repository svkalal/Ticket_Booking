#include "Linkedlist.h"
////////////////////////////////////////////////////
Linkedlist::Linkedlist()
{
	this->start=NULL;
}
////////////////////////////////////////////////////
void Linkedlist::InsertBeg(Pass D)
{
	Node* temp= new Node(D);
	temp->setnext(start);
	start=temp;

}
////////////////////////////////////////////////////
void Linkedlist::Display()
{
	
		if( start==NULL )
		{
			cout<<"\n\n\n\t\tTicket List is Empty..";
			return;
		}
		else
		{
				Node* p=start;
		
				while(p !=NULL)
				{
				
					p->getdata().Display();
					p=p->getnext();
				}
			
		}
}
////////////////////////////////////////////////////
void Linkedlist::InsertEnd(Pass ed)
{
	Node* temp = new Node(ed);
	if(start == NULL)
	{
		cout<<"\n\n\n\n\n";
		cout<<"\nInsertion Not Possible..";
		cout<<"\n\n\n\n\n";
	}
	else
	{

		Node* p=start;
		while( p->getnext() != NULL )
		{
			p=p->getnext();
		}
		p->setnext(temp);

	}

}
///////////////////////////////////////////////////
void Linkedlist::InsertPosi(Pass pd,int posi)
{
	Node* temp = new Node(pd);
	if(start == NULL)
	{
		start = temp;
		return;	
	}
	
		Node* p=start;

		int i=0;
		while(i<posi-1)
		{
			p=p->getnext();	
			i++;
		}
		temp->setnext(p->getnext());
		p->setnext(temp);
		
}
///////////////////////////////////////////////////
void Linkedlist::DeleteBeg()
{
	Node* p;
	p=start;
	if(start == NULL)
	{
		cout<<"\n\n\n\n\n";
		cout<<"\n List is Empty..";
		cout<<"\n\n\n\n\n";

		return;
	}
	else
	{
		p->getdata().Display();
	//	cout<<"\n<<_"<<"_>> getting Deleting from Fornt";
		start=p->getnext();
				delete p;

		cout<<"\nSuccesfull";
	}
}
///////////////////////////////////////
void Linkedlist::DeleteEnd()
{
	if( start == NULL)
	{
		cout<<"\n\n\n\n\n";
		cout<<"\nList is Empty....";
		cout<<"\n\n\n\n\n";

		return;
	}
	else
	{
		Node* p;
		p=start;
		if(p->getnext() == NULL)
		{
			delete p;
			start = NULL;
			return;
		}
		while(p->getnext()->getnext() != NULL)
		{
			p=p->getnext();
		}
	//	cout<<"\n<<_"<<p->getnext()->getdata()<<"_>> getting Deleting from End";
		delete p->getnext();
		p->setnext(NULL);
		cout<<"\nSuccesfull";
	}
}
///////////////////////////////////////
void Linkedlist::DeletePos(int position)
{
	Node* p;
	p=start;
	if( start == NULL)
	{
		cout<<"\n\n\n\n\n";
		cout<<"\nList is Empty....";
		cout<<"\n\n\n\n\n";

		return;
	}
	else
	{

	if(position==1 )
	{
		start = start->getnext();
		cout<<"\n "<<"is deleted";
		delete p;
		cout<<"\nSuccesfull";

		return;
	}
	
	int i=1;
	while(i<position-1 && p->getnext()!=NULL)
	{
		p=p->getnext();
		i++;
	}
	
	if(i == position-1)
	{
		Node* q= p->getnext();
		p->setnext(q->getnext());
		delete q;
		cout<<"\n Deleted Sucssefull..";
		return;
	}
	else
	{
		cout<<"\nInvalid Position.";
		return;
	}
	}
	
}
///////////////////////////////////////
void Linkedlist::searchpassbyid(int iidd)
{
	if(start == NULL)
	{
		cout<<"\n\n\n\n\n";
		cout<<"\n Passenger Not Avaliable.";
		cout<<"\n\n\n\n\n";
		return;
	}
	else
	{
		Node* p;
		p=start;
		int i;
		while( p->getdata().getid() != iidd)
		{
			p=p->getnext();
		}
		p->getdata().Display();
	}
}
///////////////////////////////////////
void Linkedlist::searchpassbyname(char* naam)
{
	if(start == NULL)
	{
		cout<<"\n\n\n\n\n";
		cout<<"\n Passenger Not Avaliable.";
		cout<<"\n\n\n\n\n";
		return;
	}
	else
	{
		Node* p;
		p=start;
		int i;
		while(strcmp(p->getdata().getname(),naam))
		{
			p=p->getnext();
		}
		p->getdata().Display();
	}
}
///////////////////////////////////////
Linkedlist::~Linkedlist()
{
	
		delete []start;
		start=NULL;
		
}
///////////////////////////////////////
void Linkedlist::avalibletrn()
{
	cout<<"\n|===============================================================================================\n";
	cout<<"\n|Sr.No  Train Number       Name of Train Availabel       prize       Timing";
	cout<<"\n|-----------------------------------------------------------------------------------------------\n";
	cout<<"\n|1)    500011                Kolhapur                   500/-         10.30AM \n";
	cout<<"\n|-----------------------------------------------------------------------------------------------\n";
	cout<<"\n|2)    500012                Sangli                     600/-         9.30AM  \n";
	cout<<"\n|-----------------------------------------------------------------------------------------------\n";
	cout<<"\n|3)    500013                 Delhi                     1250/-        12.45PM \n";
	cout<<"\n|-----------------------------------------------------------------------------------------------\n";
	cout<<"\n|4)    500014                Mumbai                     800/-         14.10PM \n";
	cout<<"\n|-----------------------------------------------------------------------------------------------\n";
	cout<<"\n|5)    500015                Pune                       95/-          15.30PM \n";
	cout<<"\n\n|=============================================================================================\n";

}
////////////////////////////////////////
void Linkedlist::updateinfo(int oldid,char* nam,char* lock,int agee)
{
	if(start == NULL)
	{
		cout<<"\n\n\n\n\n";
		cout<<"\n Passenger Not Avaliable.";
		cout<<"\n\n\n\n\n";
		return;
	}
	else
	{
		Node* p;
		p=start;
		Node* npid;
		while( p->getdata().getid() != oldid)
		{
			p=p->getnext();
		}
		
		npid=p->getnext();
		npid->getdata().setid(oldid);
		npid->getdata().setname(nam);
		npid->getdata().setloction(lock);
		npid->getdata().setage(agee);
	}
}
////////////////////////////////////////////////
