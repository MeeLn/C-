#include<iostream>
using namespace std;
class Distance{
	float km,m;
	public:
		Distance(int a){
			km=a*1.609344;
			m=(km-(int)km)*1000;
			km=(int)km;
		}
		void display(){
			cout<<"Distance:"<<km<<" km "<<m<<" m"<<endl;
		}
};
int main(void){
	Distance d=2;
	d.display();
}

