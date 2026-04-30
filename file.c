#include <stdio.h>

void main() {
    FILE* File;

    char data[50] = "GeeksforGeeks-A Computer " "Science Portal for Geeks";

    File = fopen("app.txt", "w");

    if(File == NULL) {
        printf("There is an issue.");
    } else {
        printf("Okay"); // PRINT STATUS OF PROCESS.
        fputs("\n", File); // ADD CONTENT
        fputs(data, File); // ADD CONTENT
        fclose(File); // CLOSE THE FILE.
        // EVEN IF THERE IS NO TXT FILE.
    }
}