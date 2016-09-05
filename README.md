Files used:
*libreria.c
*libreria.c
*consume.c

How to compile:

```gcc -c <libreria.c> -o <libreria.o>
ar rcs lib<libreria>.a <libreria.o>
gcc -static consume.c -L. -llibreria
```