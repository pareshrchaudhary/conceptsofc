/* 
//  "#include": This directive is used to include header files in your code. 
//  In this case, we include "<stdio.h>" to use the printf function.
*/
#include <stdio.h>

/* 
//  "#define": This directive is used to define constants or macros. 
//  In the example, we define "PI" as 100.
*/
#define PI 3.14159

/*
//  "#ifndef" and "#endif": These directives are used to check if a particular
//  macro is not defined. If "DEBUG" is not defined; it will be defined with a value of 0.
*/
#ifndef DEBUG
    #define DEBUG 0
#endif

/*
//  "#if", "#else", and "#endif": These directives are used for conditional compilation. 
//  If "DEBUG" is defined and has a non-zero value, the "LOG" macro will be defined to print debug messages. 
//  Otherwise, LOG will be defined as an empty macro.
*/
#if DEBUG
    #define LOG(msg) printf("[DEBUG] %s\n", msg)
#else
    #define LOG(msg)
#endif

/*
//  "#ifdef" and "#endif": These directives are used to check if a particular macro is defined. 
//  In this case, we check if the "__cplusplus" macro is defined, indicating that the code is being compiled as C++ code. 
//  If so, we use the extern "C" construct to ensure the proper linkage of the main function.
*/
#ifdef __cplusplus
    extern "C" {
#endif

int main() {
    int i;

    //  #pragma omp parallel for: This directive is used to enable parallel execution of the following for loop using OpenMP.
    #pragma omp parallel for
    for (i = 0; i < MAX_VALUE; i++) {
        LOG("Processing iteration...");
        // Perform some computation
    }

    return 0;
}

#ifdef __cplusplus
    }
#endif
