#include <stdio.h>
void sayhello(char nama[]);

int main()
{
    sayhello("joko");
}

void sayhello(char nama[])
{
    printf("Hallo %s", nama);
}
char sayhello(char nama[])
{
    return "Hallo ", nama;
}
