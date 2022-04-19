#include<iostream>
using namespace std;
class aswap{
	int a;
	public:
		aswap(){
			a=0;
		}
		aswap(int x){
			a=x;
		}
		void display(){
			cout<<"The Value of a:"<<a<<endl;
		}
		 friend class bswap;
};
class bswap{
	int b;
	public:
		bswap(){
			b=0;
		}
		bswap(int x){
			b=x;
		}
		void display(){
			cout<<"The value of b:"<<b<<endl;
		}
		void swap(aswap a1){
			int c=0;
			c=b;
			b=a1.a;
			a1.a=c;
			a1.display();
			display();
		}
};
int main(void){
	int a;
	cout<<"Enter value of a:";
	cin>>a;
	aswap a1(a);
	cout<<"Enter value of b:";
	cin>>a;
	bswap b1(a);
	b1.swap(a1);
}