#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <limits.h>

#define M_PI 3.14159265358979323846

char board[3][3];
char currentPlayer;

void welcome();
void calculator();
void multiplayer();
void singlePlayer();
void addition();
void subtraction();
void multiply();
void divide();
void calculateSine();
void calculateCosine();
void calculateTangent();
void calculateLogarithm();
void calculateFactorial();
void calculateExponent();
void calculateSquareRoot();
void initializeBoard();
void printBoard();
int checkWin();
int checkDraw();
void playGame();
int diary();
void temperatureConverter();

void temperatureConverter() {
    double temp;
    int choice;

    printf("\nTemperature Converter:\n");
    printf("Select the conversion type:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Celsius to Kelvin\n");
    printf("3. Fahrenheit to Celsius\n");
    printf("4. Fahrenheit to Kelvin\n");
    printf("5. Kelvin to Celsius\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    printf("Enter the temperature value: ");
    scanf("%lf", &temp);

    switch (choice) {
        case 1:
            printf("%.2lf Celsius is %.2lf Fahrenheit\n", temp, (temp * 9 / 5) + 32);
            break;
        case 2:
            printf("%.2lf Celsius is %.2lf Kelvin\n", temp, temp + 273.15);
            break;
        case 3:
            printf("%.2lf Fahrenheit is %.2lf Celsius\n", temp, (temp - 32) * 5 / 9);
            break;
        case 4:
            printf("%.2lf Fahrenheit is %.2lf Kelvin\n", temp, ((temp - 32) * 5 / 9) + 273.15);
            break;
        case 5:
            printf("%.2lf Kelvin is %.2lf Celsius\n", temp, temp - 273.15);
            break;
        case 6:
            printf("%.2lf Kelvin is %.2lf Fahrenheit\n", temp, ((temp - 273.15) * 9 / 5) + 32);
            break;
        default:
            printf("Invalid choice! Please select a valid option (1-6).\n");
            break;
    }
}

int diary() {
    FILE *fp;
    char filename[100], entry[1024];

    getchar();
    printf("Enter the filename for your diary: ");
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = '\0';

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Cannot open the file.\n");
        return 1;
    }

    printf("Your entry: [type 'exit' to finish]\n");
    while (1) {
        fgets(entry, sizeof(entry), stdin);
        entry[strcspn(entry, "\n")] = '\0';

        if (strcmp(entry, "exit") == 0) break;

        fprintf(fp, "%s\n", entry);
    }

    fclose(fp);
    printf("Entries saved. Goodbye!\n");

    return 0;
}

void welcome() {
    printf("\nWELCOME TO THE PROGRAM\n");
    printf("Enter an option:\n");
    printf("1. Study\n");
    printf("2. Multiplayer\n");
    printf("3. Single Player\n");
    printf("4. Exit\n");
}

