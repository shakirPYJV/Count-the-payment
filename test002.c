#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    while (1) {
        char input[100];
        printf("Give me the amount of Payment (Type 'exit' to quit): ");
        fgets(input, sizeof(input), stdin);

        input[strcspn(input, "\n")] = '\0';

        if (strcmp(input, "exit") == 0) {
            break;
        }

        int amount = atoi(input);
        if (amount == 1000) {
            printf("Here is your money: 1 Dollar\n");
        } else if (amount < 1000) {
            int due = 1000 - amount;
            printf("Here is your money: 1 Dollar\nYour due is %d\n", due);
        } else if (amount > 1000) {
            printf("Here is your money: %d Dollars\n", 1 + (amount - 1000));
        } else {
            printf("The input is invalid\n");
        }
    }
    return 0;
}
