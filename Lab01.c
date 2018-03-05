/**********************************************************************************
 Name        : Lab01
 Author      : Samson Manoah
 Date        : 02/2/2018
 Description : develop a program which includes two games using C. It must be
 an errorless program, in which user chooses a game, play it, and ends it 
 anytime when he or she wants to quit. For students who has the first time to 
 use C language, this project will be a good initiator to learn a new programming 
 language. Students who already know C language also will have a good opportunity 
 to warm up their programming abilities and get prepared for the rest of labs.
 **********************************************************************************/
 
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define QUIT "quit"
int rand( void );

//
void find_Me();
void runFime();
void number_Baseball();
void runNuba();
void playAgain();
char command[16];
//char QUIT[5] = "quit";

int main()
{
   //char command[6];
   char findMe[] = "fime";
   //char QUIT[16] = "quit";
   char numberBaseball[] = "nuba";

   printf("Please enter a command: ");
   gets(command);

   while((command[0] != '\0') ||(strlen(command) != 0))
   {
  	   if(strcmp(command, findMe) == 0)
    	{
    		//
    		find_Me();
    	}

    	else if(strcmp(command, numberBaseball) == 0)
    	{
    		//
    		number_Baseball();
    	}
      
      else if(strcmp(command, QUIT)== 0)
         return (0);

    	else
    	{
         //
    		printf("Incorrect command\n");
         //printf("Please enter a command: ");
         //gets(command);
     	}//End If
      
      //
      printf("Please enter a command: ");
      gets(command);
    }//End While
}//End Main

void find_Me()
{
   //
   //char answer[2];
   //
	printf("Welcome to Find-Me Game\n");
   
   runFime();
   
   //playAgain();
   	
   printf("See you next time!\n");
   //fgets(name,10,stdin);
	//exit(0);
	return;
}//End find_Me

void number_Baseball()
{
   //
   //char answer1;
   
   //
	printf("Welcome to Number-Baseball Game\n");
   
   /*runNuba();
   
   playAgain();*/
   	
   printf("See you next time!\n");

	return;
}//End number_Baseball

void runFime()
{
   //
   int max, myNum, yourNum, trial = 1;
      
   printf("What is the maximum number for selection? ");
   //printf("What is the maximum number? ");
   scanf("%d", &max);
   /*while (scanf("%d", &max) != 1)
  {
    while (getchar() != '\n');
    printf ("Try again: ");
  }*/

   printf("Max is : %d\n", max);
   
   //srand( (unsigned)time( NULL ) );
   srand(time(0));
   myNum = 1 + rand( ) % max;
   printf("myNum is : %d\n", myNum);

   printf("I chose 1 number between 1 to %d.\n", max);
   printf("Now find me (e.g., 1): ");
   scanf("%d", &yourNum);
   printf("yourNum is : %d\n", yourNum);

   while(yourNum != myNum)
   {
      if(yourNum > myNum)
      {
         printf("[[%d trial]] Less than %d\n",trial, yourNum);
         trial++;
         //printf("Now find me (e.g., 1): ");
         //scanf("%d", yourNum);
      }//End If
      else
      {
         printf("[[%d trial]] Greater than %d\n", trial, yourNum);
         trial++;
         //printf("Now find me (e.g., 1): ");
         //scanf("%d", yourNum);
      }//End Else
      printf("Now find me (e.g., 1): ");
      scanf("%d", &yourNum);
   }//End While

   printf("[[%d trial]] Equal to %d\n",trial, myNum);
   printf("You got it in %d trial(s)!\n", trial);
   
   playAgain();
      
   return;
      
}//End runFime

void runNuba()
{
   
   /*printf("Do you want to play more (y/n)? ");
   answer1 = getchar();
   while(answer == ('Y' || 'y')
   {
      runNuba();
      printf("Do you want to play more (y/n)? ");
      answer1 = getchar();
   }*/
}//End runNuba

void playAgain()
{
   //
   char answer;
   //char *ptr = QUIT;
   
   printf("Do you want to play more (y/n)? ");
   scanf(" %c", &answer);
   
   if((strcmp(&answer, QUIT) == 0) || answer == ('N') || answer == ('n'))
   {
      return;
   }       
   else if(answer == ('Y') || answer == ('y'))
   {
      runFime();
   }
   else
   {
      printf("Do you want to play more (y/n)? ");
      scanf(" %c", &answer); 
   }//End If   
}//End playAgain

 /*****************************************************
  if(scanf("%d%c", &num, &term) != 2 || term != '\n')
    printf("failure\n");
    
    /*while(answer == ('Y') || answer == ('y'))
   {
      runFime();
      printf("Do you want to play more (y/n)? ");
      scanf(" %c", &answer);
   }
   if(answer == ('N') || answer == ('n'))
      return 0;
   else
  ****************************************************/