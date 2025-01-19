#include<iostream>
using namespace std;
class shape{
	protected:
		int width ,height;
	public:
		shape(int a, int b){
			width=a;
			height=b;
		}
		void display(){
			cout<<"Its Width and Height is: "<<width<<" and "<<height<<endl;
		}
};
class rectangle:public shape{
	public:
		rectangle(int a,int b):shape(a,b){
		}
		void calculateArea(){
			shape::display();
			cout<<"Area:"<<height*width<<endl;
		}
};
int main(){
	rectangle r(2,3);
	r.calculateArea();
}
