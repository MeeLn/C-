#include<iostream>
using namespace std;
class Distance{
	int f,i;
	public:
		Distance(){
			f=0;
			i=0;
		}
		Distance(int x,int y){
			f=x;
			i=y;
		}
		void display(){
			cout<<"Distance:"<<f<<" feet "<<i<<" inches"<<endl;
		}
		void operator +=(Distance d){
			f+=d.f;
			i+=d.i;
			f=f+i/12;
			i=i%12;
			display();
		}
};
int main(void){
	Distance d1(2,9),d2(1,3);
	d1.display();
	d2.display();
	d1+=d2;
}
