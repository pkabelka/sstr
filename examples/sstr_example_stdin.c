#include <stdio.h>

#define SSTR_IMPLEMENTATION
#include "../sstr.h"

int main()
{
    sstr s = sstr_new("");
    int c;
    while ((c = getchar()) != EOF)
    {
        sstr_add_char(&s, c);
    }
    printf("%lu, %lu, %s\n", s.length, s.capacity, s.cstr);

    sstr_free(&s);

    return 0;
}
