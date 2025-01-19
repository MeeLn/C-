#include<iostream>
#include<string.h>
using namespace std;
class student{
	protected:
        char name[50];
		int roll;
	public:
		student(char *a, int b){
			strcpy(name,a);
			roll=b;
		}
		void display(){
			cout<<"Name: "<<name<<" Roll no:"<<roll<<endl;
		}
};
class test:public student{
    protected:
    int sub1,sub2;
	public:
		test(char *a,int b,int c,int d):student(a,b){
            sub1=c;
            sub2=d;
		}
		void display(){
			student::display();
			cout<<"sub1:"<<sub1<<"sub2:"<<sub2<<endl;
		}
};
class result:public test{
    int total;
	public:
		result(char *a,int b,int c,int d):test(a,b,c,d){
		}
		void display(){
                        test::display();
			total=sub1+sub2;
			cout<<"Total:"<<total<<endl;
		}
};
int main(){
	result r("milan",201420,45,42);
	r.display();
}
