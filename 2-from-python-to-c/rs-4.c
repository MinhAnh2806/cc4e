#include <stdio.h>

// Line input
int main() {
    char line[1001];
    printf("Enter line\n");
    scanf("%1000[^\n]s", line);
    // This line does the same thing as above
    // Get up to 1000 char up to EOL from standard in to line
    // fgets(line, 1000, stdin);
    printf("Line: %s\n", line);
}