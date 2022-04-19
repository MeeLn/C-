#include<iostream>
using namespace std;
class distan{
	int k,m;
	public:
		distan(){
			k=0;
			m=0;
		}
		distan(int x,int y){
			k=x;
			m=y;
		}
		void display(){
			cout<<"The distance is:"<<k<<"km "<<m<<"m"<<endl;
		}
		friend distan add(distan d1,distan d2){
			distan d;
	        d.k=d1.k+d2.k;
	        d.m=d1.m+d2.m;
	        d.k=d.k+d.m/1000;
	        d.m=d.m%1000;
	        return d;
        }
};
int main(void){
	int a,b;
	cout<<"Enter distance(..km..m):";
	cin>>a>>b;
	distan d1(a,b);
	cout<<"Enter distance(..km..m):";
	cin>>a>>b;
	distan d2(a,b),d;
	d=add(d1,d2);
	cout<<"After addition,";
	d.display();
}