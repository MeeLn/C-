#include<iostream>
#include<string.h>
using namespace std;
class strcm{
        char str[20];
        public:
                strcm(char *a){
                        strcpy(str,a);
                }
                void display(){
                        cout<<"String:"<<str<<endl;
                }
                friend void operator ==(strcm,strcm);
};
void operator ==(strcm s1,strcm s2){
        int sc=strcmp(s1.str,s2.str);
        if(sc==0){
		cout<<"String is equal."<<endl;
	}
	else{
		cout<<"String is not equal."<<endl;
	}
}
int main(void){
        strcm s1("Milan"),s2("Milan");
        s1.display();
        s2.display();
        s1==s2;
}
