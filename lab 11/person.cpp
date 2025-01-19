#include<iostream>
#include <string.h>
using namespace std;
class person{
	protected:
		char name[50];
		int code;
	public:
		person(char *n,int c){
			strcpy(name,n);
			code=c;
		}
		void display(){
			cout<<"Name:"<<name<<endl<<"Code:"<<code<<endl;
		}
};
class account:public person{
		float salary;
	public:
		account(char *n,int c,float x):person(n,c){
			salary=x;
		}
		void display(){
			person::display();
			cout<<"salary"<<salary<<endl;
		}
};
class admin:public person{
		int no;
	public:
		admin(char *n,int c,int x):person(n,c){
			no=x;
		}
		void display(){
			person::display();
			cout<<"No of Years of Experience:"<<no<<"yrs"<<endl;
		}
};
int main(void){
	admin a("Milan",234,15);
	account a1("ram",124,30000);
	a.display();
	a1.display();
}
