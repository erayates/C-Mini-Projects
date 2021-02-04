#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

int main(){
	srand(time(NULL));
	char upperLetters[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char lowerLetters[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int digits[] = {0,1,2,3,4,5,6,7,8,9};
	char symbols[] = {'!','$','#','%','&','(',')','*','+',',','-','.',':','<','=','>','?','|','_','~'};
	
	int randChoice;
	int randChoiceIn;
	
	int sUpperLetters = sizeof(upperLetters) / sizeof(upperLetters[0]);
	int sLowerLetters = sUpperLetters;
	int sArraySymbols =  sizeof(symbols) / sizeof(upperLetters[0]); 
	
	
	
	printf("Press any key to create a password.");
	getch();
	main:
	system("cls");
	printf("Your password is: ");
	int passwordLength = 16;
	while(passwordLength != 0){
		randChoice = rand() % 4;
		if(randChoice == 0){
			randChoiceIn = rand() % sUpperLetters;
			printf("%c",upperLetters[randChoiceIn]);
		}	
		else if(randChoice == 1){
			randChoiceIn = rand() % sLowerLetters;
			printf("%c",lowerLetters[randChoiceIn]);
		}	
		else if(randChoice == 2){
			randChoiceIn = rand() % 9;
			printf("%d",digits[randChoiceIn]);
		}
		else {
			randChoiceIn = rand() % sArraySymbols;
			printf("%c",symbols[randChoiceIn]);
		}
		passwordLength--;
	}
	printf("\n\nDo you want to create generate again? Press Y or N.");
	if(toupper(getch())	=='Y'){
		goto main;
	} else {
		return EXIT_SUCCESS;
	}
}
