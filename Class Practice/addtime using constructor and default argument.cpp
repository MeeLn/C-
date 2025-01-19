#include<iostream>
using namespace std;
class Time{
	int h,m,s;
	public:
		Time(){
			h=0;
			m=0;
			s=0;
		}
		Time(int a,int b,int c=10){
			h=a;
			m=b;
			s=c;
		}
		void display(){
			cout<<"Time: ("<<h<<":"<<m<<":"<<s<<")"<<endl;
		}
		friend void Addtime(Time,Time);
};
void Addtime(Time t1,Time t2){
	Time t;
	t.h=t1.h+t2.h;
	t.m=t1.m+t2.m;
	t.s=t1.s+t2.s;
	t.m=t.m+t.s/60;
	t.s=t.s%60;
	t.h=t.h+t.m/60;
	t.m=t.m%60;
	t.display();
}
int main(void){
	Time t1(2,20),t2(1,30);
	t1.display();
	t2.display();
	cout<<"After Addition,";
	Addtime(t1,t2);
}
