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
		rational(rational &r){
			a=r.a;
			b=r.b;
		}
		void display(){
			cout<<"The rational no. is :"<<a<<"/"<<b<<endl;
		}
};
int main(void){
	int a,b;
	cout<<"Enter Rational no:";
	cin>>a>>b;
	rational a1(a,b),a2(a1);
	a1.display();
	cout<<"The copied value is,";
	a2.display();
}