void calculator() {
    int choice;
    while (1) {
        printf("WELCOME TO A CALCULATOR DEVELOPED BY SUYASH BAJPAI\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
        printf("5. Sine\n6. Cosine\n7. Tangent\n8. Logarithm\n");
        printf("9. Factorial\n10. Exponent\n11. Square Root\n12. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            case 5:
                calculateSine();
                break;
            case 6:
                calculateCosine();
                break;
            case 7:
                calculateTangent();
                break;
            case 8:
                calculateLogarithm();
                break;
            case 9:
                calculateFactorial();
                break;
            case 10:
                calculateExponent();
                break;
            case 11:
                calculateSquareRoot();
                break;
            case 12:
                printf("Thanks for using the calculator!\n");
                return;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}

void multiplayer()
{
    printf("In this section, only Tic Tac Toe is available because till here only i have made it.\n");

    initializeBoard();
    printBoard();
    playGame();
}

void singlePlayer()
{
    printf("In this section, only Rock Paper Scissors is available because till here only i have made it.\n");
    int userChoice, computerChoice;
    const char *choices[] = {"Rock", "Paper", "Scissors"};
    srand(time(NULL));
    printf("\nRock Paper Scissors Game!\n");
    printf("Choose an option:\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &userChoice);
    if (userChoice < 1 || userChoice > 3)
    {
        printf("Invalid choice! Please select a number between 1 and 3.\n");
        return;
    }
    computerChoice = rand() % 3 + 1;
    printf("\nYou chose: %s\n", choices[userChoice - 1]);
    printf("The computer chose: %s\n", choices[computerChoice - 1]);
    if (userChoice == computerChoice)
    {
        printf("It's a tie!\n");
    }
    else if ((userChoice == 1 && computerChoice == 3) || (userChoice == 2 && computerChoice == 1) || (userChoice == 3 && computerChoice == 2))
    {
        printf("You win!\n");
    }
    else
    {
        printf("Computer wins!\n");
    }
}

void addition()
{
    double total = 0.0, number;
    printf("Type your numbers (enter 0 to finish): ");
    while (1)
    {
        scanf("%lf", &number);
        if (number == 0.0) break;
        total += number;
    }
    printf("Your total sum is: %.2lf\n", total);
}
void subtraction()
{
    double result, number;
    printf("Starting number for subtraction? ");
    scanf("%lf", &result);
    while (1)
    {
        printf("Enter a number to subtract (enter 0 to finish): ");
        scanf("%lf", &number);
        if (number == 0.0) break;
        result -= number;
    }
    printf("The result after your subtraction is: %.2lf\n", result);
}

void multiply()
{
    double product = 1.0, number;
    printf("Enter numbers (enter 0 to finish): ");
    while (1)
    {
        scanf("%lf", &number);
        if (number == 0.0) break;
        product *= number;
    }
    printf("The final product is: %.2lf\n", product);
}

void divide()
{
    double result, number;
    printf("Starting number for division? ");
    scanf("%lf", &result);
    while (1)
    {
        printf("Enter a number to divide by (enter 0 to finish): ");
        scanf("%lf", &number);
        if (number == 0.0) break;
        if (number != 0)
        {
            result /= number;
        }
        else
        {
            printf("You can't divide by zero!\n");
            return;
        }
    }
    printf("The result after division is: %.2lf\n", result);
}

void calculateSine()
{
    double angle;
    printf("Enter an angle in degrees for sine calculation: ");
    scanf("%lf", &angle);
    printf("The sine of %.2lf degrees is: %.2lf\n", angle, sin(angle * M_PI / 180));
}

void calculateCosine()
{
    double angle;
    printf("Enter an angle in degrees for cosine calculation: ");
    scanf("%lf", &angle);
    printf("The cosine of %.2lf degrees is: %.2lf\n", angle, cos(angle * M_PI / 180));
}

void calculateTangent()
{
    double angle;
    printf("Enter an angle in degrees for tangent calculation: ");
    scanf("%lf", &angle);
    printf("The tangent of %.2lf degrees is: %.2lf\n", angle, tan(angle * M_PI / 180));
}

void calculateLogarithm()
{
    double value;
    printf("Enter a positive number to calculate its logarithm: ");
    scanf("%lf", &value);
    if (value <= 0)
    {
        printf("Logarithm is undefined for zero or negative values!\n");
    }
    else
    {
        printf("The logarithm of %.2lf is: %.2lf\n", value, log(value));
    }
}

void calculateFactorial()
{
    int n;
    long long result = 1;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    printf("The factorial of %d is: %lld\n", n, result);
}

void calculateExponent()
{
    double base, exponent;
    printf("Provide the base and exponent (space-separated): ");
    scanf("%lf %lf", &base, &exponent);
    printf("%.2lf raised to the power of %.2lf is: %.2lf\n", base, exponent, pow(base, exponent));
}

void calculateSquareRoot()
{
    double value;
    printf("Enter a positive number for its square root: ");
    scanf("%lf", &value);
    if (value < 0)
    {
        printf("Invalid input! Please provide a positive number.\n");
        return;
    }
    printf("The square root of %.2lf is: %.2lf\n", value, sqrt(value));
}

void initializeBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void printBoard()
{
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if (i < 2)
        {
            printf("---|---|---\n");
        }
    }
    printf("\n");
}

int checkWin()
{
    for (int i = 0; i < 3; i++)
    {
        if ((board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) ||
            (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer))
        {
            return 1;
        }
    }
    if ((board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) ||
        (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer))
    {
        return 1;
    }
    return 0;
}

int checkDraw()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == ' ')
            {
                return 0;
            }
        }
    }
    return 1;
}

