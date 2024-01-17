/*
    Bruteforce Bootloader Unlocker for HUAWEI Related smartphones
    This is intended to be the fastest ever created bootloader unlocker
*/
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

#define LEN 37

unsigned long long base_start = 1000000000000000;
static const char LAST_CODE_FILENAME[] = "last_code";

void save_to_disk() {
    /*
     * This function saves the last used code to a file
     */
    printf("\n\nLast used code was: %lld", base_start);
    FILE *fp = fopen(LAST_CODE_FILENAME, "w");
    fprintf(fp, "%llu", base_start);
    fclose(fp);
}

void exit_handler() {
    /*
     * This function is called when the program is terminated
     */
    base_start -= 1;
    save_to_disk();
    exit(1);
}

int main(int argc, char **argv) {
    if (argc > 1) {
        char *base = argv[1];
        base_start = atoll(base);
        save_to_disk();
    } else {
        FILE *fp = fopen(LAST_CODE_FILENAME, "rb");
        if (fp) {
            fscanf(fp, "%llu", &base_start);
            fclose(fp);
        }
    }
    signal(SIGINT, exit_handler);
    signal(SIGTERM, exit_handler);
    signal(SIGQUIT, exit_handler);
    signal(SIGTSTP, exit_handler);
    char fou[25] = "fastboot oem unlock ";
    char TOTAL[LEN];

    base_start -= 1;
    do {
        base_start++;
        sprintf(TOTAL, "%s%llu", fou, base_start);
        printf("Trying %s\n", TOTAL);
        if (base_start % 5000 == 0) {
            save_to_disk();
        }
    } while (system(TOTAL));

    printf("Your unlock code is: %llu", base_start);

    return 1;
}
