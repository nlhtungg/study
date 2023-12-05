#include <stdio.h>

void generateCollections(int n, int M, int index, int* collection, int sum) {
    if (index == n) {
        if (sum == M) {
            for (int i = 0; i < n; i++) {
                printf("%d", collection[i]);
                if (i != n - 1) {
                    printf(" ");
                }
            }
            printf("\n");
        }
        return;
    }

    for (int i = 1; i <= M - sum; i++) {
        collection[index] = i;
        generateCollections(n, M, index + 1, collection, sum + i);
    }
}

int main() {
    int n, M;
    scanf("%d", &n);
    scanf("%d", &M);

    int collection[n];
    generateCollections(n, M, 0, collection, 0);

    return 0;
}
