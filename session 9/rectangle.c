#include <stdio.h>

int main() {
    // * * * * *
    // * * * * *
    // * * * * *
    int n, m;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter m: ");
    scanf("%d", &m);

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
