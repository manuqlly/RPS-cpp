#include<iostream>
#include<ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
    char player;
    char computer;

    player = getUserChoice();
    std::cout<<"Your Choice is ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout<<"Computer's Choice is ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice(){

    char player;
    std::cout<<"Rock-Paper-Scissors\n";
    
    do{
        std::cout<<"Choose one of the option\n";
        std::cout<<"*******************\n";
        std::cout<<"Enter 'r' for Rock!\n";
        std::cout<<"Enter 'p' for Paper!\n";
        std::cout<<"Enter 's' for Scissors!\n";
        std::cin>>player;
    }while(player !='r' && player !='s' && player !='p');
    
    return player;
}
char getComputerChoice(){
    srand(time(NULL));
    int num = rand() % 3 + 1;

    switch(num)
    {
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';

    }    
    return 0;
}
void showChoice(char choice){
    switch(choice)
    {
        case 'r': std::cout<<"Rock\n";
            break;
        case 'p': std::cout<<"Paper\n";
            break;
        case 's': std::cout<<"Scissors\n";
            break;

    }
}
void chooseWinner(char player, char computer){
    switch(player){

        case 'r':   if(computer == 'r'){
                        std::cout<<"It's a TIE!!";
                    }
                    else if(computer == 'p'){
                        std::cout<<"You Lose!!";
                    }
                    else{
                        std::cout<<"You WIN!!";
                    }
                    break;

        case 'p':   if(computer == 'r'){
                    std::cout<<"You Win!!";
                    }
                    else if(computer == 'p'){
                        std::cout<<"It's a TIE!!";
                    }
                    else{
                        std::cout<<"You Lose!!";
                    }
                    break;

        case 's':   if(computer == 'r'){
                    std::cout<<"You Lose!!";
                    }
                    else if(computer == 'p'){
                        std::cout<<"You WIN!!";
                    }
                    else{
                        std::cout<<"It's a TIE!!";
                    }
                    break;
    }
}