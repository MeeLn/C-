#include<iostream>
using namespace std;
class Height{
	int feet,inches;
	public:
		Height(int a,int b){
			feet=a;
			inches=b;
		}
		void display(){
			cout<<"Height:"<<feet<<" feet "<<inches<<" inches"<<endl;
		}
		operator float(){
			return ((feet+(float)inches/12)/3.28024);
		}
};
int main(void){
	Height h(3,4);
	float meter=h;
	cout<<"Height:"<<meter<<" meter"<<endl;
}
