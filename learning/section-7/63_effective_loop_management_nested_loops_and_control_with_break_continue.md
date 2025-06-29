# Section 7: Mastering Program Flow Control with C Language Constructs

## Topic: Effective Loop Management: Nested Loops and Control with Break/Continue

## Date: 30/06/2025

### Notes Section (Main Notes)

**1. Nested Loops**
- Sometimes you may want to place one loop inside another
- You might want to count the number of occupants in each house on a street
  - Step from house to house, and for each house you count the number of occupants.
- Going through all the houses could be an ```outer loop```, and for each iteration of ```outer loop``` you would have an ```inner loop``` that counts the occupants.

**2. Continue Statements**
- Sometimes a situation arises where you do not want to end a loop, but you want to sskip the current iteration
- The continue statement in the body of a loop does this
  - All you need to do is use the keyword ```continue```, in the body of the loop
- An advantage of using ```continue``` is that it can sometimes eliminate nesting or additional blocks of code
  - Can enhance readability when the statements are long or are deeply nested already.
- Don't use ```continue``` if it complicates rather than simplifies the code.

**3. Break statement**
- Normally, after the body of a loop has been entered, a program executes all the statements in the body befor do the loop test
  - We learned how ```continue``` works
  - Another statement named ```break``` alters this behavior.
- The ```break``` statement cause the program to immediately exit from the loop it is executing
  - Statements in the loop are skippedm and execution of the loop is terminated
  - If the ```break``` statement is inside nested loops, it affects only the inner most loop containing it
  - Use the keyword ```break;```
- ```break``` is often used to leave a loop when there are two separate reasons to leave.
- ```break``` is also used in **switch** statements.

---

### Summary Section (Summary of Notes)

