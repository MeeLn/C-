#include<iostream>
using namespace std;
class box{
	float *p;
	public:
	   box(){
	    p=0;	
	   }
	   box(float a,float b,float c){
    	p=new float[5];
	    *p=a;
	    *(p+1)=b;
	    *(p+2)=c;
	   }
	   void volume(){
	   	cout<<"The volume is:"<<((*p)*((*p+1))*(*(p+2)))<<endl;
	   }
       void del(){
        delete p;
        cout<<"Memory Deleted!!"<<endl;
	   }
};
int main(void){
	int a,b,c;
	cout<<"Enter lenght,height and breadth:";
    cin>>a>>b>>c;
	box v1(a,b,c);
	v1.volume();
    v1.del();
}