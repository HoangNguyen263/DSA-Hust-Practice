#include <stdio.h>
#include <string.h>

void countStrings(char S[]) {
    int len = strlen(S);
    int count0 = 0, count1 = 0;

    // Count 0-strings
    for (int i = 0; i < len; i++) {
        if (S[i] == '0') {
            // Find the end of the 0-string
            int j = i;
            while (j < len && S[j] == '0') {
                j++;
            }

            // Check the bit right-after the last bit 0
            if (j < len && S[j] == '1') {
                count0++;
            }

            // Move to the next character after the 0-string
            i = j;
        }
    }

    // Count 1-strings
    for (int i = 0; i < len; i++) {
        if (S[i] == '1') {
            // Find the end of the 1-string
            int j = i;
            while (j < len && S[j] == '1') {
                j++;
            }

            // Check the bit right-after the last bit 1
            if (j < len && S[j] == '0') {
                count1++;
            }

            // Move to the next character after the 1-string
            i = j;
        }
    }
    if (S[len-1] == '0') count0++;
    else if (S[len-1] == '1') count1++;

    // Print the results
    printf("%d ", count0);
    printf("%d", count1);
}

int main() {
    char *S = new char;
    scanf("%s", S);
    countStrings(S);
    return 0;
}