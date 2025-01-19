#include<iostream>
using namespace std;
class Time{
	float hr,m;
	public:
		Time(int a){
			hr=a/60;
			m=a%60;
		}
		void display(){
			cout<<"Time:"<<hr<<" hr "<<m<<" mins"<<endl;
		}
};
int main(void){
	Time t=90;
	t.display();
}
