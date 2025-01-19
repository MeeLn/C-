#include<iostream>
using namespace std;
class fibonacci{
	int a,b,c;
	public:
		fibonacci(){
			a=0;
			b=1;
			cout<<a<<endl<<b<<endl;
			c=a+b;
		}
		void display(){
			cout<<c<<endl;
		}
		void operator ++(){
			a=b;
			b=c;
			c=a+b;
		}
};
int main(void){
	int n;
	cout<<"No. of Terms:";
	cin>>n;
	cout<<"Fibonacci series upto "<<n<<" term are;"<<endl;
	fibonacci f;
	for(int i=1;i<=n-2;i++){
		f.display();
		++f;
	}
}
