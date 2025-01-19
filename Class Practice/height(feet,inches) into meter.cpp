#include<iostream>
using namespace std;
class height{
	float feet,inches,meter;
	public:
		height(int a,int b){
			feet=a;
			inches=b;
		}
		operator float(){
			feet=feet+inches/12;
			meter=feet/3.28024;
			return meter;
		}
		void display(){
			cout<<"Height:"<<feet<<" feet "<<inches<<" inches"<<endl;
		}
};
int main(void){
	float m;
	height h(3,11);
	h.display();
	m=h;
	cout<<"After conversion, Height:"<<m<<" meter"<<endl;
}
