#include<iostream>
#include<conio.h>
using namespace std;
class object{
	static int count;
	public:
		object(){
		}
		~object(){
			cout<<"object"<<count<<" is distroyed."<<endl;
			count--;
		}
		void display(){
			++count;
			cout<<"object "<<count<<" is created."<<endl;
		}
};
int::object::count;
int main(){
	object a1;
	a1.display();
	{
		object a2;
		a2.display();
		object a3;
		a3.display();
	}
}