/*
 * =====================================================================================
 *
 *       Filename:  hangman.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/02/2015 09:00:59
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Roman - Abdulrahman Alshehri (), aalshehri08@hotmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include "hangman.h"



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  playingHangman()
 *  Description:  
 * =====================================================================================
 */
void playingHangman() 
{
    srand(time(NULL));
    char word[SIZE][SIZE] = {"java", "scripte", "car", "color", "good"};
    char charGussed[SIZE] = {0};
    
    int posOfWord = getRand(0, 6);
    char * str = word[posOfWord];

    fillWithStars(charGussed, str);

    int timeOfGuessd = 1, i;
    char getChar = '\0', temp = '\0';
    char tempStr[SIZE] = {0};
    
    while(isHasStar(charGussed) && timeOfGuessd != 8){
        printf("Enter your gussed: ");
        scanf("%s", tempStr); 
        temp = tempStr[0] < 97 ? tempStr[0] + 32: tempStr[0];

        printf("\n");

        for(i = 0; i < strlen(str); i++){
            getChar = charGussed[i] == '*' ? str[i] : 0;

            if(temp == getChar){
                charGussed[i] = temp;
                break;
            }
        }


        if( temp != getChar){
            hangMan(timeOfGuessd);
            timeOfGuessd++;
        }
        printf("\n%s\n", charGussed);
    } 
    
    if(isHasStar(charGussed)){
        printf("\nThe computer win\n\n");
    } else {
        printf("\nYou win\n\n");
    }
}		/* -----  end of function playingHangman()  ----- */

int getRand(int min, int max)
{
    return rand() % ((max + min) - min) + min;
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  fillWithStars
 *  Description:  
 * =====================================================================================
 */
void fillWithStars ( char * str, char * word)
{
    int i;
    for(i = 0; i < strlen(word); i++){
        str[i] = '*';
    }
}		/* -----  end of function fillWithStars  ----- */




/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  isHasStar
 *  Description:  
 * =====================================================================================
 */
int isHasStar (char * str)
{
    int result = 0, i;
    for(i = 0; i < strlen(str); i++){
        if(str[i] == '*'){
            result = 1;
            break;
        } else {
            result = 0;
        }
    }
    return result;
}		/* -----  end of function isHasStar  ----- */

void hangMan(int t){
    switch(t){
            case 1:
                printf("---------\n");
                printf("|        | \n");
                printf("|      \n");
                printf("|        \n");
                printf("|         \n");
            
            break;
            
            case 2:
                printf("---------\n");
                printf("|        | \n");
                printf("|       \\\n");
                printf("|        \n");
                printf("|         \n");
            
            break;
            
            case 3:
                printf("---------\n");
                printf("|        | \n");
                printf("|       \\O\n");
                printf("|        \n");
                printf("|         \n");
            
            break;
            
            case 4:
                printf("---------\n");
                printf("|        | \n");
                printf("|       \\O/\n");
                printf("|        \n");
                printf("|         \n");
            
            break;
            
            case 5:
                printf("---------\n");
                printf("|        | \n");
                printf("|       \\O/\n");
                printf("|        |\n");
                printf("|         \n");
            
            break;
            
            case 6:
                printf("---------\n");
                printf("|        | \n");
                printf("|       \\O/\n");
                printf("|        |\n");
                printf("|       /\n");
            
            break;
            
            case 7:
                printf("---------\n");
                printf("|        | \n");
                printf("|       \\O/\n");
                printf("|        |\n");
                printf("|       / \\\n");
            
            break;
    }
}

void greeting(){
    printf("Welcome to Hangman Game.\n");
    
}


