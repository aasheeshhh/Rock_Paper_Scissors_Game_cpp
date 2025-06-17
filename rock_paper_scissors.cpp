//10 june 2025

#include <iostream>
#include <ctime>

using std::cout;
using std::cin;
using std::string;


char get_user_choice();
char get_computer_choice();
void show_choice();


int main (){
	

   cout<<"Rock paper scissior game:\n";
	get_user_choice();
	get_computer_choice();
	show_choice();


	return 0;

}

char get_user_choice(){
	string player ;
	char player_choice ;
	cout<<"enter players name\n";
	cin>>player;
	do{		
		cout<<R"(Enter choice
r = rock 
p = paper
s = scissior
)";
	cin>>player_choice;
    }
	while(player_choice != 'r' && player_choice != 'p' && player_choice != 's');
		return player_choice;}

char get_computer_choice(){
	srand(time(0));

	char computer_choice = (rand() % 3)+1;

   switch(computer_choice)
   {
   case 1:cout<<"R\n"; break;
   case 2:cout<<"P\n"; break;
   case 3:cout<<"S\n"; break;
   }

    return computer_choice;}

void show_choice(){
do{
	if(get_user_choice() == 'r' && get_computer_choice() =='S'){
		cout<<"You won\n";
	}
	else if(get_user_choice() == 's' && get_computer_choice() =='R'){
		cout<<"You loose\n";
	}
	else if(get_user_choice() == 'p' && get_computer_choice() =='S'){
		cout<<"You loose\n";
	}
	else if(get_user_choice() == 's' && get_computer_choice() =='P'){
		cout<<"You won\n";
	}
	else if(get_user_choice() == 'r' && get_computer_choice() =='P'){
		cout<<"You loose\n";
	}
	else if(get_user_choice() == 'P' && get_computer_choice() =='r'){
		cout<<"You won\n";
	}

 }while(get_user_choice == get_computer_choice);
    cout<<"tie\n";

 return show_choice();}



