#include<iostream>
using namespace std;
class Volume{
	int r,l,b,h;
	float h1;
	public:
		Volume(int a,int b,int c,int d,float e){
			r=a;
			l=b;
			b=c;
			h=d;
			h1=e;
		}
		void calculate(int a,int b){
			cout<<"Volume of cylinder:"<<(3.14*a*a*b)<<endl;
		}
		void calculate(int a){
			cout<<"Volume of Cube:"<<(a*a*a)<<endl;
		}
		void calculate(int a,int b,float c){
			cout<<"Volume of Cubiod:"<<(a*b*c)<<endl;
		}
};
int main(void){
	Volume v(2,3,4,5,6.0);
	v.calculate(2,5);
	v.calculate(3);
	v.calculate(3,4,6.0);
}
