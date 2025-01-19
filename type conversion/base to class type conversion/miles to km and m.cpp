#include<iostream>
using namespace std;
class Distance{
	int km;
	int m;
	public:
		Distance(int a){
			km=a*1.609344*1000;
			km=km/1000;
			m=km%1000;
		}
		void display(){
			cout<<"Distance:"<<km<<" km "<<m<<" m"<<endl;
		}
};
int main(void){
	Distance d=232;
	d.display();
}
