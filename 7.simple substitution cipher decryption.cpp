#include <stdio.h>
#include <ctype.h>
#include <string.h>

void decryptSubstitution(char *cipherText, char *key) {
    for (int i = 0; cipherText[i] != '\0'; i++) {
        if (isalpha(cipherText[i])) {
            if (isupper(cipherText[i])) {
                printf("%c", key[cipherText[i] - 'A']);
            } else {
                printf("%c", tolower(key[toupper(cipherText[i]) - 'A']));
            }
        } else {
            printf("%c", cipherText[i]);
        }
    }
    printf("\n");
}

int main() {
    char cipherText[] = "YOUR_CIPHERTEXT_HERE";
    char key[] = "XMPWOVABCDFGHIJKLMNQSTUYZ"; // Example key, replace with the derived key
    decryptSubstitution(cipherText, key);
    return 0;
}

