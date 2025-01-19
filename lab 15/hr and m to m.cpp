#include<iostream>
using namespace std;
class Time{
	int hr,m;
	public:
		Time(int a,int b){
			hr=a;
			m=b;
		}
		void display(){
			cout<<"TIme:"<<hr<<" hr "<<m<<" m"<<endl;
		}
		operator int(){
			return ((hr*60+m));
		}
};
int main(void){
	Time t(2,20);
	int min=t;
	cout<<"Time:"<<min<<" mins"<<endl;
}
