#include<iostream>
using namespace std;
class Soccer
{
	private :
		int score,assists;
	public :
		char name[20];
		void input()
		{
			cout<<"Enter Player Name:";
			cin>>name;
			cout<<"Score:";
			cin>>score;
			cout<<"Assist:";
			cin>>assists;
		}
		void display(){
			cout<<"Name:"<<name<<endl<<"Score:"<<score<<endl<<"Assist:"<<assists;
		}
		int total=score+assists;
		int operator >(Soccer S)
		{
			if(total > S.total)
			{
			return 1;
			}
			else
			{
			return 0;
			}
		}
};
int main(void)
{
	Soccer S[5];
	for(int i=1;i<5;i++){
		cout<<" Please enter "<<i<<"th Player Details: ";
		S[i].input();
	}
	S[0].total=0;
	for(int i=1;i<5;i++){
		if(S[i] > S[0])
		{
			S[0].total = S[i].total;
		}
	}
	for(int i=1;i<5;i++){
		if(S[0].total == S[i].total)
		{
			cout<<"Player who has highest point is,"<<endl;
			S[i].display();
		}
	}

}
