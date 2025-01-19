#include<iostream>
using namespace std;
class Distance{
	int km,m;
	public:
		Distance(int a,int b){
			km=a;
			m=b;
		}
		void display(){
			cout<<"Distance:"<<km<<" km "<<m<<" m"<<endl;
		}
		operator float(){
			return ((km+(float)m/1000)/1.609344);
		}
};
int main(void){
	Distance d(2,400);
	float miles=d;
	cout<<"Distance:"<<miles<<" miles"<<endl;
}
