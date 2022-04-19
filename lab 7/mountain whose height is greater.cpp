#include<iostream>
using namespace std;
class mountain{
	char name[50],location[20];
	float height;
	public:
		mountain(){
			strcpy(name,"");
            strcpy(location,"");
            height=0;
		}
		mountain(char *n,char *l,float h){
            strcpy(name,n);
            strcpy(location,l);
            height=h;
		}
		void display(){
			cout<<"Name :"<<name<<endl;
			cout<<"location :"<<location<<endl;
			cout<<"height :"<<height<<endl;
		}
		void compare(mountain b){
			if(height>b.height){
				display();
			}
			else{
				b.display();
			}
		}
};
int main(void){
	char a[50],b[20];
	float c;
	cout<<"Name :";
	cin>>a;
	cout<<"location :";
	cin>>b;
	cout<<"height :";
	cin>>c;
	mountain a1(a,b,c);
	cout<<"Name :";
	cin>>a;
	cout<<"location :";
	cin>>b;
	cout<<"height :";
	cin>>c;
	mountain b1(a,b,c);
	a1.compare(b1);
}