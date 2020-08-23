/*
    Bruteforce Bootloader Unlocker for HUAWEI Related smartphones
    This is intended to be the fastest ever created bootloader unlocker
*/
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

#define LEN 37

long long base_start = 1000000000000000;

void resumer(){
    printf("\n\nLast used code was: %lld", base_start);
    exit(1);
}

int main( int argc, char **argv) {
	if ( argc > 1 ) {
	        char *base = argv[1];
	        base_start = atoll( base );
	}
    signal(SIGINT, resumer);
    char fou[LEN] = "fastboot oem unlock ";
    char TOTAL[LEN];

    while (sprintf( TOTAL, "%s%lld", fou, base_start++) && system( TOTAL ));

    printf("Your unlock code is: %llu", base_start);

    return 1;
}
