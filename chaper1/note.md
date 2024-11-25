## Why is C created?

### Independant on hardware   
Assembly language which is used for Unix is dependant on hardware. If program is written in assembly language, it will be changed when device change.
Ulike assesmbly language, C is no need to change for device. So C is more convinient to make Unix program.


## Why is source code need?
Source code is documnet for human. For better readiblity, document is written by high-level language like C, python, Go.


## Why is machine code need?
Machine code is written 0, 1 for computer which is operated by 0,1 signal. Cause hardware-level implement, only 2 signal is efficent than 10 signal called decimall. Decimal is used in source code which is written for human. Binary is used in machine code.   
Compile is process to convert source code to machine code to execute source code by computer.


## What is difference with compile and build?

|Aspect            |Compile                                |Build                                                             |
|------------------|---------------------------------------|------------------------------------------------------------------|
|**Scope**         |Only convert source code to object file| Involving compiling, lingking, creating source code to executable|
|**Output**        |.obj                                   |.exe                                                              |


## Learning programming is like leaning rules
1. C program must have 'main' function.
2. ; must be end of sentence.


## '#include header file' means copy header file and paste it into source file.
If you write #include <stdio.h> in top of source file, this means copy stdio.h file and pasete it into your source file.


## /t control character move cursor to head of next section.
Each section is consisted of 8 spaces. /t means to move cursor to head of next section. Position of 'qwe' is same as you write  printf('asd\tqwe'); or print('asd123\tqwe');.

```c
printf('1234567890')     # 1234567890
printf('asd\tqwe\n');    # asd     qwe
printf('asd123\tqwe\n'); # asd123  qwe
```

So if you want to print pretter, you can use \t control charater.
