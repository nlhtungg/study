#include <stdio.h>
#include <stdbool.h>

bool checkOverlap(int segments[][2], int N) {
    int max_end = segments[0][1];
    int start_of_max_end = segments[0][0];
    for (int i = 1; i < N; i++) {
        if (segments[i][0] < max_end && segments[i][0]>=start_of_max_end) {
            return true;
        }
        if(segments[i][1] > max_end){
            max_end = segments[i][1];
            start_of_max_end = segments[i][0];
        }
    }
    return false;
}

int main() {
    //freopen("test.txt", "r", stdin);
    //freopen("test.out", "w", stdout);
    int N;
    scanf("%d", &N);

    int segments[N][2];
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &segments[i][0], &segments[i][1]);
    }

    bool result = checkOverlap(segments, N);

    if (result) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    return 0;
}
