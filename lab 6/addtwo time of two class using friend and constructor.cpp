#include<iostream>
using namespace std;
class btime;
class atime{
	int h,m,s;
	public:
		atime(){
			h=0;
			m=0;
			s=0;
		}
		atime(int x,int y,int z){
			h=x;
			m=y;
			s=z;
		}
		void display(){
			cout<<"The time:"<<h<<":"<<m<<":"<<s<<endl;
		}
		friend void add(atime,btime);
};
class btime{
	int h,m,s;
	public:
		btime(){
			h=0;
			m=0;
			s=0;
		}
		btime(int x,int y,int z){
			h=x;
			m=y;
			s=z;
		}
		void display(){
			cout<<"The time:"<<h<<":"<<m<<":"<<s<<endl;
		}
		friend void add(atime,btime);
};
void add(atime a1,btime b1){
	atime a;
	a.h=a1.h+b1.h;
	a.m=a1.m+b1.m;
	a.s=a1.s+b1.s;
	a.h=a.h+(a.m/60);
	a.m=(a.m%60)+(a.s/60);
	a.s=(a.s%60);
	a.display();
}
int main(void){
	int a,b,c;
	cout<<"Enter time(hh:mm:ss):";
	cin>>a>>b>>c;
	atime a1(a,b,c);
	cout<<"Enter time(hh:mm:ss):";
	cin>>a>>b>>c;
	btime b1(a,b,c);
	add(a1,b1);
}