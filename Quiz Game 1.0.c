#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void editScore(float,char[]);
void help();
void resetScore();
void showRecord();
int extraQuestions(int,float,char[]);


int main(int argc,int *argv[]){
	int i,questionNumber,passRight;
	float prize;
	passRight = 2;
	char choice;
	char playername[20];
	mainhome:
	prize = 2000;
	system("cls");
	printf("\t\t\t\t\t     |");
	printf("\n\t\t   WELCOME\t\t     |");
	printf("\n\t\t     TO\t\t\t     |");
	printf("\n\t\tTHE QUIZ GAME\t\t     |");
	printf("\n_____________________________________________|\n");
	printf("\t\t\t\t\t     |");
	printf("\n      --> Press S to start the game.\t     |");
	printf("\n      --> Press V to view the highest score. |");
	printf("\n      --> Press H for help.\t\t     |");
	printf("\n      --> Press Q to quit.\t\t     |");
	printf("\n_____________________________________________|");
	choice = toupper(getch());
	if(choice == 'V'){
		showRecord();
		getch();
		goto mainhome;
	}
	else if(choice == 'H'){
		help();
		getch();
		goto mainhome;
	}
	else if(choice == 'Q'){
		return EXIT_SUCCESS;
	}
	else if(choice == 'S'){
		system("cls");
		printf("\n\n\n\n\n\n\t\t\t\tEnter your name: ");
		gets(playername);
		
		system("cls");
		printf("\n\n\t\tWelcome to the Rewarded Quiz Game Show\n");
		printf("____________________________________________________________________________________\n");
		printf("\n\tThere are some tips are gonna help you before start the play:");
		printf("\n____________________________________________________________________________________\n");
		printf("\n --> The first question you will be asked will be the warm-up question. It means \nthat first question will not be rewarded.\n");
		printf("\n --> Reward of the first question after you answered the warm-up question is 2000$.\nFor each question you answered correctly, you will receive twice the prize awarded \nfor the previous question.\n");
		printf("\n --> You have two pass right to change the questions.\n");
		printf("\n --> You will not have the pass right in the warm-up question.\n");
		printf("\n --> You will be given 4 options and you have to press A, B ,C or D for the \nright option.\n");
		printf("\n --> Dam question is the third question. If you are eliminated before question 3, you \n will not win any prizes.\n");
		printf("\n --> After the 5th question, you can withdraw from the competition at any time and \nreceive the prize you have won.\n");
		printf("\n --> If you press a button other than the specified buttons while using your right to \npass, your competition will be terminated and you will be sent to the main menu.");
		printf("\n____________________________________________________________________________________\n");
		printf("\n\t\t\tPress F to start the game!\n");
    	printf("\t\tPress any other key to return to the main menu!");
    	if (toupper(getch())=='F'){
		    goto game;
        }
	else {
		goto mainhome;
	}
	
	game:
	for(i=1; i<=11; i++){
		questionNumber = i;
		system("cls");
		switch(questionNumber){
			case 1:
				printf("\n\n\t WARM-UP Q. What sort of animal is Walt Disney's Dumbo?");
				printf("\n\n\t A) Deer");
				printf("\n\t B) Rabbit");
				printf("\n\t C) Elephant");
				printf("\n\t D) Donkey");
				if(toupper(getch()) =='C'){
					printf("\n\n\t CORRECT! This question was warm-up question. First question is coming for you.");
					getch();
					break;
				}
				else {
					printf("\n\n\t WRONG ANSWER! The correct answer is C. But don't worry. It was warm-up question. \n\t First question is coming for you.");
					getch();
					break;
				}
				
			case 2:
				printf("\n\n\t %d. What was the name of the Spanish waiter in the TV sitcom 'Fawlty Towers'?",questionNumber - 1);
				printf("\n\n\t A) Manuel");
				printf("\n\t B) Pedro");
				printf("\n\t C) Alfonso");
				printf("\n\t D) Javier");
				if(toupper(getch()) == 'A'){
					printf("\n\n\t CORRECT! The %d. question is coming for you.",questionNumber);
					printf("\n\t REWARD: %.2f$", prize);
					getch();
					break;
				}
				else {
					printf("\n\n\t WRONG ANSWER! The correct answer is A. GAME OVER!");
					printf("\n\t REWARD: 0$");
					printf("\n\n\t PRESS 'M' to return to the main menu\n\t PRESS any key to exit the game.");
					if(toupper(getch()) == 'M'){
						goto mainhome;
					} else {
						return EXIT_SUCCESS;
					}
					getch();
					break;
				}
			
			case 3:
				printf("\n\n\t %d. Which Disney character famously leaves a glass slipper behind at a royal ball?",questionNumber - 1);
				printf("\n\n\t A) Pocahontas");
				printf("\n\t B) Sleeping Beauty");
				printf("\n\t C) Cinderella");
				printf("\n\t D) Elsa");
				if(toupper(getch()) == 'C'){
					printf("\n\n\t CORRECT! The %d. question is coming for you.",questionNumber);
					prize *= 2;
					printf("\n\t REWARD: %.2f$", prize);
					getch();
					break;
				}
				else {
					printf("\n\n\t WRONG ANSWER! The correct answer is C. GAME OVER!");
					printf("\n\t REWARD: 0$");
					printf("\n\t PRESS 'M' to return to the main menu\n\t PRESS any key to exit the game.");
					if(toupper(getch()) == 'M'){
					
						goto mainhome;
					} else {
						
						return EXIT_SUCCESS;
					}
					getch();
					break;
				}
				
			case 4:
				printf("\n\n\t %d. What name is given to the revolving belt machinery in an airport that \n\t delivers checked luggage from the plane to baggage reclaim??",questionNumber - 1);
				printf("\n\n\t A) Hangar");
				printf("\n\t B) Terminal");
				printf("\n\t C) Concourse");
				printf("\n\t D) Carousel");
				if(toupper(getch()) == 'D'){
					printf("\n\n\t CORRECT! The %d. question is coming for you.",questionNumber);
					prize *= 2;
					printf("\n\t REWARD: %.2f$", prize);
					getch();
					break;
				}
				else {
					printf("\n\n\t WRONG ANSWER! The correct answer is D. GAME OVER!");
					printf("\n\t REWARD: 0$");
					printf("\n\t PRESS 'M' to return to the main menu\n\t PRESS any key to exit the game.");
					if(toupper(getch()) == 'M'){
						goto mainhome;
					} else {
						return EXIT_SUCCESS;
					}
					getch();
					break;
				}
				
			case 5:
				printf("\n\n\t %d. Which of these brands was chiefly associated with the manufacture of household locks?",questionNumber - 1);
				printf("\n\n\t A) Philips");
				printf("\n\t B) Flymo");
				printf("\n\t C) Chubb");
				printf("\n\t D) Ronseal");
				if(toupper(getch()) == 'C'){
					printf("\n\n\t CORRECT! The %d. question is coming for you.",questionNumber);
					prize *= 2;
					printf("\n\t REWARD: %.2f$", prize);
					getch();
					break;
					getch();
				}
				else {
					printf("\n\n\t WRONG ANSWER! The correct answer is C. GAME OVER!");
					printf("\n\t REWARD: %.2f$",prize);
					printf("\n\t PRESS 'M' to return to the main menu\n\t PRESS any key to exit the game.");
					if(toupper(getch()) == 'M'){
						editScore(prize,playername);
						goto mainhome;
					} else {
						editScore(prize,playername);
						return EXIT_SUCCESS;
					}
					getch();
					break;
				}
				
			case 6:
				printf("\n\n\t %d. The hammer and sickle is one of the most recognisable symbols of which political ideology?",questionNumber - 1);
				printf("\n\n\t A) Republicanism");
				printf("\n\t B) Communism");
				printf("\n\t C) Conservatism");
				printf("\n\t D) Liberalism");
				printf("\n\n\t YOUR PASS RIGHT: %d", passRight);
				printf("\n\t DO YOU WANT TO YOUR PASS RIGHT? PRESS 'Y' FOR YES, 'N' FOR NO.");
				if(toupper(getch())=='Y'){
					prize = extraQuestions(passRight,prize,playername);
					passRight--;
					break;
				} 
				else if(toupper(getch()) =='N'){
					printf("\n\t YOUR ANSWER(PRESS BUTTON): ");
					if(toupper(getch()) == 'B'){
					printf("\n\n\t CORRECT!");
					prize *= 2;
					printf("\n\t REWARD: %.2f$", prize);
					printf("\n\n\t Do you want to win the prize above and retire from the game?");
					printf("\n\t Press 'Y' if you want to retreat, or 'N' if you want to continue.");
					if(toupper(getch()) == 'Y'){
						printf("\n\n\t CONGRATULATIONS! YOU WON %f$.",prize);
						printf("\n\t PRESS 'M' to return to the main menu\n\t PRESS any key to exit the game.");
						if(toupper(getch()) == 'M'){
							editScore(prize,playername);
							goto mainhome; 
						} 
						else {
							editScore(prize,playername);
							return EXIT_SUCCESS;
						}
					} 
					else if(toupper(getch()) == 'N'){
						printf("\n\n\t The %d. question is coming for you.",questionNumber);
						getch();
						break;
					} 
					else {
						printf("\n\n\t ERROR! WRONG TYPING! YOU ARE SENDING TO MAIN MENU...");
						getch();
						goto mainhome;
					}
				
				}
				else {
					printf("\n\n\t WRONG ANSWER! The correct answer is B. GAME OVER!");
					printf("\n\t REWARD: %.2f$",prize);
					printf("\n\t PRESS 'M' to return to the main menu\n\t PRESS any key to exit the game.");
					if(toupper(getch()) == 'M'){
						editScore(prize,playername);
						goto mainhome;
					} else {
						editScore(prize,playername);
						return EXIT_SUCCESS;
					}
					getch();
					break;
				}
			}
			else {
				printf("\n\n\t ERROR! WRONG TYPING! YOU ARE SENDING TO MAIN MENU...");
				getch();
				goto mainhome;
			}
				
			
			case 7:
				printf("\n\n\t %d. What does the word loquacious mean?",questionNumber - 1);
				printf("\n\n\t A) Angry");
				printf("\n\t B) Chatty");
				printf("\n\t C) Beautiful");
				printf("\n\t D) Shy");
				printf("\n\n\t YOUR PASS RIGHT: %d", passRight);
				printf("\n\t DO YOU WANT TO YOUR PASS RIGHT? PRESS 'Y' FOR YES, 'N' FOR NO.");
				if(toupper(getch())=='Y'){
					prize = extraQuestions(passRight,prize,playername);
					passRight--;
					break;
				} 
				else if(toupper(getch()) =='N'){
					printf("\n\t YOUR ANSWER(PRESS BUTTON): ");
					if(toupper(getch()) == 'B'){
					printf("\n\n\t CORRECT!");
					prize *= 2;
					printf("\n\t REWARD: %.2f$", prize);
					printf("\n\n\t Do you want to win the prize above and retire from the game?");
					printf("\n\t Press 'Y' if you want to retreat, or 'N' if you want to continue.");
					if(toupper(getch()) == 'Y'){
						printf("\n\n\t CONGRATULATIONS! YOU WON %f$.",prize);
						printf("\n\t PRESS 'M' to return to the main menu\n\t PRESS any key to exit the game.");
						if(toupper(getch()) == 'M'){
							editScore(prize,playername);
							goto mainhome; 
						} 
						else {
							editScore(prize,playername);
							return EXIT_SUCCESS;
						}
					} 
					else if(toupper(getch()) == 'N'){
						printf("\n\n\t The %d. question is coming for you.",questionNumber);
						getch();
						break;
					} 
					else {
						printf("\n\n\t ERROR! WRONG TYPING! YOU ARE SENDING TO MAIN MENU...");
						getch();
						goto mainhome;
					}

				}
				else {
					printf("\n\n\t WRONG ANSWER! The correct answer is B. GAME OVER!");
					printf("\n\t REWARD: %.2f$",prize);
					printf("\n\t PRESS 'M' to return to the main menu\n\t PRESS any key to exit the game.");
					if(toupper(getch()) == 'M'){
						editScore(prize,playername);
						goto mainhome;
					} else {
						editScore(prize,playername);
						return EXIT_SUCCESS;
					}
					getch();
					break;
				}
			} 
			else {
				printf("\n\n\t ERROR! WRONG TYPING! YOU ARE SENDING TO MAIN MENU...");
				getch();
				goto mainhome;
			}
			
			case 8: 
				printf("\n\n\t %d. Obstetrics is a branch of medicine particularly concerned with what?",questionNumber - 1);
				printf("\n\n\t A) Childbirth");
				printf("\n\t B) Broken bones");
				printf("\n\t C) Hearth conditions");
				printf("\n\t D) Old age");
				if(passRight == 0){
					printf("YOU DO NOT HAVE PASS RIGHT.");
					printf("\n\t YOUR ANSWER(PRESS BUTTON): ");
						if(toupper(getch()) == 'A'){
						printf("\n\n\t CORRECT!");
						prize *= 2;
						printf("\n\t REWARD: %.2f$", prize);
						printf("\n\n\t Do you want to win the prize above and retire from the game?");
						printf("\n\t Press 'Y' if you want to retreat, or 'N' if you want to continue.");
							if(toupper(getch()) == 'Y'){
								printf("\n\n\t CONGRATULATIONS! YOU WON %d$.",prize);
								printf("\n\t PRESS 'M' to return to the main menu\n\t PRESS any key to exit the game.");
									if(toupper(getch()) == 'M'){
										editScore(prize,playername);
										goto mainhome; 
									} 
									else {
										editScore(prize,playername);
										return EXIT_SUCCESS;
									}
							}	 
							else if(toupper(getch()) == 'N'){
								printf("\n\n\t The %d. question is coming for you.",questionNumber);
								getch();
								break;
							} 
							else {
								printf("\n\n\t ERROR! WRONG TYPING! YOU ARE SENDING TO MAIN MENU...");
								getch();
								goto mainhome;
							}
						}
						else {
							printf("\n\n\t WRONG ANSWER! The correct answer is A. GAME OVER!");
							printf("\n\t REWARD: %.2f$",prize);
							printf("\n\t PRESS 'M' to return to the main menu\n\t PRESS any key to exit the game.");
							if(toupper(getch()) == 'M'){
								editScore(prize,playername);
								goto mainhome;
							} 
							else {
								editScore(prize,playername);
								return EXIT_SUCCESS;
							}
							getch();
							break;
						} 
				}
				else {
					printf("\n\n\t YOUR PASS RIGHT: %d", passRight);
					printf("\n\t DO YOU WANT TO YOUR PASS RIGHT? PRESS 'Y' FOR YES, 'N' FOR NO.");
					if(toupper(getch())=='Y'){
						prize = extraQuestions(passRight,prize,playername);
						passRight--;
						break;
					} 
					else if(toupper(getch()) =='N'){
					printf("\n\t YOUR ANSWER(PRESS BUTTON): ");
						if(toupper(getch()) == 'A'){
						printf("\n\n\t CORRECT!");
						prize *= 2;
						printf("\n\t REWARD: %.2f$", prize);
						printf("\n\n\t Do you want to win the prize above and retire from the game?");
						printf("\n\t Press 'Y' if you want to retreat, or 'N' if you want to continue.");
							if(toupper(getch()) == 'Y'){
								printf("\n\n\t CONGRATULATIONS! YOU WON %f$.",prize);
								printf("\n\t PRESS 'M' to return to the main menu\n\t PRESS any key to exit the game.");
									if(toupper(getch()) == 'M'){
										editScore(prize,playername);
										goto mainhome; 
									} 
									else {
										editScore(prize,playername);
										return EXIT_SUCCESS;
									}
							} 
							else if(toupper(getch()) == 'N'){
								printf("\n\n\t The %d. question is coming for you.",questionNumber);
								getch();
								break;
							} 
							else {
								printf("\n\n\t ERROR! WRONG TYPING! YOU ARE SENDING TO MAIN MENU...");
								getch();
								goto mainhome;
							}

						}
						else {
							printf("\n\n\t WRONG ANSWER! The correct answer is A. GAME OVER!");
							printf("\n\t REWARD: %.2f$",prize);
							printf("\n\t PRESS 'M' to return to the main menu\n\t PRESS any key to exit the game.");
							if(toupper(getch()) == 'M'){
								editScore(prize,playername);
								goto mainhome;
							} 
							else {
								editScore(prize,playername);
								return EXIT_SUCCESS;
							}
							getch();
							break;
						}
					}	
					else {
					printf("\n\n\t ERROR! WRONG TYPING! YOU ARE SENDING TO MAIN MENU...");
					getch();
					goto mainhome;
					}
				}
		
			
				case 9: 
					printf("\n\n\t %d. In Doctor Who, what was the signature look of the fourth Doctor, as portrayed by Tom Baker?",questionNumber - 1);
					printf("\n\n\t A) Bow-tie, braces and tweed jacket");
					printf("\n\t B) Wide-brimmed hat and extra long scarf");
					printf("\n\t C) Pinstripe suit and trainers");
					printf("\n\t D) Cape, velvet jacket and frilly shirt");
					if(passRight == 0){
						printf("\n\n\t YOU DO NOT HAVE PASS RIGHT.");
						printf("\n\t YOUR ANSWER(PRESS BUTTON): ");
							if(toupper(getch()) == 'B'){
							printf("\n\n\t CORRECT!");
							prize *= 2;
							printf("\n\t REWARD: %.2f$", prize);
							printf("\n\n\t Do you want to win the prize above and retire from the game?");
							printf("\n\t Press 'Y' if you want to retreat, or 'N' if you want to continue.");
								if(toupper(getch()) == 'Y'){
									printf("\n\n\t CONGRATULATIONS! YOU WON %f$.",prize);
									printf("\n\t PRESS 'M' to return to the main menu\n\t PRESS any key to exit the game.");
										if(toupper(getch()) == 'M'){
											editScore(prize,playername);
											goto mainhome; 
										} 
										else {
											editScore(prize,playername);
											return EXIT_SUCCESS;
										}
								}	 
								else if(toupper(getch()) == 'N'){
									printf("\n\n\t The %d. question is coming for you.",questionNumber);
									getch();
									break;
								} 
								else {
									printf("\n\n\t ERROR! WRONG TYPING! YOU ARE SENDING TO MAIN MENU...");
									getch();
									goto mainhome;
								}
							}
							else {
								printf("\n\n\t WRONG ANSWER! The correct answer is B. GAME OVER!");
								printf("\n\t REWARD: %.2f$",prize);
								printf("\n\t PRESS 'M' to return to the main menu\n\t PRESS any key to exit the game.");
								if(toupper(getch()) == 'M'){
									editScore(prize,playername);
									goto mainhome;
								} 
								else {
									editScore(prize,playername);
									return EXIT_SUCCESS;
								}
								getch();
								break;
							} 
					}
					else {
						printf("\n\n\t YOUR PASS RIGHT: %d", passRight);
						printf("\n\t DO YOU WANT TO YOUR PASS RIGHT? PRESS 'Y' FOR YES, 'N' FOR NO.");
						if(toupper(getch())=='Y'){
							prize = extraQuestions(passRight,prize,playername);
							passRight--;
							break;
						} 
						else if(toupper(getch()) =='N'){
						printf("\n\t YOUR ANSWER(PRESS BUTTON): ");
							if(toupper(getch()) == 'C'){
							printf("\n\n\t CORRECT!");
							prize *= 2;
							printf("\n\t REWARD: %.2f$", prize);
							printf("\n\n\t Do you want to win the prize above and retire from the game?");
							printf("\n\t Press 'Y' if you want to retreat, or 'N' if you want to continue.");
								if(toupper(getch()) == 'Y'){
									printf("\n\n\t CONGRATULATIONS! YOU WON %f$.",prize);
									printf("\n\t PRESS 'M' to return to the main menu\n\t PRESS any key to exit the game.");
										if(toupper(getch()) == 'M'){
											editScore(prize,playername);
											goto mainhome; 
								} 
										else {
											editScore(prize,playername);
											return EXIT_SUCCESS;
								}
							} 
								else if(toupper(getch()) == 'N'){
									printf("\n\n\t The %d. question is coming for you.",questionNumber);
									getch();
									break;
								} 
								else {
									printf("\n\n\t ERROR! WRONG TYPING! YOU ARE SENDING TO MAIN MENU...");
									getch();
									goto mainhome;
								}
	
						}
							else {
								printf("\n\n\t WRONG ANSWER! The correct answer is B. GAME OVER!");
								printf("\n\t REWARD: %.2f$",prize);
								printf("\n\t PRESS 'M' to return to the main menu\n\t PRESS any key to exit the game.");
								if(toupper(getch()) == 'M'){
									editScore(prize,playername);
									goto mainhome;
								} 
								else {
									editScore(prize,playername);
									return EXIT_SUCCESS;
								}
					getch();
					break;
							}
						}	
						else {
							printf("\n\n\t ERROR! WRONG TYPING! YOU ARE SENDING TO MAIN MENU...");
							getch();
							goto mainhome;
						}
					}
			
				case 10: 
					printf("\n\n\t %d. Who is the only British politician to have held all four 'Great Offices of States' \n\t at some point during their career?",questionNumber - 1);
					printf("\n\n\t A) David Lloyd George");
					printf("\n\t B) Harold Wilson");
					printf("\n\t C) James Callaghan");
					printf("\n\t D) John Major");
					if(passRight == 0){
						printf("\n\n\t YOU DO NOT HAVE PASS RIGHT.");
						printf("\n\t YOUR ANSWER(PRESS BUTTON): ");
							if(toupper(getch()) == 'B'){
							printf("\n\n\t CORRECT!");
							prize *= 2;
							printf("\n\t REWARD: %.2f$", prize);
							printf("\n\n\t Do you want to win the prize above and retire from the game?");
							printf("\n\t Press 'Y' if you want to retreat, or 'N' if you want to continue.");
								if(toupper(getch()) == 'Y'){
									printf("\n\n\t CONGRATULATIONS! YOU WON %f$.",prize);
									printf("\n\t PRESS 'M' to return to the main menu\n\t PRESS any key to exit the game.");
										if(toupper(getch()) == 'M'){
											editScore(prize,playername);
											goto mainhome; 
										} 
										else {
											editScore(prize,playername);
											return EXIT_SUCCESS;
										}
								}	 
								else if(toupper(getch()) == 'N'){
									printf("\n\n\t The %d. question is coming for you.",questionNumber);
									getch();
									break;
								} 
								else {
									printf("\n\n\t ERROR! WRONG TYPING! YOU ARE SENDING TO MAIN MENU...");
									getch();
									goto mainhome;
								}
							}
							else {
								printf("\n\n\t WRONG ANSWER! The correct answer is B. GAME OVER!");
								printf("\n\t REWARD: %.2f$",prize);
								printf("\n\t PRESS 'M' to return to the main menu\n\t PRESS any key to exit the game.");
								if(toupper(getch()) == 'M'){
									editScore(prize,playername);
									goto mainhome;
								} 
								else {
									editScore(prize,playername);
									return EXIT_SUCCESS;
								}
								getch();
								break;
							} 
					}
					else {
						printf("\n\n\t YOUR PASS RIGHT: %d", passRight);
						printf("\n\t DO YOU WANT TO YOUR PASS RIGHT? PRESS 'Y' FOR YES, 'N' FOR NO.");
						if(toupper(getch())=='Y'){
							prize = extraQuestions(passRight,prize,playername);
							passRight--;
							break;
						} 
						else if(toupper(getch()) =='N'){
						printf("\n\t YOUR ANSWER(PRESS BUTTON): ");
							if(toupper(getch()) == 'C'){
							printf("\n\n\t CORRECT!");
							prize *= 2;
							printf("\n\t REWARD: %.2f$", prize);
							printf("\n\n\t Do you want to win the prize above and retire from the game?");
							printf("\n\t Press 'Y' if you want to retreat, or 'N' if you want to continue.");
								if(toupper(getch()) == 'Y'){
									printf("\n\n\t CONGRATULATIONS! YOU WON %f$.",prize);
									printf("\n\t PRESS 'M' to return to the main menu\n\t PRESS any key to exit the game.");
										if(toupper(getch()) == 'M'){
											editScore(prize,playername);
											goto mainhome; 
										} 
										else {
											editScore(prize,playername);
											return EXIT_SUCCESS;
										}
								} 
								else if(toupper(getch()) == 'N'){
									printf("\n\n\t The %d. question is coming for you.",questionNumber);
									getch();
									break;
								} 
								else {
									printf("\n\n\t ERROR! WRONG TYPING! YOU ARE SENDING TO MAIN MENU...");
									getch();
									goto mainhome;
								}
	
						}
							else {
								printf("\n\n\t WRONG ANSWER! The correct answer is B. GAME OVER!");
								printf("\n\t REWARD: %.2f$",prize);
								printf("\n\t PRESS 'M' to return to the main menu\n\t PRESS any key to exit the game.");
								if(toupper(getch()) == 'M'){
									editScore(prize,playername);
									goto mainhome;
								} 
								else {
									editScore(prize,playername);
									return EXIT_SUCCESS;
								}
					getch();
					break;
							}
						}	
						else {
							printf("\n\n\t ERROR! WRONG TYPING! YOU ARE SENDING TO MAIN MENU...");
							getch();
							goto mainhome;
						}
					}
					
					
					case 11: 
					printf("\n\n\t %d. In 1718, which pirate died in battle off the coast of what is now North Carolina?",questionNumber - 1);
					printf("\n\n\t A) Calico Jack");
					printf("\n\t B) Blackbeard");
					printf("\n\t C) Bartholomew Roberts");
					printf("\n\t D) Captain Kidd");
					if(passRight == 0){
						printf("\n\n\t YOU DO NOT HAVE PASS RIGHT.");
						printf("\n\t YOUR ANSWER(PRESS BUTTON): ");
							if(toupper(getch()) == 'B'){
							printf("\n\n\t CORRECT!");
							prize *= 2;
							printf("\n\t REWARD: %.2f$", prize);
							printf("\n\n\t YOU WON THE BIGGEST REWARD. CONGRATULATIONS! YOU ARE THE BILLIONAIRE!");
							printf("\n\t PRESS 'M' to return to the main menu\n\t PRESS any key to exit the game.");
								if(toupper(getch()) == 'M'){
									editScore(prize,playername);
									goto mainhome;
								} 
								else {
									editScore(prize,playername);
									return EXIT_SUCCESS;
								}
							
							}
							else {
								printf("\n\n\t WRONG ANSWER! The correct answer is B. GAME OVER!");
								printf("\n\t REWARD: %.2f$",prize);
								printf("\n\t PRESS 'M' to return to the main menu\n\t PRESS any key to exit the game.");
								if(toupper(getch()) == 'M'){
									editScore(prize,playername);
									goto mainhome;
								} 
								else {
									editScore(prize,playername);
									return EXIT_SUCCESS;
								}
								getch();
								break;
							} 
					}
					else {
						printf("\n\n\t YOUR PASS RIGHT: %d", passRight);
						printf("\n\t DO YOU WANT TO YOUR PASS RIGHT? PRESS 'Y' FOR YES, 'N' FOR NO.");
						if(toupper(getch())=='Y'){
							prize = extraQuestions(passRight,prize,playername);
							passRight--;
							break;
						} 
						else if(toupper(getch()) =='N'){
						printf("\n\t YOUR ANSWER(PRESS BUTTON): ");
							if(toupper(getch()) == 'C'){
							printf("\n\n\t CORRECT!");
							prize *= 2;
							printf("\n\t REWARD: %.2f$", prize);
							printf("\n\n\t YOU WON THE BIGGEST REWARD. CONGRATULATIONS! YOU ARE THE BILLIONAIRE!");
							printf("\n\t PRESS 'M' to return to the main menu\n\t PRESS any key to exit the game.");
								if(toupper(getch()) == 'M'){
									editScore(prize,playername);
									goto mainhome;
								} 
								else {
									return EXIT_SUCCESS;
								}
							
	
						}
							else {
								printf("\n\n\t WRONG ANSWER! The correct answer is B. GAME OVER!");
								printf("\n\t REWARD: %.2f$",prize);
								printf("\n\t PRESS 'M' to return to the main menu\n\t PRESS any key to exit the game.");
								if(toupper(getch()) == 'M'){
									editScore(prize,playername);
									goto mainhome;
								} 
								else {
									return EXIT_SUCCESS;
								}
					getch();
					break;
							}
						}
						else {
							printf("\n\n\t ERROR! WRONG TYPING! YOU ARE SENDING TO MAIN MENU...");
							getch();
							goto mainhome;
						}	
					}
		}
	}
}

void help(){
	system("cls");
	printf("\t ________________________________________________________________");
	printf("\n\t|\t\t\t\t\t\t\t\t |");
	printf("\n\t|\t\t\t    HELP\t\t\t\t |");
	printf("\n\t|________________________________________________________________|");
	printf("\n\t|\t\t\t\t\t\t\t\t |\n\t|    >> There are 11 questions in the competition, including     | \n\t| h1 warm-up question. \t\t\t\t\t\t |");
	printf("\n\t|\t\t\t\t\t\t\t\t |\n\t|    >> You will be eliminated from the contest after you answer | \n\t| a question incorrectly except for the warm-up question.\t |");
	printf("\n\t|\t\t\t\t\t\t\t\t |\n\t|   >> After the 5th question, you gain 2 passes.\t\t |");
	printf("\n\t|\t\t\t\t\t\t\t\t |\n\t|   >> In order for the game to work properly, please do not\t | \n\t| press any key except the keys in the specified orbits. \t |");
	printf("\n\t|\t\t\t\t\t\t\t\t |\n\t|________________________________________________________________|");
	printf("\n\n\n\t PRESS ANY KEY TO RETURN TO MAIN MENU.");

}

void showRecord(){
	
	system("cls");
	char name[20];
	float pr;
	FILE *f;
	f=fopen("recordList.txt","r");
	fscanf(f,"%s%f",&name,&pr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,pr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();
}

void editScore(float prize,char playername[20]){

	system("cls");
	float pr;
	char name[20];
	FILE *f;
	f = fopen("recordList.txt","r");
	fscanf(f,"%s%f",&name,&pr);
	if (prize >= pr){ 
		pr = prize;
		fclose(f);
	    f = fopen("recordList.txt","w");
	    fprintf(f,"%s\n%.2f",playername,pr);
	    fclose(f);
	}
}

	


int extraQuestions(int passRight,float prize,char playername[20]){
	if(passRight == 2){
		
		system("cls");
		printf("\n\n\t EXTRA QUESTION 1. Oberon is the satellite of which planet?");
		printf("\n\n\t A) Mercury");
		printf("\n\t B) Neptun");
		printf("\n\t C) Uranus");
		printf("\n\t D) Mars");
		printf("\n\n\t YOUR ANSWER(PRESS BUTTON).");
		if(toupper(getch())=='C'){
			printf("\n\n\t CORRECT! Next question is coming for you.");
			prize *= 2;
			printf("\n\t REWARD: %.2f$",prize);
			getch();
			return prize;
		} else {
			printf("\n\n\t WRONG ANSWER! The correct answer is C. GAME OVER!");
			printf("\n\t REWARD: %.2f$",prize);
			printf("\n\t PRESS any key to exit the game.");
			if(toupper(getch()) == 'M'){
				editScore(prize,playername);
				return EXIT_SUCCESS;
			} 
			else {
				return EXIT_SUCCESS;
			}
		}
	} 
	else if(passRight == 1){
		
		system("cls");
		printf("\n\n\t EXTRA QUESTION 2. If you planted the seeds of 'Quercus robur', what would grow?");
		printf("\n\n\t A) Trees");
		printf("\n\t B) Flowers");
		printf("\n\t C) Vegetables");
		printf("\n\t D) Grain");
		printf("\n\n\t YOUR ANSWER(PRESS BUTTON).");
		if(toupper(getch())=='A'){
			printf("\n\n\t CORRECT! Next question is coming for you.");
			prize *= 2;
			printf("\n\t REWARD: %.2f$",prize);
			getch();
			return prize;
		} else {
			printf("\n\n\t WRONG ANSWER! The correct answer is A. GAME OVER!");
			printf("\n\t REWARD: %.2f$",prize);
		}
	}
}