void playGame()
{
    int block;
    for (int turns = 0; turns < 9; turns++)
    {
        currentPlayer = (turns % 2 == 0) ? 'X' : 'O';
        printf("Player %c, enter block number (1-9): ", currentPlayer);
        scanf("%d", &block);
        int row = (block - 1) / 3;
        int col = (block - 1) % 3;
        while (block < 1 || block > 9 || board[row][col] != ' ')
        {
            printf("Invalid move! Try again: ");
            scanf("%d", &block);
            row = (block - 1) / 3;
            col = (block - 1) % 3;
        }
        board[row][col] = currentPlayer;
        printBoard();
        if (checkWin())
        {
            printf("Player %c wins!\n", currentPlayer);
            return;
        }
        if (checkDraw())
        {
            printf("The game is a draw!\n");
            return;
        }
    }
}

int main()
{
    char user[50], pswd[50];
    printf("WELCOME TO THE PAGE DEVELOPED BY SUYASH BAJPAI\n");
    printf("Enter username: ");
    fgets(user, sizeof(user), stdin);
    user[strcspn(user, "\n")] = '\0';
    printf("Enter password: ");
    fgets(pswd, sizeof(pswd), stdin);
    pswd[strcspn(pswd, "\n")] = '\0';
    if (strcmp(user, "suyash") == 0 && strcmp(pswd, "rmdir") == 0)
    {
        printf("\nAuthentication successful! Welcome, Suyash.\n");
        printf("\n\nwhat would you like to do today\n");
        char choice[20];
        while (1)
        {
            welcome();
            printf("Enter your choice: ");
            fgets(choice, sizeof(choice), stdin);
            choice[strcspn(choice, "\n")] = '\0';
            if (strcmp(choice, "study") == 0 )
            {
                int choice1;
                printf("please enter the process number to be done ");
                  printf("\n1. calcualtor\n2. temperature converter\n3. diary\nenter your choice ");
                scanf(" %d", &choice1);
                switch (choice1)
        {
            case 1: calculator(); break;
            case 2: temperatureConverter(); break;
            case 3: diary(); break;
            default:
                printf("Invalid choice! Please try again.\n");    
                
            }
            }
            else if (strcmp(choice, "multiplayer") == 0)
            {
                multiplayer();
            }
            else if (strcmp(choice, "single") == 0 || strcmp(choice, "single player") == 0)
            {
                singlePlayer();
            }
            else if (strcmp(choice, "exit") == 0)
            {
                printf("Exiting the program.\n");
                break;
            }
            else
            {
                printf("Invalid choice, please try again.\n");
            }
        }
    }
    else if (strcmp(user, "guest") == 0 && strcmp(pswd, "666") == 0)
    {
        printf("Authentication successful! Welcome as a guest user.\n");
        printf("what would you like to do today our guest\n");
           {
                int choice2;
                printf("please enter the process number to be done ");
                  printf("\n1. calcualtor\n2. temperature converter\n3. diary\nenter your choice ");
                scanf(" %d", &choice2);
                switch (choice2)
        {
            case 1: calculator(); break;
            case 2: temperatureConverter(); break;
            case 3: diary(); break;
            default:
                printf("Invalid choice! Please try again.\n");    
                
            }
    }
    }
    else
    {
        printf("Authentication failed. You are not authenticated.\n");
        printf("please give me a feedback if you want to register \n");
               diary(); 
    }
    return 0;
}