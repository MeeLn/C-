#include<iostream>
using namespace std;
class bweight;
class aweight{
	int k,g;
	public:
		aweight(){
			k=0;
			g=0;
		}
		aweight(int x,int y){
			k=x;
			g=y;
		}
		void display(){
			cout<<"The Weight is:"<<k<<" kg"<<g<<" gm"<<endl;
		}
		friend void add(aweight,bweight);
};
class bweight{
	int k,g;
	public:
		bweight(){
			k=0;
			g=0;
		}
		bweight(int x,int y){
			k=x;
			g=y;
		}
		void display(){
			cout<<"The Weight is:"<<k<<" kg"<<g<<" gm"<<endl;
		}
		friend void add(aweight,bweight);
};
void add(aweight a1,bweight b1){
	aweight a;
	a.k=a1.k+b1.k;
	a.g=a1.g+b1.g;
	a.k=a.k+a.g/1000;
	a.g=a.g%1000;
	a.display();
		}
int main(void){
	int a,b;
	cout<<"Enter Wieght(..kg..gm):";
	cin>>a>>b;
	aweight a1(a,b);
	cout<<"Enter Wieght(..kg..gm):";
	cin>>a>>b;
	bweight b1(a,b);
	cout<<"After addition,";
	add(a1,b1);
}