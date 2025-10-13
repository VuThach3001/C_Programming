#include <stdio.h>

int main()
{
    enum Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

    for (enum Day day = Monday; day <= Sunday; ++day)
    {
        if (day == Wednesday)
        {
            printf("Got cha!\n");
            continue;
        }
        
        printf("It's not Wednesday!\n");
        /* Do something useful with day */
    }
    
    return 0;
}