#include<iostream>
using namespace std;
class brational;
class arational{
	int a,b;
	public:
		arational(){
			a=0;
			b=0;
		}
		arational(int x,int y){
			a=x;
			b=y;
		}
		void display(){
			cout<<"The Rational no:"<<a<<"/"<<b<<endl;
		}
		void add(brational b1);
};
class brational{
	int a,b;
	public:
		brational(){
			a=0;
			b=0;
		}
		brational(int x,int y){
			a=x;
			b=y;
		}
		void display(){
			cout<<"The Rational no:"<<a<<"/"<<b<<endl;
		}
		friend void arational::add(brational b1);
};
void arational::add(brational b1){
			a=a*b1.b+b1.a*b;
			b=b*b1.b;
			display();
		}
int main(void){
	int a,b;
	cout<<"Enter Rational no:";
	cin>>a>>b;
	arational a1(a,b);
	cout<<"Enter Rational no:";
	cin>>a>>b;
	brational b1(a,b);
	a1.add(b1);
}