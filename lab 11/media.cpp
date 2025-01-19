#include<iostream>
#include<string.h>
using namespace std;
class media{
	protected:
		char title[50];
		int price;
	public:
		media(char *x,int y){
			strcpy(title,x);
			price=y;
		}
		void display(){
			cout<<"Title:"<<title<<endl<<"Price:"<<price<<endl;
		}
};
class book:public media{
	protected:
		char author[50];
		int no;
	public:
		book(char *x,int y,char *z,int a):media(x,y){
			strcpy(author,z);
			no=a;
		}
		void display(){
			media::display();
			cout<<"Author:"<<author<<endl<<"No of pages:"<<no<<endl;
		}
};
class videotape:public media{
		int playtime;
	public:
		videotape(char *a,int b,int c):media(a,b){
			playtime=c;
		}
		void display(){
			media::display();
			cout<<"Playtime:"<<playtime<<"hrs"<<endl;
		}
};
int main(void){
	videotape v("superman",500,3);
	book b("Programming",2000,"Milan",546);
        b.display();
	v.display();
}
