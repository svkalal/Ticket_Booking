#include "Pass.h"
/////////////////////////////////////////////
Pass::Pass()
{
	this->id=0;
	strcpy(this->name,"\0");
	strcpy(this->loction,"\0");
	this->age=0;
	this->Billamount=0000;
}
/////////////////////////////////////////////
Pass::Pass(int i,char* nm,char* l,int a)
{
	this->id=i;
	strcpy(this->name,nm);
	strcpy(this->loction,l);
	this->age=a;
	
	if(strcmp("Kolhapur",this->loction) == 0 ||strcmp("kolhapur",this->loction) == 0)
	{
		this->Billamount=500;
	}
	else if(strcmp("Sangli",this->loction) == 0 || strcmp("sangli",this->loction) == 0)
	{
		this->Billamount=600;
	}
	else if(strcmp("Delhi",this->loction) == 0 || strcmp("delhi",this->loction) == 0)
	{
			this->Billamount=1250;
	}
	else if(strcmp("Mumbai",this->loction) == 0 || strcmp("mumbai",this->loction) == 0)
	{
			this->Billamount=800;
	}
	else if(strcmp("Pune",this->loction) == 0 || strcmp("pune",this->loction) == 0)
	{
			this->Billamount=95;
	}
	else
	{
		this->Billamount=0000;
	}

		
}
/////////////////////////////////////////////
void Pass::Display()
{
	
	if(this->id != 0)
	{
		int i=1;
	cout<<"\n===================================================================================\n";
	cout<<"\n     		                 Indian Ralways Welcome                                                \n";
	cout<<"\n-----------------------------------------------------------------------------------\n";
	cout<<"\n   Passenger Sr.No.  : "<<i<<"/ "<<id<<"/ IND RWB "<<"Reg No:"<<&i;
	cout<<"\n   Passenger ID      : "<<this->id<<"                                 ";
	//cout<<"\n   Date              :  %d/%d/%d                                                  ",ptr[j].tidate.day,ptr[j].tidate.month,ptr[j].tidate.year);
	//cout<<"\n   Adhar Number      :  %lld                                                        ",ptr[j].adharnum);
	cout<<"\n   Name Of Passenger : "<<this->name<<"                               ";
	cout<<"\n   Destination       : "<<this->loction<<"                            ";
	cout<<"\n   Passenger Age     : "<<this->age<<"                                 ";            
	cout<<"\n-----------------------------------------------------------------------------------\n";
	cout<<"                                      Total Amount:-          "<<this->Billamount;

	cout<<"\n			     	Thank You Visit Again                              ";
	cout<<"\n 				     Happy Journey                                     ";
	cout<<"\n===================================================================================\n";
	cout<<"\n--------------->8 ----  >8 ----cut from here--- 8< ----- 8<--------------------\n\n\n\n";
	cout<<"\t";
	i++;
	}
	else
	{
		cout<<"\n\n\n\n\n";
		cout<<"\nNo List to Display";
		cout<<"\n\n\n\n\n";
	}
	

}


/////////////////////////////////////////////
void Pass::setid(int eid)
{
	this->id=eid;
}
/////////////////////////////////////////////
void Pass::setname(char* nam)
{
	strcpy(this->name,nam);
}
/////////////////////////////////////////////

void Pass::setloction(char* nnn)
{
	strcpy(this->loction,nnn);
}
/////////////////////////////////////////////
void Pass::setage(int aa)
{
	this->age=aa;
}
/////////////////////////////////////////////
int Pass::getid()
{
	return this->id;
}
/////////////////////////////////////////////
char* Pass::getname()
{
	return this->name;
}
/////////////////////////////////////////////
char* Pass::getlocation()
{
	return this->loction;
}
/////////////////////////////////////////////
int Pass::getage()
{
	return this->age;
}
/////////////////////////////////////////////


