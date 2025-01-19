#include<iostream>
using namespace std;
class rational{
	int a,b;
	public:
		rational(){
			a=0;
			b=0;
		}
		rational(int x,int y){
			a=x;
			b=y;
		}
		void display(){
			cout<<"Rational No:"<<a<<"/"<<b<<endl;
		}
		friend void operator +(rational,rational);
};
void operator +(rational r1,rational r2){
	rational r;
	r.a=r1.a*r2.b+r2.a*r1.b;
	r.b=r1.b*r2.b;
	cout<<"After Addition,";
	r.display();
}
int main(void){
	rational r1(2,3),r2(3,2);
	r1.display();
	r2.display();
	r1+r2;
}
