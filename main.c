//
//  main.c
//  Hello World (C)
//
//  Created by Michael Nicholl on 28/07/2011.
//  This work is licensed under a Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License.
//

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int a = 1;
    int b;
    float c = 3.5;
    float d;
    int mode;
    int mode_case_three_four;
    int mode_case_two_five;
    int question_ans = 0;
    int loop = 1;
    int loop2;
    int howmany;
    int arrary [10] = {1,2,3,4,5,6,7,8,9,10};
    int arraryb [3];
    
    printf("Hello, World!\n");
    printf("This is a test!\n\n");
    printf("Type a number to see more tests:\n 1 = Numbers Tests\n 2 = Random Number Tests\n 3 = If/ElseIf/Else Tests\n 4 = For & While Loops\n 5 = Arrary Tests\n 9 = Exit Program\n");
    scanf("%d", &mode);
    if (mode == 9)
    {
        return 0;
    }
    else{
    switch (mode){
    case 1:
        {
            printf("This is a inttiger: %d\nThis is a floating point number: %f\n",a, c);
            printf("Type in a int to see it reposted on the screen!");
            scanf("%d", &b);
            printf("Your number is: %d\n", b);
            printf("Type in a float to see it reposted on the screen!\n");
            scanf("%f", &d);
            printf("Your number is: %f\n", d);
        }
    case 2:
        {
            printf("This is a random number %d\n",rand());
            printf("Enter one to see more random numbers or two to quit the application.");
            scanf("%d", &mode_case_two_five);
            if (mode_case_two_five == 1)
            {
                printf("Type how many random numbers you want to see.");
                scanf("%d", &howmany);
                while (loop2 < howmany)
                {
                    printf("%d", rand());
                    loop2 + 1;
                }
    
            }
            
        }
    case 3:
        {
            while (question_ans == 0){
            printf("What is RAM? 1.Random Access Memeory or 2.A baby sheep.\n");
            scanf("%d", &mode_case_three_four);
            if(mode_case_three_four == 1)
            {
                printf("Yes you are right.\n");
                question_ans = 1;
            }
            else if(mode_case_three_four == 2)
            {
                printf("No sorry, thats wrong. Try again\n");
            }
            else
            {
                printf("No sorry, thats wrong. Try again\n");
            }
            }
            return 0;
    case 4:
        {
            printf("For a while loop test enter 1. The test will count from 1 to 10 then stop.\n");
            printf("For a for loop test enter 2. The test will\n ");
            scanf("%d", &mode_case_three_four);
            if (mode_case_three_four == 1){
                while (loop < 11){
                    printf("%d\n", loop);
                    loop++;
                }
            return 0;
            }

        }
    case 5:
        {
            printf("This is a array %d \n", arrary);
            printf("A array can hold multible numbers in one varible. Type three numbers for to see them reposted on the screen.");
            scanf("%d", &arraryb);
            printf("%d", arraryb);
            }
                
        }
    }
    }
    return 0;
}
