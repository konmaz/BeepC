#include <stdio.h>
#include <windows.h>

int main() {
    printf("Welcome to Infinite Beep \nPlease enter the interval between every beep in seconds or minutes (ex. 1m or 20s) : ");

    unsigned long long interval;
    char type;

    scanf("%llu %c", &interval, &type);

    if (type == 's') {
        printf("Starting beeping every %d seconds...", interval);
        interval *= 1000; // Convert seconds to milliseconds.
    } else if (type == 'm') {
        printf("Starting beeping every %d minutes...", interval);
        interval *= 60000; // Convert minutes to milliseconds.
    }

    Beep(750, 800);

    while (1) {
        Sleep(interval);
        Beep(750, 800);
    }


    return 0;
}

