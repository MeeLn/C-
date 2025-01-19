#include<iostream>
using namespace std;
class base{
	protected:
		int a,b;
	public:
		base(int x,int y){
			a=x;
			b=y;
		}
		void display(){
			cout<<"Complex:"<<a<<"+i"<<b<<endl;
		}
		friend class third;
};
class derived:public base{
	int c,d;
	public:
		derived(int a,int b,int x,int y):base(a,b){
			c=x;
			d=y;
		}
		void display(){
			base::display();
			cout<<"Complex:"<<c<<"+i"<<d<<endl;
		}
		void complexadd(){
			c=c+a;
			d=d+b;
			cout<<"After Addition,Complex:"<<c<<"+i"<<d<<endl;
		}
};
class third{
	int x,y;
	public:
		third(int a,int b){
			x=a;
			y=b;
		}
		void display(){
			cout<<"Complex:"<<x<<"+i"<<y<<endl;
		}
		void addcomplex(base b){
			x=x+b.a;
			y=y+b.b;
			display();
		}
};
int main(void){
	derived d(1,2,3,4);
	d.display();
	d.complexadd();
	third t(5,6);
	t.display();
	t.addcomplex(d);
}
