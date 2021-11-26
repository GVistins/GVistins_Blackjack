#include <iostream>
#include <cstdlib>
#include <string>
int card_type_r, points, choice, card;
std::string card_name, choice_s;

void draw_card(){
    card = rand() % 14;
    card_type_r = rand() % 4 + 1;
    if (card_type_r == 1){
    	if (card == 0) {
    	    card_name = "Ace of Diamonds";
    	    std::cout << "You got an " << card_name << " input if you want 1 or 11 points: ";
    	    std::cin >> choice;
    	}
    	else if (card == 1) {
    		points += 2;
    		card_name = "2 of Diamonds";
    	}
    	else if (card == 2) {
    		points += 3;
    		card_name = "3 of Diamonds";
    	}
    	else if (card == 3) {
    		points += 4;
    		card_name = "4 of Diamonds";
    	}
    	else if (card == 4) {
    		points += 5;
    		card_name = "5 of Diamonds";
    	}
    	else if (card == 5) {
    		points += 6;
    		card_name = "6 of Diamonds";
    	}
    	else if (card == 6) {
    		points += 7;
    		card_name = "7 of Diamonds";
    	}
    	else if (card == 7) {
    		points += 8;
    		card_name = "8 of Diamonds";
    	}
    	else if (card == 8) {
    		points += 9;
    		card_name = "9 of Diamonds";
    	}
    	else if (card == 9) {
    		points += 10;
    		card_name = "10 of Diamonds";
    	}
    	else if (card == 10) {
    		points += 10;
    		card_name = "Jack of Diamonds";
    	}
    	else if (card == 11) {
    		points += 10;
    		card_name = "Queen of Diamonds";
    	}
    	else if (card == 12) {
    		points += 10;
    		card_name = "King of Diamonds";
    	}
    }
    if (card_type_r == 1){
    	if (card == 0) {
    	    card_name = "Ace of Spades";
    	    std::cout << "You got an " << card_name << " input if you want 1 or 11 points: ";
    	    std::cin >> choice;
    	}
    	else if (card == 1) {
    		points += 2;
    		card_name = "2 of Spades";
    	}
    	else if (card == 2) {
    		points += 3;
    		card_name = "3 of Spades";
    	}
    	else if (card == 3) {
    		points += 4;
    		card_name = "4 of Spades";
    	}
    	else if (card == 4) {
    		points += 5;
    		card_name = "5 of Spades";
    	}
    	else if (card == 5) {
    		points += 6;
    		card_name = "6 of Spades";
    	}
    	else if (card == 6) {
    		points += 7;
    		card_name = "7 of Spades";
    	}
    	else if (card == 7) {
    		points += 8;
    		card_name = "8 of Spades";
    	}
    	else if (card == 8) {
    		points += 9;
    		card_name = "9 of Spades";
    	}
    	else if (card == 9) {
    		points += 10;
    		card_name = "10 of Spades";
    	}
    	else if (card == 10) {
    	points += 10;
    	card_name = "Jack of Spades";
    	}
    	else if (card == 11) {
    	points += 10;
    	card_name = "Queen of Spades";
    	}
    	else if (card == 12) {
    	points += 10;
    	card_name = "King of Spades";
    	}
    }
    if (card_type_r == 1){
    	if (card == 0) {
    	    card_name = "Ace of Hearts";
    	    std::cout << "You got an " << card_name << " input if you want 1 or 11 points: ";
    	    std::cin >> choice;
    	}
    	else if (card == 1) {
    		points += 2;
    		card_name = "2 of Hearts";
    	}
    	else if (card == 2) {
    		points += 3;
    		card_name = "3 of Hearts";
    	}
    	else if (card == 3) {
    		points += 4;
    		card_name = "4 of Hearts";
    	}
    	else if (card == 4) {
    		points += 5;
    		card_name = "5 of Hearts";
    	}
    	else if (card == 5) {
    		points += 6;
    		card_name = "6 of Hearts";
    	}
    	else if (card == 6) {
    		points += 7;
    		card_name = "7 of Hearts";
    	}
    	else if (card == 7) {
    		points += 8;
    		card_name = "8 of Hearts";
    	}
    	else if (card == 8) {
    		points += 9;
    		card_name = "9 of Hearts";
    	}
    	else if (card == 9) {
    		points += 10;
    		card_name = "10 of Hearts";
    	}
    	else if (card == 10) {
    	points += 10;
    	card_name = "Jack of Hearts";
    	}
    	else if (card == 11) {
    	points += 10;
    	card_name = "Queen of Hearts";
    	}
    	else if (card == 12) {
    	points += 10;
    	card_name = "King of Hearts";
    	}
    }
    if (card_type_r == 1){
    	if (card == 0) {
    	    card_name = "Ace of Clubs";
    	    std::cout << "You got an " << card_name << " input if you want 1 or 11 points: ";
    	    std::cin >> choice;
    	}
    	else if (card == 1) {
    		points += 2;
    		card_name = "2 of Clubs";
    	}
    	else if (card == 2) {
    		points += 3;
    		card_name = "3 of Clubs";
    	}
    	else if (card == 3) {
    		points += 4;
    		card_name = "4 of Clubs";
    	}
    	else if (card == 4) {
    		points += 5;
    		card_name = "5 of Clubs";
    	}
    	else if (card == 5) {
    		points += 6;
    		card_name = "6 of Clubs";
    	}
    	else if (card == 6) {
    		points += 7;
    		card_name = "7 of Clubs";
    	}
    	else if (card == 7) {
    		points += 8;
    		card_name = "8 of Clubs";
    	}
    	else if (card == 8) {
    		points += 9;
    		card_name = "9 of Clubs";
    	}
    	else if (card == 9) {
    		points += 10;
    		card_name = "10 of Clubs";
    	}
    	else if (card == 10) {
    		points += 10;
    		card_name = "Jack of Clubs";
    	}
    	else if (card == 11) {
    		points += 10;
		card_name = "Queen of Clubs";
    	}
    	else if (card == 12) {
    		points += 10;
    		card_name = "King of Clubs";
    	}
    }
   	std::cout << "You got a: " << card_name << std::endl;
	std::cout << "You have: " << points << " points." << std::endl;
    
}
int main()
{   
    std::cout << "Your hand: " << std::endl;
    for(int i;i<2;i++){
        draw_card();
    }
    do{
        std::cout << "Draw or stand: " << std::endl;
        std::cin >> choice_s;
        if (choice_s == "draw" || choice_s == "Draw"){
            draw_card();
        }
        else if (choice_s == "stand" || choice_s == "Stand"){
            break;
        }
    }
    while(points < 21);
    if (points == 21){
        std::cout << "You win!";
    }
    else{
        std::cout << "You lose!";
    }
}
