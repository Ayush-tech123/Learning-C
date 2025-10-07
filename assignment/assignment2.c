/* Result Caleculator 

   Made by :- Ayush Sharma
   Course  :- B.tech (A.I & M.L)
   Year    :- First
   Date    :- 5th October 2025*/


#include<stdio.h>

void Calculator();

int menu();

int main() {
    int start = menu(); 

    while (start == 1) { 
        Calculator();

        printf("\n\nWould you like to calculate again?\nYes [1]\nNo [2]\n:- ");
        scanf("%d", &start);

        if (start != 1 && start != 2) {
            printf("Invalid input, exiting...\n");
            break;
        }
    }

    if (start == 2) {
        printf("\nThank you for using CBSE Result Calculator :) \nHave a nice day!\n");
    }

    return 0;
}

void Calculator() {

    int DE, FOC, EM, AP, CS, start = 0, confirm = 0, check = 0, grace;
 
    do {
        printf("\nEnter marks in Digital Electronics out of 100 : ");
        scanf("%d", &DE);
        printf("\nEnter marks in Foundation of Computing out of 100 : ");
        scanf("%d", &FOC);
        printf("\nEnter marks in Engineering Mathematics out of 100 : ");
        scanf("%d", &EM);
        printf("\nEnter marks in Applied Physics out of 100 : ");
        scanf("%d", &AP);
        printf("\nEnter marks in Communication Skills out of 100 : ");
        scanf("%d", &CS);

        start = 0;

        if(DE < 0 || DE > 100){
            start = 1;
            printf("\nThe input for Digital Electronics is invalid");
        }
        if(FOC < 0 || FOC > 100){
            start = 1;
            printf("\nThe input for Foundation of Computing is invalid");
        } 
        if(EM < 0 || EM > 100){
            start = 1;
            printf("\nThe input for Engineering Mathematics is invalid");
        } 
        if(AP < 0 || AP > 100){
            start = 1;
            printf("\nThe input for Applied Physics is invalid");
        } 
        if(CS < 0 || CS > 100){
            start = 1;
            printf("\nThe input for Communication Skills is invalid");
        }  

        if(start == 1){
            printf("\n\nOne or more marks were invalid. Please re-enter all subjects.\n");
            continue;  // goes back to start of outer do-while
        }

        printf("\nConfirm if the marks input is correct\n [1]Digital Electronics : %d\n [2]Foundation of Computing : %d \n [3]Engineering Mathematatics : %d \n [4]Applied Physics : %d \n [5]Communication Skills : %d \n", DE, FOC , EM, AP, CS);

        do {
            printf("\nDo you confirm \n Yes [1] \n No [2] \n:- ");
            scanf("%d", &confirm);

            if(confirm != 1 && confirm != 2){
                printf("\nInvalid Input\n");
            }

        } while(confirm != 1 && confirm != 2);

    } while(confirm == 2 || start == 1);   // if wrong marks or user says “no”, re-enter

    printf("\nProcessing....\n");

    check = 0;

    if(DE < 35) check++;
    if(FOC < 35) check++;
    if(EM < 35) check++;
    if(AP < 35) check++;
    if(CS < 35) check++;

    if(check > 1){
        printf("You are failed\n Better luck next time \n:v");
        return;
    }
        
    if(check == 1){
        int a = 0, b = 0, c = 0, d = 0, e = 0;

        if(DE < 35 && DE > 31){
            while(DE < 35 && DE > 31){
                a++;
                DE++;                
            }
            grace = a;
            printf("Passed with %d grace marks in Digital Electronics\n", grace);
        }
        if(FOC < 35 && FOC > 31){
            while(FOC < 35 && FOC > 31){
                b++;
                FOC++;
            }
            grace = b;
            printf("Passed with %d grace marks in Foundations of Computing\n", grace);
        }
        if(EM < 35 && EM > 31){
            while(EM < 35 && EM > 31){
                c++;
                EM++;
            }
            grace = c;
            printf("Passed with %d grace marks in Engineering Mathematics\n", grace);
        }
        if(AP < 35 && AP > 31){
            while(AP < 35 && AP > 31){
                d++;
                AP++;
            }
            grace = d;
            printf("Passed with %d grace marks in Applied Physics\n", grace);
        }
        if(CS < 35 && CS > 31){
            while(CS < 35 && CS > 31){
                e++;
                CS++;
            }
            grace = e;
            printf("Passed with %d grace marks in Communication Skills\n", grace);
        }

        if(DE < 31){
            printf("Supplementary in Digital Electronics with marks = %d", DE);
        }
        if(FOC < 31){
            printf("Supplementary in Foundations of Computing with marks = %d", FOC);
        }
        if(EM < 31){
            printf("Supplementary in Engineering Mathematics with marks = %d", EM);
        }
        if(AP < 31){
            printf("Supplementary in Applied Physics with marks = %d", AP);
        }
        if(CS < 31){
            printf("Supplementary in Communication Skills with marks = %d", CS);
        }
        return;
    }

    printf("You are passed Congratulations. \nParty De :)\n");

    float percentage = ((DE + FOC + EM + AP + CS)/500.0)*100;
    printf("\nYou scored %.2f%% Kudos", percentage);
    if(percentage > 60){
        printf("\nFirst Division");
    }
    if(percentage > 45 && percentage <= 60){
        printf("\nSecond Division");
    }
    if (percentage >= 35 && percentage <= 45){
        printf("\nThird Division");
    }
}


int menu(){

    int start;

    do{

    printf("Welcome to cbse Please select a feature : \n To calculate your score [1]\n To exit [2]\n :- ");
    scanf("%d", &start);

    if(start < 1 || start > 2){
        printf("Invalid Input\n");
    }

    }while(start != 1 && start != 2);

    return start;
}