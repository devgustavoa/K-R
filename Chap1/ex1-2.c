#include <stdio.h>

int main()
{
    // Yeah so this will generate a compiler warning (at least with gcc),
    // and based on some crazy-ass tests I did, it ignores the escape char
    // and just prints the nest character normally.
    printf("\c???\n");
}
