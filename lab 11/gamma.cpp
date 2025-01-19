#include<iostream>
using namespace std;
class alpha{
	protected:
		int a;
	public:
		alpha(int x){
			a=x;
		}
		void display(){
			cout<<"a="<<a<<endl;
		}
};
class beta{
	protected:
		float b;
	public:
		beta(float x){
			b=x;
		}
		void display(){
			cout<<"b="<<b<<endl;
		}
};
class gamma:public alpha,public beta{
		int c;
	public:
		gamma(int y,float z,int x):alpha(y),beta(z){
			c=x;
		}
		void display(){
			alpha::display();
			beta::display();
			cout<<"c="<<c<<endl;
		}
};
int main(void){
	gamma g(2,3.5,3);
	g.display();
}
