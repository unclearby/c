#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if(argc < 2) {
        printf("Use -h or --help for usage.\n");
        return 0;
    }

    if(strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0) {
        printf("Usage: ./app [options]\n");
        printf("\nOptions:\n");
        printf("  -h, --help     Show this help message\n");
        printf("  -v, --version  Show version\n");
        return 0;
    }


    printf("Unknown Option: %s\n", argv[1]);
    return 1;
}