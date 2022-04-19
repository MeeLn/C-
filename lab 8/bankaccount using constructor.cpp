#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class account{
	char name[50];
	float balance;
	public:
		int acno;

		account(char *a,int b){
			strcpy(name,a);
			acno=b;
		}
		void add(){
        	int x;
		    cout<<"Enter Amount:";
			cin>>x;
			balance+=x;
			cout<<"Rs."<<x<<"is added to your balance.!"<<endl;
		}
        void width(){
        	int y;
		    cout<<"Withdraw Amount:";
			cin>>y;
			balance-=y;
			cout<<"Rs."<<y<<"is withdrawed."<<endl;
		}
		void display(){
			cout<<"Your Name:"<<name<<endl<<"Account Number:"<<acno<<endl<<"Your balance:"<<balance<<endl;
		}
};
int main(void){
	char a[50];
	int b;
	account *arr[100];
    int p;
    cout<<"Enter no. account to be created:";
    cin>>p;
	for(int i=0;i<p;i++){
		cout<<"To create your bank account,"<<endl<<"Please,Enter your name and account no:"<<endl;
        cin>>a>>b;
		arr[i]=new account(a,b);
	}
	cout<<"Enter Your Account Number:";
	int q;
	cin>>q;
	while(1){
		cout<<"Enter your choice"<<endl;
		cout<<"\n.......!!**Menu**!!.......\n1.Deposit Money\n2.Withdraw Money\n3.Display Information\n4.Exit"<<endl;
		int c;
		cin>>c;
		switch(c){
			case 1:
				for(int i=0;i<p;i++){
					if(arr[i]->acno==q){
						arr[i]->add();
					}
				}
				break;
			case 2:
				for(int i=0;i<p;i++){
					if(arr[i]->acno==q){
						arr[i]->width();
					}
				}
				break;
			case 3:
				for(int i=0;i<p;i++){
					if(arr[i]->acno==q){
						arr[i]->display();
					}
				}
				break;
			case 4:
				exit(0);
			default:cout<<"Error!!! Please enter your choice(1-4)!"<<endl;
		}
	}
} 
