#include<iostream>
using namespace std;
class rational{
	int a,b;
	public:
		rational(){
			a=0;
			b=0;
		}
		rational(int x,int y){
			a=x;
			b=y;
		}
		void display(){
			cout<<"The rational no is:"<<a<<"/"<<b<<endl;
		}
		friend rational add(rational c1,rational c2){
        	rational c;
	        c.a=c1.a*c2.b+c2.a*c1.b;
        	c.b=c1.b*c2.b;
            return c;
        }
};
int main(){
	int a,b;
	cout<<"Enter rational no:";
	cin>>a>>b;
	rational c1(a,b);
	cout<<"Enter rational no:";
	cin>>a>>b;
	rational c2(a,b),c;
	c=add(c1,c2);
	c.display();
	return 1;
}