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
			cout<<"Time:"<<hr<<" hour"<<m<<" min"<<endl;
		}
		operator int(){
			cout<<"After Conversion:"<<endl;
			return((hr*60)+m);
		}
};
int main(void){
	Time t(2,35);
	t.display();
	int m=t;
	cout<<"Time:"<<m<<" min"<<endl;
}
