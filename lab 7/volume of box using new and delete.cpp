#include<iostream>
using namespace std;
class volume{
	int *p;
	public:
	   void get(){
		p=new int[5];
	    cout<<"Enter lenght,height and breadth:";
	    cin>>*p>>*(p+1)>>*(p+2);	
	   }
       int vol(){
        return ((*p)*(*(p+1))*(*(p+2)));
       }
       void del(){
        delete p;
        cout<<"Memory Deleted!!"<<endl;
	   }
};
int main(void){
	volume v1;
	v1.get();
	cout<<"The volume is:"<<v1.vol()<<endl;
    v1.del();
}