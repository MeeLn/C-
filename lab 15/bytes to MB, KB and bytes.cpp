#include<iostream>
using namespace std;
class Memory{
	int MB,KB,B;
	public:
		Memory(int a){
			KB=a/1024;
			B=a%1024;
			MB=KB/1024;
			KB=KB%1024;
		}
		void display(){
			cout<<"Memory:"<<MB<<" MB "<<KB<<" KB "<<B<<" B"<<endl;
		}
};
int main(void){
	Memory m=1087665;
	m.display();
}
