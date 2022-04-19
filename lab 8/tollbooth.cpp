#include<iostream>
using namespace std;
class tollbooth{
	int car,amount;
	public:
		tollbooth(){
			car=0;
			amount=0;
		}
		void payingcar(){
			car++;
			amount+=5;
		}
		void nopaycar(){
			car++;
		}
		void display(){
			cout<<"No. of Cars:"<<car<<endl;
			cout<<"Total Amount: Rs "<<amount<<endl;
		}
};
int main(void){
	tollbooth T;
	while(1){
		cout<<"\n.......!!**Menu**!!.......\n1.Paying Car\n2.Not paying car\n3.Display Information\n4.Exit"<<endl;
		int c;
		cin>>c;
		switch(c){
			case 1:
				T.payingcar();
				break;
			case 2:
				T.nopaycar();
				break;
			case 3:
				T.display();
				break;
			case 4:
				exit(0);
			default:
				cout<<"Please enter only between 1 - 4!!"<<endl;
	    }
    }
}
