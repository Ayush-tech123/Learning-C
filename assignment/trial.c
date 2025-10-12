#include <stdio.h>

// Function declarations

int menu();

void recursion(int start);

void calculator();

void confirm(int confirmation, int total, float percent);

// Main function

int main() 
{
    int start = menu();
    recursion(start);
    return 0;
}

// Menu function

int menu() 
{
    int start;
    printf(".....................................\n");
    printf("\nEnter the feature you want to use :- \nCalculate Result [1] \nExit [2]\n");
    printf(".....................................\n");
    printf(" : ");
    scanf("%d", &start);
    return start;
}

// Recursive main menu logic

void recursion(int start) 
{
    if (start == 1) 
    {
        calculator();
    }
    else if (start == 2) 
    {
        printf("\nThank you for using the code :)\n");
    }
    else 
    {
        printf("\nInvalid Choice! Try 1 or 2.\n");
        start = menu();
        recursion(start);
    }
}

// Calculator function

void calculator() 
{
    int DE, FOC, EM, AP, CS;

// Taking input for every subject

    printf("\n.............................................................\n");
    printf("\nEnter the score for Digital Electronics out of 100 : ");
    scanf("%d", &DE);

    printf("\nEnter the score for Foundations of Computing out of 100 : ");
    scanf("%d", &FOC);

    printf("\nEnter the score for Engineering Mathematics out of 100 : ");
    scanf("%d", &EM);

    printf("\nEnter the score for Applied Physics out of 100 : ");
    scanf("%d", &AP);

    printf("\nEnter the score for Communication Skills out of 100 : ");
    scanf("%d", &CS);
    printf("\n.............................................................\n");

    // Validating marks

    if (DE < 0 || DE > 100 || FOC < 0 || FOC > 100 ||
        EM < 0 || EM > 100 || AP < 0 || AP > 100 || CS < 0 || CS > 100) 
    {
        printf("\nInvalid marks input detected! Restarting...\n");
        calculator();
        return;
    }

    int confirmation;
    int total = DE + FOC + EM + AP + CS;
    float percent = total / 5.0;

// User Validation o screen

    printf("\n*************************************************************\n");
    printf("\nPlease check if the entered marks are correct:\n");
    printf("Digital Electronics = %d\n", DE);
    printf("Foundation of Computing = %d\n", FOC);
    printf("Engineering Mathematics = %d\n", EM);
    printf("Applied Physics = %d\n", AP);
    printf("Communication Skills = %d\n", CS);
    printf("*************************************************************\n");
    printf("\nDo you confirm?\n Yes [1]\n No [2]\n : ");
    scanf("%d", &confirmation);

    confirm(confirmation, total, percent);
}

// Confirmation + Result function

void confirm(int confirmation, int total, float percent) 
{
    if (confirmation == 1)
    {
        printf("\nMarks confirmed successfully!\n");

        // Subject marks for checking

        int DE, FOC, EM, AP, CS;
        printf("\nPlease re-enter the marks (for result verification only):\n");
        printf("Digital Electronics: "); scanf("%d", &DE);
        printf("Foundations of Computing: "); scanf("%d", &FOC);
        printf("Engineering Mathematics: "); scanf("%d", &EM);
        printf("Applied Physics: "); scanf("%d", &AP);
        printf("Communication Skills: "); scanf("%d", &CS);

        // Count failed subjects

        int failCount = 0;
        int supplementarySubject = 0;
        int requiredMarks = 0;

        if (DE < 35) 
        { failCount++; 
            if (DE >= 32 && DE <= 34) 
        { 
            supplementarySubject = 1; requiredMarks = 35 - DE; 
        } 
        }
        if (FOC < 35) 
        { 
          failCount++; 
            if (FOC >= 32 && FOC <= 34) 
        { 
            supplementarySubject = 1; requiredMarks = 35 - FOC; 
        } 
        }
        if (EM < 35) 
        { 
            failCount++; 
            if (EM >= 32 && EM <= 34) 
        { 
            supplementarySubject = 1; requiredMarks = 35 - EM; 
        } 
        }
        if (AP < 35) 
        { 
            failCount++; 
            if (AP >= 32 && AP <= 34) 
        { 
                supplementarySubject = 1; requiredMarks = 35 - AP; 
        } 
        }
        if (CS < 35) 
        { 
            failCount++; 
            if (CS >= 32 && CS <= 34) 
        { 
                supplementarySubject = 1; requiredMarks = 35 - CS; 
        } 
        }

        printf("\n=============================================================\n");

        if (failCount == 0) 
        {
            
            //Pass Logic
            printf("Result: PASS\n");
            printf("Total Marks = %d / 500\n", total);
            printf("Percentage  = %.2f%%\n", percent);

            if (percent >= 65)
                printf("Division: First Division\n");
            if (percent >= 45 && percent < 65)
                printf("Division: Second Division\n");
            if (percent >= 35 && percent < 45)
                printf("Division: Third Division\n");
        }

        else if (failCount == 1 && supplementarySubject == 1) 
        {
            
            // Supplementary with grace marks logic

            printf("Result: Supplementary Allowed (One Subject)\n");
            printf("Required marks to pass that subject: +%d\n", requiredMarks);
            printf("Note: Full result withheld until supplementary cleared.\n");
        }

        else if (failCount == 1 && supplementarySubject == 0) 
        {
            // Supplemenatry Logic

            printf("Result: FAIL\nReason: One subject below 32 — supplementary not allowed.\n");
        }

        else if (failCount > 1) 
        {
            // Proper fail Logic

            printf("Result: FAIL\nReason: More than one subject failed.\n");
        }

        printf("=============================================================\n");

        //Re-calculate or exit

        int again;
        printf("\nWould you like to go back to menu?\nYes [1]\nExit [2]\n : ");
        scanf("%d", &again);

        if (again == 1)
            recursion(menu());
        else if (again == 2)
            printf("\nExiting... Thank you!\n");
        else 
        {
            printf("\nInvalid input! Try again.\n");
            confirm(1, total, percent); // recursive retry
        }
    }

    else if (confirmation == 2) 
    {
        printf("\nRestarting marks entry...\n");
        calculator();
    }

    else 
    {
        printf("\nInvalid input! Please enter 1 or 2.\n");
        int newConfirm;
        printf("\nDo you confirm?\n Yes [1]\n No [2]\n : ");
        scanf("%d", &newConfirm);
        confirm(newConfirm, total, percent);
    }
}
