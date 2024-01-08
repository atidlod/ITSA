#include <stdio.h>
#include <string.h>

int main() {
    char in[6];
    fgets(in, sizeof(in), stdin);
    in[5] = '\0'; 

    int m = 10 * ((int)in[0] - '0') + ((int)in[1] - '0'); 
    int d = 10 * ((int)in[3] - '0') + ((int)in[4] - '0');

    switch (m) {
        case 1: d < 21 ? printf("Capricorn\n") : printf("Aquarius\n"); break;
        case 2: d < 19 ? printf("Aquarius\n") : printf("Pisces\n"); break;
        case 3: d < 21 ? printf("Pisces\n") : printf("Aries\n"); break;
        case 4: d < 21 ? printf("Aries\n") : printf("Taurus\n"); break;
        case 5: d < 22 ? printf("Taurus\n") : printf("Gemini\n"); break;
        case 6: d < 22 ? printf("Gemini\n") : printf("Cancer\n"); break;
        case 7: d < 23 ? printf("Cancer\n") : printf("Leo\n"); break;
        case 8: d < 24 ? printf("Leo\n") : printf("Virgo\n"); break;
        case 9: d < 24 ? printf("Virgo\n") : printf("Libra\n"); break;
        case 10: d < 24 ? printf("Libra\n") : printf("Scorpio\n"); break;
        case 11: d < 23 ? printf("Scorpio\n") : printf("Sagittarius\n"); break;
        case 12: d < 22 ? printf("Sagittarius\n") : printf("Capricorn\n"); break;
    }

    return 0;
}
