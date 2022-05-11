#include <stdio.h>
#include <string>
void sayhello(char nama[]);

main()
{
    sayhello("joko");
}

void sayhello(char nama[])
{
    printf("Hallo %s", nama);
}
