#include<iostream>
using namespace std;
class Soccer
{
	private :
		char name[20];
		int score,assists;
	public :
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
			cout<<name;
		}
		int total=score+assists;
		int operator >=(Soccer S)
		{
			if(total >= S.total)
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
	Soccer S1, S2;
	cout<<" Please enter 1st Player Details: ";
	S1.input();
	cout<<" Please enter 2nd Player Details: ";
	S2.input();
	if(S1>= S2)
	{
		cout<<"Result: 1st player has more points than 2nd. ";
	}
	else
	{
		cout<<"Result: 2nd player has more points than 1st. ";
	}
}
