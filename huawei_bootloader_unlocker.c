/*
    Bruteforce Bootloader Unlocker for HUAWEI Related smartphones
    This is intended to be the fastest ever created bootloader unlocker
*/
#include <signal.h>
#define LEN 37

long long base_start = 1000000000000000;

void resumer(){
    printf("\n\nLast used code was: %lld", base_start);
   return 1;
}

int main() {
    signal(SIGINT, resumer);
    char fou[LEN] = {'f', 'a', 's', 't', 'b', 'o', 'o', 't', ' ',
    'o', 'e', 'm', ' ', 'u', 'n', 'l', 'o', 'c', 'k', ' '};
    char TOTAL[LEN];

    while (sprintf(TOTAL, "%s%lld", fou,base_start++) && system(TOTAL));

    printf("Your unlock code is: ", base_start);

    return 1;
}
