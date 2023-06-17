#include <stdio.h>
#include <stdlib.h>
#include "etimer.h"
#include <unistd.h>
int main()
{
    etimer_t mytimer;               // Create the timer object
    int err = timer_init(&mytimer); // Initialize the timer object with err to stop if errors occur
    if (err)
    {
        printf("somethings wrong\n");
        exit(1);
    }
    mytimer.start(&mytimer); // Start the timer
    wait(5);
    mytimer.end(&mytimer);                            // End the timer
    printf("TIMER RESULTS = %lld\n\n", mytimer.time); // Print the time
}
