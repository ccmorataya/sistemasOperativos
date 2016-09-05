Files used:

`libreria.c`

`libreria.h`

`consume.c`

How to compile:

```
$ gcc -c <libreria.c> -o <libreria.o>
$ ar rcs lib<libreria>.a <libreria.o>
$ gcc -static consume.c -L. -llibreria
```

The above is for a shared library.