#include <stdio.h>
#include <stdlib.h>
#include "etimer.h"
#include <unistd.h>
int main()
{
    etimer_t mytimer;
    int err = timer_init(&mytimer);
    if (err)
    {
        printf("somethings wrong\n");
        exit(1);
    }
    mytimer.start(&mytimer);

        mytimer.end(&mytimer);
    printf("TIMER RESULTS = %lld\n\n", mytimer.time);
}
