#include<iostream>
using namespace std;
class Time{
	int hour,min;
	public:
		Time(int a){
			hour=a/60;
			min=a%60;
		}
		void display(){
			cout<<"Time:"<<hour<<":"<<min<<endl;
		}
};
int main(void){
	Time t=125;
	t.display();
}
