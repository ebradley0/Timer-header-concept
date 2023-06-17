#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "etimer.h"
#include <time.h>
enum timer_thing // Status holders for the timer
{
    TIMER_ON,
    TIMER_OFF
};

int TIMER_STATUS = TIMER_OFF; // Default to being off
time_t startime;
time_t endtime;

static int timerstart(etimer_t *timer)
{

    startime = time(NULL); // Get the time

    printf("TIME LOGGED - %ld\n", startime);

    return 0;
}

static int timerend(etimer_t *timer)
{
    endtime = time(NULL); // Get the time
    printf("TIME LOGGED - %ld\n", endtime);
    timer->time = endtime - startime; // Update the time variable in the struct
    return 0;
}

int timer_init(etimer_t *timer) // Telling the program what to do at each adress when acessed.
{
    timer->start = timerstart;
    timer->end = timerend;
    return 0;
}