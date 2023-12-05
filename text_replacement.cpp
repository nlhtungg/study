#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void replaceWords(char *paragraph, const char *oldWord, const char *newWord) {
    char *position = paragraph;
    while ((position = strstr(position, oldWord)) != NULL) {
        memmove(position + strlen(newWord), position + strlen(oldWord), strlen(position + strlen(oldWord)) + 1);
        memcpy(position, newWord, strlen(newWord));
        position += strlen(newWord);
    }
}

int main() {
    char oldWord[100];
    char newWord[100];
    char paragraph[1000];

    fgets(oldWord, sizeof(oldWord), stdin);
    size_t len_old = strlen(oldWord);
    if (len_old > 0 && oldWord[len_old - 1] == '\n') {
        oldWord[len_old - 1] = '\0';
    }

    fgets(newWord, sizeof(newWord), stdin);
    size_t len_new = strlen(newWord);
    if (len_new > 0 && newWord[len_new - 1] == '\n') {
        newWord[len_new - 1] = '\0';
    }
    
    fgets(paragraph, sizeof(paragraph), stdin);
    size_t len_para = strlen(paragraph);
    if (len_para > 0 && paragraph[len_para - 1] == '\n') {
        paragraph[len_para - 1] = '\0';
    }

    replaceWords(paragraph, oldWord, newWord);

    printf("%s\n", paragraph);

    return 0;
}
