#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
     int i;
    char secretWord[]="algorithm";
    char visibleWord[]="_________";
    int lives=5;
    char letter;
        printf("\t\t\tWELCOME TO THE HANGMAN\n");


        while(lives>0){
           bool  answerIsRight= false;
            printf("%d %s left\n",lives,(lives==1)?"life":"lives");
            printf("Word: %s\n", visibleWord);
            printf("Guess the letter\n");
            scanf(" %c",&letter);

            for(i=0;i<strlen(secretWord);i++){
                    if(secretWord[i]==letter){
                            visibleWord[i]=letter;
                    answerIsRight= true;
                    }
            }
            if(answerIsRight==false){
                printf("There is no letter %c \n",letter);
                lives--;
            }
            if(lives==0){
                printf("\t\t\tYOU LOSE!\n");
                printf("\t\t\tCorrect answer:%s",secretWord);
                break;
            }
            if(strcmp(secretWord,visibleWord)==0){
                printf("\t\t\t**********************************\n");
                printf("\t\t\tCONGRATULATIONS, YOU WON!\n");
                printf("\t\t\t**********************************\n");
                break;
            }
        }


    return 0;
}
