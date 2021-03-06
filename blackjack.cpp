#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>
// Defines the integers that the whole code uses in the global scale.
int choice, card, type, points, epoints;
int turn = 1;

// Contains the entire deck of cards that the code uses by utilizing a multidimensional array.
std::string deck[4][13] = {{"Ace of Diamonds", "2 of Diamonds", "3 of Diamonds", "4 of Diamonds", "5 of Diamonds", "6 of Diamonds", "7 of Diamonds", "8 of Diamonds", "9 of Diamonds",
                                   "10 of Diamonds", "Jack of Diamonds", "Queen of Diamonds", "King of Diamonds"},
                           {"Ace of Spades", "2 of Spades", "3 of Spades", "4 of Spades", "5 of Spades", "6 of Spades", "7 of Spades", "8 of Spades", "9 of Spades",
                                   "10 of Spades", "Jack of Spades", "Queen of Spades", "King of Spades"},
                           {"Ace of Hearts", "2 of Hearts", "3 of Hearts", "4 of Hearts", "5 of Hearts", "6 of Hearts", "7 of Hearts", "8 of Hearts", "9 of Hearts",
                                   "10 of Hearts", "Jack of Hearts", "Queen of Hearts", "King of Hearts"},
                           {"Ace of Clubs", "2 of Clubs", "3 of Clubs", "4 of Clubs", "5 of Clubs", "6 of Clubs", "7 of Clubs", "8 of Clubs", "9 of Clubs",
                                   "10 of Clubs", "Jack of Clubs", "Queen of Clubs", "King of Clubs"}};


// Makes it more readable by making a special function for when you draw an ace instead of putting this cluster of code in the draw_card function.
int ace(){
    std::cout << "You got an ace, input if you want to receive 1 or 11 points: " << std::endl;
    std::cin >> choice;
    if(choice == 1){
        points += 1;
    }
    else if(choice == 11){
        points += 11;
    }
}
// Calculates the enemy points.
int point_system_enemy(int card){
    if (card == 0){
        if(epoints <= 10) {
            epoints += 11;
        }
        else{
            epoints += 1;
        }
    }
    else if(card == 1){
        epoints += 2;
    }
    else if(card == 2){
        epoints += 3;
    }
    else if(card == 3){
        epoints += 4;
    }
    else if(card == 4){
        epoints += 5;
    }
    else if(card == 5){
        epoints += 6;
    }
    else if(card == 6){
        epoints += 7;
    }
    else if(card == 7){
        epoints += 8;
    }
    else if(card == 8){
        epoints += 9;
    }
    else if(card == 9){
        epoints += 10;
    }
    else if(card == 10){
        epoints += 10;
    }
    else if(card == 11){
        epoints += 10;
    }
    else if(card == 12){
        epoints += 10;
    }
}
// Calculates the points for the player by assigning values in the array to points in the value system of Blackjack.
int point_system(int card){
    if (card == 0){
        ace();
    }
    else if(card == 1){
        points += 2;
    }
    else if(card == 2){
        points += 3;
    }
    else if(card == 3){
        points += 4;
    }
    else if(card == 4){
        points += 5;
    }
    else if(card == 5){
        points += 6;
    }
    else if(card == 6){
        points += 7;
    }
    else if(card == 7){
        points += 8;
    }
    else if(card == 8){
        points += 9;
    }
    else if(card == 9){
        points += 10;
    }
    else if(card == 10){
        points += 10;
    }
    else if(card == 11){
        points += 10;
    }
    else if(card == 12){
        points += 10;
    }
}
// Draws the card for the player, also giving you the name of the card and showing the total points you have acquired.
int card_draw() {
    card = rand() % 13;
    type = rand() % 4;
    std::cout << "You drew: " << deck[type][card] << std::endl;
    point_system(card);
    std::cout << "You have: " << points << " points." << std::endl << std::endl;
}
// Lets the user draw a card or not by asking for their input, and based on that drawing a card or giving the turn to the AI.
int hit_or_stay(){
    std::cout << "Hit or stay (1 = Hit, 0 = Stay): " << std::endl;
    std::cin >> choice;
    if (choice == 1){
        card_draw();
    }
    else if (choice == 0){
        turn = 0;
    }
}
// Draws a card for the AI.
int card_draw_enemy(){
    card = rand() % 14;
    type = rand() % 3;
    std::cout << "The enemy drew: " << deck[type][card] << std::endl;
    point_system_enemy(card);
    std::cout << "The enemy has: " << epoints << " points." << std::endl << std::endl;
}
// A function that defines the usual turn for the player.
int player(){
    srand(time(0));
    for(int i=0;i<2;i++){
        card_draw();
    }
    do{
        hit_or_stay();
    }
    while(points < 21 & turn == 1);
    turn = 0;


}
// Calculates the enemy turn.
int enemy(){
    srand(time(0));
    for(int i = 0;i<2;i++){
        card_draw_enemy();
    }
    do{
        if (epoints <= 17) {
            card_draw_enemy();
        }
        else{
            turn = 2;
        }
    }while(epoints < 21 & turn == 0);
    turn = 2;
}
// Calculate the winning condition, either returning win, lose or draw.
int winning_condition(){
    for(int i = 0;i<5;i++){
        std::cout << std::endl;
    }
    std::cout << "The AI has " << epoints << " points." << std::endl;
    std::cout << "You have " << points << " points." << std::endl;
    if(points > epoints & points <= 21 | epoints > 21){
        std::cout << "You win!" << std::endl;
    }
    else if(epoints > points & epoints <= 21 | points > 21){
        std::cout << "You lose!" << std::endl;
    }
    else if(points == epoints | points > 21 & epoints > 21){
        std::cout << "Draw!" << std::endl;
    }
}
// Puts the whole code in a action by calling the player, enemy and winning condition functions.
int main(){
    player();
    if (turn == 0){
        enemy();
    }
    for(int i=0;i<5;i++){
        std::cout << std::endl;
    }
    if (turn == 2){
        winning_condition();
    }
}
