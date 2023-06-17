#ifndef TIMER_H__
#define TIMER_H__

typedef struct timer_s etimer_t;

typedef int (*timer_command)(etimer_t *timer); //

struct timer_s // commands and info for use in object (timer)
{
    unsigned long long int time;
    timer_command start;
    timer_command end;
    timer_command pause;
};

int timer_init(etimer_t *timer); // creates the object - fill etimer_t with the stuff at *timer

#endif // TIMER_H__