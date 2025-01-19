#include<iostream>
#include<string.h>
using namespace std;
class striadd{
	char* str;
	int lenght;
	public:
		striadd(){
			lenght=0;
			str=new char[lenght+1];
			strcpy(str,"");
		}
		striadd(char* a){
			lenght=strlen(a);
			str=new char[lenght+1];
			strcpy(str,a);
		}
		void display(){
			cout<<"String:"<<str<<endl;
		}
		friend striadd operator +(striadd,striadd);
};
striadd operator +(striadd s1,striadd s2){
	striadd s;
	s.lenght=s1.lenght+s2.lenght;
	s.str=new char[s.lenght+1];
	strcpy(s.str,s1.str);
	strcat(s.str,s2.str);
	cout<<"After concatination,";
	return s;
}
int main(void){
	striadd s1("Milan"),s2("Raut"),s3;
	s1.display();
	s2.display();
	s3=s1+s2;
	s3.display();
}
