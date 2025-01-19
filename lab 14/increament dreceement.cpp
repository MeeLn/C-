#include<iostream>
using namespace std;
class change{
	int a;
	public:
		change(){
			a=0;
		}
		change(int x){
			a=x;
		}
		void display(){
			cout<<"Number:"<<a<<endl;
		}
		void operator ++(){
			a+=1;
			cout<<"After increement,";
			display();
		}
		void operator --(){
			a-=1;
			cout<<"After decreement,";
			display();
		}
};
int main(void){
	change c(2);
	c.display();
	++c;
	--c;
}
