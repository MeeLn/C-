#include<iostream>
using namespace std;
class swapdata{
	int a;
	public:
		swapdata(){
			a=0;
		}
		swapdata(int x){
			a=x;
		}
		void display(){
			cout<<"The Value :"<<a<<endl;
    	}
		friend void swapval(swapdata s1,swapdata s2){
			int c=0;
			c=s1.a;
			s1.a=s2.a;
			s2.a=c;
			cout<<"After swapping,"<<endl;
			s1.display();
		    s2.display();
        }
};
int main(void){
	int a;
	cout<<"Enter value:";
	cin>>a;
	swapdata s1(a);
	cout<<"Enter value:";
	cin>>a;
	swapdata s2(a);
	swapval(s1,s2);
}