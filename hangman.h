/*
 * =====================================================================================
 *
 *       Filename:  hangman.h
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
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#define SIZE 25


#ifndef HANGMAN_H
    #define HANGMAN_H


    void playingHangman();
    int getRand(int min, int max);
    void fillWithStars ( char * str, char * word);
    int isHasStar (char * str);
    void hangMan(int t);
#endif

    
    