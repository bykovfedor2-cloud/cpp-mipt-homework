#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concat(const char* a, const char* b)
{
    size_t la = strlen(a);
    size_t lb = strlen(b);

    char* result = (char*)malloc(la + lb + 1);

    memcpy(result, a, la);
    memcpy(result + la, b, lb + 1);

    return result;
}

int main()
{
    char* s = concat("Cats and ", "Dogs");
    printf("%s\n", s);
    free(s);
}
