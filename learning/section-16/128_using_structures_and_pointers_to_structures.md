# Section 16: Comprehensive Guide to Using Structures in C Programming

## Topic: Using Structures and Pointers to Structures as Function Arguments in C

## Date: 12/10/2025

---

### Cue Column (Questions, Keywords, or Prompts)

- [Insert question or keyword]
- [Insert question or keyword]
- [Insert question or keyword]

---

### Notes Section (Main Notes)

**1. Structures as arguments to functions**
- After declaring a structure named `Family`, how do we pass this structure as an argument to a function
```c
struct Family
{
  char name[20];
  int age;
  char father[20];
  char mother[20];
};

bool siblings(struct Family member1, struct Family member2)
{
  if(strcmp(member1.mother, member2.mother) == 0)
    return true;
  else
    return false;
};
```
- This fucntion has two parameters, each of which is a structure

**2. Pointers to Structures as function arguments**
- You should use a pointer to a structure as an argument
  - It can take quite a bit time to copy large structures as arguments, as well as requiring whatever amount of memory to store the copy of the structure.
  - Pointers to structures aoivd the memory comsumption and the copying time (only a copy of the pointer argument is made)

```c
bool siblings(struct Family *pmember1, struct Family *pmember2)
{
  if(strcmp(pmember1->mother, pmember2->mother) == 0)
    return true;
  else
    return false;
}
```
- You can also use the `const` modifier to not allow any modification of the members of the struct (what the struct is pointing to)
```c
bool siblings(Family const *pmember1, Family const *pmember2)
{
  if(strcmp(pmember1->mother, pmember2->mother) == 0)
    return true;
  else
    return false;
}
```
  - Any attempt to change those structures will cause an error messege during compilation
- The indirection operator in each parameter definition is now in front of the `const` keyword
  - Not in front of the parameter name
  - You cannot modify the addresses stored in the pointers
  - Its the pointers that are protected here not the structures to which they point

**3. Returning a structure from a function**
- The function prototype has to indicate this return value in the normal way
```c
struct Date my_fun(void);
```
- This is a prototype for a function taking no arguments that returns a structure of type `Date`
- It is often more convenient to return a pointer to a structure
  - When returning a pointer to a structure, it should be created on the **heap**
```c
struc funds
{
  char bank[FUNDLEN];
  double bankfund;
  char save[FUNDLEN];
  double savefund;
};

double sum(struct funds moolah)
{
  return(moolah.bankfund + moolah.savefund);
}

int main(void)
{
  struct funds stan =
  {
    "Garlic-Melon Bank",
    4032.27,
    "Lucky's Savings and Loan",
    8543.94
  };
  printf("Stan has a total of $%.2f.\n", sum(stan));
  return 0;
}
```

**4. Reminder**
- You should always use pointers when passing structures to a function
  - It works on older as well as newer C implementations and that it is quick (you just pass a single address)
- However, you have less protection for your data
  - Some operations in the called function could inadvertently affect data in the original structure
  - Use `const` qualifier solves that problem
- Advantages of passing structures as arguments
  - The function works with copies of the original data, which is safer than working with the original data
  - The programming style tends to be clearer
- Main disadvantages to passing structures as arguments
  - Older implementations might not handle the code
  - Wastes time and space
  - Especially wasteful to pass large structures to a function that uses only one or two members of the structure
- Programmers use structure pointers as function arguments for reasons of efficiency and use `const` when necessary
- Passing structures by value is most often done for structures that are small

---

### Summary Section (Summary of Notes)

[Insert a brief summary of the key ideas and takeaways]
