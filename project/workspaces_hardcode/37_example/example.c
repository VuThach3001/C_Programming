#include <stdio.h>

int main(){

    char str[100];
    int i;

    /* Display on screen to tell user to enter something */
    printf("Enter a value: ");
    scanf("%s %d", str, &i);
    
    printf("\nYou entered: %s %d\n", str, i);

    scanf("%d %s", &i, str);

    return 0;
}