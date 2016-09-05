# Static and Shared libraries in Linux

## Static libraries: 

Files used:

`libreria.c`

`libreria.h`

`consume.c`

How to compile:

```
$ gcc -c <libreria.c> -o <libreria.o>
$ ar rcs lib<libreria>.a <libreria.o>
```

Linking the static library:

`$ gcc -static consume.c -L. -llibreria`

## Dynamic (Shared) libraries:

How to compile:

```
$ gcc -c -fPIC libreria.c -o libreria.o
$ gcc -shared -Wl,-soname,liblibreria.so.1 -o liblibreria.so.1.0.1 libreria.o
```

Linking the dynamic library:

`$ gcc consume.c -o dynamically_linked -L. -llibreria`
