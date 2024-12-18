#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void printWithDelay(const char *text, int delay) {
    printf("%s", text);
    fflush(stdout);
    usleep(delay);
}

int main() {
    int delay;
    int playerChoice, computerChoice;
    int playerScore = 0, computerScore = 0;

    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("The first to reach 3 points wins!\n");

    srand(time(0));

    while (playerScore < 3 && computerScore < 3) {
        printf("\nChoose an option:\n1. Rock\n2. Paper\n3. Scissors\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &playerChoice);

       
        if (playerChoice < 1 || playerChoice > 3) {
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
            continue;
        }

        computerChoice = rand() % 3 + 1; 

        
        printf("You chose: ");
        if (playerChoice == 1) printf("Rock\n");
        else if (playerChoice == 2) printf("Paper\n");
        else if (playerChoice == 3) printf("Scissors\n");

        printf("Computer chose: ");
        if (computerChoice == 1) printf("Rock\n");
        else if (computerChoice == 2) printf("Paper\n");
        else if (computerChoice == 3) printf("Scissors\n");

        
        if (playerChoice == computerChoice) {
            printf("It's a tie! No points awarded.\n");
        } else if ((playerChoice == 1 && computerChoice == 3) ||
                   (playerChoice == 2 && computerChoice == 1) ||
                   (playerChoice == 3 && computerChoice == 2)) {
            printf("You win this round!\n");
            playerScore++;
        } else {
            printf("Computer wins this round!\n");
            computerScore++;
        }

        
        printf("\nScore: You = %d | Computer = %d\n", playerScore, computerScore);
    }

    
    if (playerScore == 3) {
        printf("\nCongratulations! You won the game with a score of 3.\n");
    } else {
        printf("\nComputer wins the game with a score of 3. Better luck next time!\n");
    }

    if (playerScore == 3) {
    
        printWithDelay("\n\nHi, Rang! You're probably wondering what's this for.\n\n", 300000);
        printWithDelay("I created this one simply because I don't have enough courage to tell you all at once.\n",1000000);
        printWithDelay("After this, I hope nothing will change\n\n", 1000000);
        
        
        printWithDelay("   _           .;:;\n", 300000);
        printWithDelay(" _(_)_         ::;        wWWWw   ,,,       _\n", 300000);
        printWithDelay("(_)@(_) ,,,  _ ';:;;'     (___)  {{{}}    _(_)_\n", 300000);
        printWithDelay(" /(_)  {{{}} >'. ||  _     ~Y~    ~Y~    (_)@(_)\n", 300000);
        printWithDelay(" |   {{}~Y~  `> \\||.'< (@) \\|{}}  \\|/     /(_)\n", 300000);
        printWithDelay("(\|/) ~Y~\\|/    `>|/ <` \\Y/ \\|~Y~  \\|/   (\\|/) \n", 300000);
        printWithDelay(" \|// \\|/\\|//    `||/`  \\|/ \\|\\|/ \\\\|//  \\\\|// \n", 300000);
        printWithDelay("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ \n", 300000);
    }

    return 0;
}
    