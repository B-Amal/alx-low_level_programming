#include <stdio.h>
#include <string.h>

int main() {
    const char* s = "Hello, world!";
    size_t length = strlen(s);
    
    printf("The length of the string is: %zu\n", length);

    return 0;
}
