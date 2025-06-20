//10 june 2025

#include <iostream>
#include <ctime>
#include <cctype>

using std::cout;
using std::cin;
using std::string;


char get_user_choice();
char get_computer_choice();
void show_choice(char player_choice ,char computer_choice);
void show_winner(char player_choice ,char computer_choice);


int main (){

	srand(time(0));
	string player_name;

    cout<<"Rock paper scissior game:\n";
	cout<<"enter players name\n";
	cin>>player_name;

    char player_choice = get_user_choice();
	char computer_choice = get_computer_choice();
	
	show_choice(player_choice ,computer_choice);
	show_winner(player_choice ,computer_choice);

	return 0;
}

char get_user_choice(){ 
	char player_choice;
	do{		
 cout<<R"(Enter choice
r = rock 
p = paper
s = scissor
)";
	
	cin>>player_choice;
	player_choice = tolower(player_choice);

    }while(player_choice != 'r' && player_choice != 'p' && player_choice != 's');

	return player_choice;
}

char get_computer_choice(){
	char computer_choice;
	int Random_number = (rand() % 3)+1;
	if(Random_number==1){
		computer_choice = 'r';
		cout<<computer_choice<<'\n';
	}
	else if(Random_number==2){
		computer_choice = 'p';
		cout<<computer_choice<<'\n';
	}
	else{
		computer_choice = 's';
		cout<<computer_choice<<'\n';		
	} 
	return computer_choice;
}

void show_choice(char player_choice ,char computer_choice){
	cout<<"computer choose: "<<computer_choice<<'\n';
	cout<<"You choose: "<<player_choice<<'\n';
}

void show_winner(char player_choice ,char computer_choice){
    if(player_choice==computer_choice){
		cout<<"Draw\n";
	}
	else if((player_choice=='r'&& computer_choice=='s')||
	       (player_choice=='p'&& computer_choice=='r')||
		   (player_choice=='s'&& computer_choice=='p')){
	cout<<"You Won\n";
    }
	else{
		cout<<"You Lost\n";
	}

}

