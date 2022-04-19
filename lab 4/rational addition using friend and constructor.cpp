#include<iostream>
using namespace std;
class time{
	int h,m,s;
	public:
		time(){
			h=0;
			m=0;
			s=0;
		}
		time(int x,int y,int z){
			h=x;
			m=y;
			s=z;
		}
		void display(){
			cout<<"The Time is:"<<h<<":"<<m<<":"<<s<<endl;
		}
		friend void add(time t1,time t2){
			time t;
	        t.h=t1.h+t2.h;
	        t.m=t1.m+t2.m;
	        t.s=t1.s+t2.s;
	        t.h=t.h+(t.m/60);
	        t.m=(t.m%60)+(t.s/60);
	        t.s=t.s%60;
	        cout<<"After addition,";
	        t.display();
        }
};
int main(void){
	int a,b,c;
	cout<<"Enter time(hh:mm:ss):";
	cin>>a>>b>>c;time t1(a,b,c);
	cout<<"Enter time(hh:mm:ss):";
	cin>>a>>b>>c;
	time t2(a,b,c);
	add(t1,t2);
}