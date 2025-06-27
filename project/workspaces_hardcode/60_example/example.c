#include <stdio.h>

int main(){
    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekday today = Monday;
    switch (today)
    {
        case Sunday:
            printf("Today is Sunday\n");
            break;
        case Monday:
            printf("Today is Monday\n");
            break; //Without break, the case will not be terminated and jump into case Tuesday
        case Tuesday:
            printf("Today is Tuesday\n");
            break;    
        default:
            printf("Whatever\n");
            break;
    }
    return 0;
}