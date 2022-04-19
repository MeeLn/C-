#include<iostream>
using namespace std;
class bcompare;
class acompare{
	int a;
	public:
		acompare(){
			a=0;
		}
		acompare(int x){
			a=x;
		}
		void display(){
			cout<<"The value of a:"<<a<<endl;
		}
		friend void compare(acompare,bcompare);
};
class bcompare{
	int b;
	public:
		bcompare(){
			b=0;
		}
		bcompare(int x){
			b=x;
		}
		void display(){
			cout<<"The value of b:"<<b<<endl;
		}
		friend void compare(acompare,bcompare);
};
void compare(acompare a1,bcompare b1){
	if(a1.a==b1.b){
		cout<<a1.a<<" is equal to "<<b1.b<<endl;
	}
	else{
		if(a1.a>b1.b){
			cout<<a1.a<<" is greater than "<<b1.b<<endl;
		}
		else{
			cout<<b1.b<<" is greater than "<<a1.a<<endl;
		}
	}
}
int main(void){
	int a;
	cout<<"Enter value of a:";
	cin>>a;
	acompare a1(a);
	cout<<"Enter value of b:";
	cin>>a;
	bcompare b1(a);
	compare(a1,b1);
}