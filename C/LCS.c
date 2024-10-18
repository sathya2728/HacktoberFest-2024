//modified code
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

void lcs(char *X, char *Y, int m, int n) {
    int L[m + 1][n + 1];

    // Build the LCS matrix
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }

    // Find the LCS length
    int length = L[m][n];

    // Create an array to store the LCS
    char *lcs_str = (char *)malloc((length + 1) * sizeof(char));
    if (lcs_str == NULL) {
        printf("Memory allocation failed!\n");
        exit(1); // Exit if memory allocation fails
    }
    lcs_str[length] = '\0';

    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (X[i - 1] == Y[j - 1]) {
            lcs_str[length - 1] = X[i - 1];
            i--;
            j--;
            length--;
        } else if (L[i - 1][j] > L[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }

    printf("Longest Common Subsequence: %s\n", lcs_str);
    free(lcs_str); // Free allocated memory
}

int main() {
    char X[100], Y[100];

    printf("Enter first string: ");
    fgets(X, sizeof(X), stdin);
    X[strcspn(X, "\n")] = 0; // Remove newline character

    printf("Enter second string: ");
    fgets(Y, sizeof(Y), stdin);
    Y[strcspn(Y, "\n")] = 0; // Remove newline character

    int m = strlen(X);
    int n = strlen(Y);

    lcs(X, Y, m, n);

    return 0;
}
