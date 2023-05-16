#include <stdio.h>

int global_variable;

int main() {
    auto int auto_variable;
    register int register_variable;
    static int static_variable;
    extern int extern_variable;

    printf("Storage class of auto_variable: %s\n", classifyStorage(auto_variable));
    printf("Storage class of register_variable: %s\n", classifyStorage(register_variable));
    printf("Storage class of static_variable: %s\n", classifyStorage(static_variable));
    printf("Storage class of extern_variable: %s\n", classifyStorage(extern_variable));
    printf("Storage class of global_variable: %s\n", classifyStorage(global_variable));

    return 0;
}

const char* classifyStorage(int variable) {
    if (&variable == &auto_variable)
        return "auto";
    else if (&variable == &register_variable)
        return "register";
    else if (&variable == &static_variable)
        return "static";
    else if (&variable == &extern_variable)
        return "extern";
    else
        return "unknown";
}