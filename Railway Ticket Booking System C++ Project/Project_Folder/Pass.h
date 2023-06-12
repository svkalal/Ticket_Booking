#include<iostream>
#include<string.h>

using namespace std;

class Pass
{
	int id;
	char name[20];
	char loction[25];
	int age;
	int Billamount;
	
	public:
		Pass();
		Pass(int,char*,char*,int);
		void Display();
		
		void setid(int);
		void setname(char*);
		void setloction(char*);
		void setage(int);
				
		int getid();
		char* getname();
		char* getlocation();
		int getage();
		
};
