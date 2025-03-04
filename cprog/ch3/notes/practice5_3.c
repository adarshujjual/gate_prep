/*Problem: Write a C program that uses both while and do-while loops to simulate a simple guessing game.
The program generates a "secret number" (for simplicity, hardcode it as 42). The user gets up to 5 attempts 
to guess the number. Use a do-while loop to prompt the user for guesses and provide feedback ("Too high!" or 
"Too low!") after each guess. Use a while loop to track the remaining attempts. If the user guesses correctly, 
congratulate them and tell them how many attempts it took. If they run out of attempts, inform them the game is
 over and reveal the secret number.*/

#include <stdio.h>
 int main(){
    int secret_num=42;
    int guess;
    int atm_left=5;
    int atm_over=0;

    printf("You have 5 attempts to guess the number.\n");

    do{
        
        printf("Enter your guess: \n");
        scanf("%d",&guess);

        
        while(atm_left>0){ // run only till attempts are left over

            atm_left--;   // reduce attempts remaining by one after every unsuccessful attempt
            atm_over++;   // increase attemps over by one after every unsuccessful attempt
        
                if(guess<42){  // if less that secret num then print too low
                    printf("Too low!\n");
                   
                }
                
                else if(guess>42){  //if more that secret num then print too high
                    printf("Too high!\n");
                }
                
                else if(guess==42){  // could use only else to improve readability 
                                     // can print congrats upon guessing right 
                    printf("Congratulations you guessed the number 42 in %d attempts.\n",atm_over);
                }
                
                if(atm_left>0 && guess != 42 ){  //for every wrong attempt print the remaining attempts
                      printf("You have %d attempts left.\n",atm_left);
                }
              
                break;// using the break statement to break to exit the while loop after one cycle. 
                      // this ensures the while loop updates attempts exactly once per guess as only one guess
                      // needs to processed at avery iteration.

        }

    }while(atm_left>0 && guess!=42);  //looping condition that keeps game going; attemps left greater than one and guess is not right 

        if(atm_left==0){   // all 5 attempt are over then print game over ...loop exit then msg will print 
            printf("Game over! The secret number was 42.\n");
        }

    return 0;

 }