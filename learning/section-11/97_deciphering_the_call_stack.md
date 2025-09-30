# Section 11: Trobleshooting and Debugging in C Programs

## Topic: Deciphering the Call Stack: A key to Understanding Program Crashes

## Date: 30/09/2025

### Notes Section (Main Notes)

**1. Overview**
- A stack trace (call stack) is generated whenever your app crashes because of a fatal error 
  - `Stack` is a data structure that's known as a LIFO, last in, first out, and that's how the data is.
- A stack trace shows a list of the function calls that lead to the error
  - Includes the filenames and line numbers of the code that casue the exception or error to occur
  - Top of the stack contains the last call that caused the error (nested calls)
  - Bottom of the stack contains the first call that started the chain of calls to cause the error
  - You need to find the call in your application that is causing the crash
- A programmer can also dump the stack trace

---

### Summary Section (Summary of Notes)
