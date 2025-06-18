
#  Rock Paper Scissors Game (C++)

## 📑 Description:
A simple command-line Rock Paper Scissors game built in C++ where a player competes against the computer.  
The player selects either Rock, Paper, or Scissors, and the computer makes a random choice.  
The program then compares both moves and declares the result as a win, loss, or tie.

---

##  Tech Stack:
- Language: C++
- Compiler: g++
- Libraries: iostream, ctime

---

##  How to Run:
1. Clone the repository.
2. Compile using any C++ compiler:
   g++ rock_paper_scissors.cpp -o rock_paper_scissors
3. Run the executable:
   ./rock_paper_scissors

---

##  Features:

###  Gameplay:
- Enter your name.
- Choose from:
  - `r` = Rock  
  - `p` = Paper  
  - `s` = Scissors  
- Computer makes a random selection.
- Displays both choices.
- Declares the winner based on classic Rock Paper Scissors rules:
  - Rock beats Scissors
  - Scissors beats Paper
  - Paper beats Rock
  - Same choices result in a tie

---

##  Notes:
- Uses `rand()` with `srand(time(0))` for random computer moves.
- Input validation ensures only valid moves are accepted.
- Clear modular structure with separate functions:
  - `get_user_choice()`
  - `get_computer_choice()`
  - `show_choices()`
  - `determine_winner()`


