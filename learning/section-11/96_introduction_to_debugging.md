# Section 10: C Strings: In-Depth Guide to Character Arrays and String Functions

## Topic: Introduction to Debugging: Essential Concepts and Best Practices

## Date: 30/09/2025

### Notes Section (Main Notes)

**1. Overview**

- Debugging is the process of finding and fixing errors in a program (usually logic errors, but, can also include compiler/syntax errors)
  - For syntax errors, understand what the compiler is telling you
  - Always focus on fixing the first problem detected
- Can range in complexity from fixing simple errors to collecting large amounts of data for analysis
- The ability to debug by a programmer is an essential skill (problem solving) that can save you tremendous amounts of time (and money)
- Maintenance phase is the most expensive phase of the software life cycle
- Understand that bugs are unavoidable

**2. Common problems**
- Logic errors
- Syntax errors
- Memory Corruption
- Performance / Scalability
- Lack of Cohesion
- Tight Coupling (dependencies)

**3. Debugging process**
- Understand the problem (sit down with tester, understand requirements)
- Reproduce the problem
  - Sometimes very difficult as problems can be intermittent or only happen in very rare circumstances
    - Parallel processes or threading problems
- Simplify the problem / Divide and conquer / Isolate the source
  - Remove parts of the original test case
  - Comment out code / back out changes
  - Turn a large program into a lot of small programs (unit testing)
- Identify origin of the problem (in the code)
  - Use debugging tools if necessary
- Solve the problem
  - Experience and practice
  - Sometimes includes redesign or refactor of code

**4. Techniques and Tools**
- Tracing / using print statements
  - Output values of variables at certain points of a program
  - Show the flow of execution
  - Can help isolate the error
- Debuggers - monitor the execution of a program, stop it, restart it, set breakpoints and watch variables in memory
- Log Files - can be used for analysis, add "good" log statements to your code
- Monitoring Software - run-time analysis of memory usage, network traffic, thread and object information

**5. Common Debugging Tools**
- **Exception Handling** helps a great deal to identify catastrophic errors
- **Static Analyzers** - analyze source code for specific set of known problems
  - Semantic checker, does not analyze syntax
  - Can detect things like uninitialized variables, memory leaks, unreachable code, deadlocks or race conditions.
- **Test Suites** - run a set of comprehensive system end-to-end tests
- Debugging the program after it has crashed
  - Analyze the call stack
  - Analyze memory dump (core file)

**6. Preventing Errors**
- Write high quality code (follow good design principles and good programming practices)
- Unit Tests - automatically executed when compiling
  - Helps avoid regression
  - Finds errors in new code before it is delivered
  - TDD (Test Driven Development)
- Provide good documentation and proper planning (write down design on paper and utilize pseudocode)
- Work in steps and constantly test after each step
  - Avoid too many changes at once
  - When making changes, apply them incrementally. Add one change, then test thoroughly before starting the next step
  - Helps reduce the possible sources of bugs, limits problem set


---

### Summary Section (Summary of Notes)
