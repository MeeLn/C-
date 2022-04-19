#include<iostream>
using namespace std;
class bdata;
class cdata;
class adata{
	int a;
	public:
		adata(int x){
			a=x;
		}
		void display(){
			cout<<"The value of a is :"<<a<<endl;
		}
		friend void compare(adata,bdata,cdata);
};
class bdata{
	int b;
	public:
		bdata(int x){
			b=x;
		}
		void display(){
			cout<<"The value of b is :"<<b<<endl;
		}
		friend void compare(adata,bdata,cdata);
};
class cdata{
	int c;
	public:
		cdata(int x){
			c=x;
		}
		void display(){
			cout<<"The value of c is :"<<c<<endl;
		}
		friend void compare(adata,bdata,cdata);
};
void compare(adata a1,bdata b1,cdata c1){
	int d;
	cout<<"Enter value of d:";
	cin>>d;
	adata a(d);
	cout<<"The value of d is :"<<a.a<<endl;
	if(a1.a>b1.b&&a1.a>c1.c&&a1.a>a.a){
		cout<<a1.a<<" is greater than others."<<endl;
	}
	else if(b1.b>c1.c&&b1.b>a.a){
		cout<<b1.b<<" is greater than others."<<endl;
	}
	else if(c1.c>a.a){
		cout<<c1.c<<" is greater than others."<<endl;
	}
	else{
		cout<<a.a<<" is greater than others."<<endl;
	}
}
int main(void){
	int a;
	cout<<"Enter value of a:";
	cin>>a;
	adata a1(a);
	a1.display();
	cout<<"Enter value of b:";
	cin>>a;
	bdata b1(a);
	b1.display();
	cout<<"Enter value of c:";
	cin>>a;
	cdata c1(a);
	c1.display();
	compare(a1,b1,c1);
}