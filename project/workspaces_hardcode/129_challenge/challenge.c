/*
write a C program that creates a structure pointer and passes it to a function
- create a structure named item with the following members
    - itemName — pointer
    - quantity — int
    - price — float
    - amount — float (stores quantity * price)

- create a function named readltem that takes a structure pointer of type item as a parameter
    - this function should read in (from the user) a product name, price, and quantity
    - the contents read in should be stored in the passed in structure to the function

- create a function named print item that takes as a parameter a structure pointer of type item
    - function prints the contents of the parameter

- the main function should declare an item and a pointer to the item
    -  you will need to allocate memory for the itemName pointer
    - the item pointer should be passed into both the read and print item functions
*/


#include <stdio.h>
#include <stdlib.h>

struct item
{
    char* itemName;
    int qty;
    float price;
    float amount;
};

void readItem (struct item* i);
void printItem (struct item* i);

int main (void)
{
    struct item itm;
    struct item* pItem;

    pItem = &itm;

    pItem->itemName = (char*)malloc (30 * sizeof (char));

    if (pItem == NULL)
        exit (-1);

    //Read Item
    readItem (pItem);

    //Print Item
    printItem (pItem);

    free (pItem->itemName);

    return 0;
}

void readItem (struct item* i)
{
    printf ("Enter product name: ");
    scanf ("%s", i->itemName);

    printf ("Enter price: ");
    scanf ("%f", &i->price);

    printf ("Enter quanity: ");
    scanf ("%d", &i->qty);

    i->amount = (float)i->qty * i->price;
}

void printItem (struct item* i)
{
    printf ("\nName: %s", i->itemName);
    printf ("\nPrice: %f", i->price);
    printf ("\nQuantity: %d", i->qty);
    printf ("\nTotal Amount: %.2f\n", i->amount);
}