#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

char generateRandomChar() {
    // Generate a random character between 'A' and 'Z'
    return 'A' + rand() % 26;
}

void generateRandomPassword(char *password) {
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = generateRandomChar();
    }
    password[PASSWORD_LENGTH] = '\0';
}

int main() {
    srand(time(NULL));

    char password[PASSWORD_LENGTH + 1];
    generateRandomPassword(password);

    printf("Random Password: %s\n", password);

    return 0;
}

