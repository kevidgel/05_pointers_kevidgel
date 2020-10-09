#include <stdio.h>

int main()
{
    char c = 'a';
    int n = 717;
    long l = 2020;

    printf("address of char c in hex: %p\n", &c);
    printf("address of int n in hex : %p\n", &n);
    printf("address of long l in hex: %p\n\n", &l);

    printf("address of char c in hex: %lu\n", &c);
    printf("address of int n in hex : %lu\n", &n);
    printf("address of long l in hex: %lu\n\n", &l);

    // between char c and int n there is 1 byte, between int n and long l there are 4 bytes

    // pointers

    char* cp = &c;
    int* np = &n;
    long* lp = &l;

    printf("Before:\n");
    printf("char c: %c\n", *cp);
    printf("int n : %d\n", *np);
    printf("long l: %ld\n\n", *lp);

    *cp = 'b';
    *np = 71717;
    *lp = 202020;

    printf("After:\n");
    printf("char c: %c\n", *cp);
    printf("int n : %d\n", *np);
    printf("long l: %ld\n\n", *lp);

    // unsigned int

    unsigned int blah = 10101010;
    int* blahpint = &blah;
    char* blahpchar = &blah;

    printf("blahpint : %p blahpint  points to %u\n", blahpint, *blahpint);
    printf("blahpchar: %p blahpchar points to %u\n\n", blahpchar, *blahpchar);

    printf("unsigned int blah in dec: %d\n", blah);
    printf("unsigned int blah in hex: %u\n\n", blah);

    int i;
    printf("Each byte in dec: ");
    for (i = 0; i < 4; i++)
    {
      printf("%hhu ", *(blahpchar + i));
    }
    printf("\nEach byte in hex: ");
    for (i = 0; i < 4; i++)
    {
      printf("%hhx ", *(blahpchar + i));
    }
    printf("\n\n");

    // modifying each byte
    for (i = 0; i < 4; i++)
    {
      *(blahpchar + i) += 1;
    }
    printf("unsigned int blah in dec: %d\n", blah);
    printf("unsigned int blah in hex: %u\n\n", blah);

    printf("Each byte in dec: ");
    for (i = 0; i < 4; i++)
    {
      printf("%hhu ", *(blahpchar + i));
    }
    printf("\nEach byte in hex: ");
    for (i = 0; i < 4; i++)
    {
      printf("%hhx ", *(blahpchar + i));
    }
    printf("\n\n");

    // modifying each byte pt 2
    for (i = 0; i < 4; i++)
    {
      *(blahpchar + i) += 16;
    }
    printf("unsigned int blah in dec: %d\n", blah);
    printf("unsigned int blah in hex: %u\n\n", blah);

    printf("Each byte in dec: ");
    for (i = 0; i < 4; i++)
    {
      printf("%hhu ", *(blahpchar + i));
    }
    printf("\nEach byte in hex: ");
    for (i = 0; i < 4; i++)
    {
      printf("%hhx ", *(blahpchar + i));
    }
    printf("\n\n");

    // each byte is being incremented by the value specified (such as 1 or 16 in this case)
    // the bytes are being printed backwards, meaning the least significant byte is first.

}
