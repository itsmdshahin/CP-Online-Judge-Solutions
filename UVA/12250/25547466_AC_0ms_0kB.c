#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char word[80];
    int i = 1;

    while (scanf("%s", &word) != EOF) {
        if (strcmp(word, "#") == 0) {
            break;
        }
        else if (strcmp(word, "HOLA") == 0) {
            printf("Case %d: SPANISH\n", i);
        }
        else if (strcmp(word, "HELLO") == 0) {
            printf("Case %d: ENGLISH\n", i);
        }
        else if (strcmp(word, "HALLO") == 0) {
            printf("Case %d: GERMAN\n", i);
        }
        else if (strcmp(word, "BONJOUR") == 0) {
            printf("Case %d: FRENCH\n", i);
        }
        else if (strcmp(word, "CIAO") == 0) {
            printf("Case %d: ITALIAN\n", i);
        }
        else if (strcmp(word, "ZDRAVSTVUJTE") == 0) {
            printf("Case %d: RUSSIAN\n", i);
        }
        else {
            printf("Case %d: UNKNOWN\n", i);
        }
        ++i;
    }

    return 0;
}