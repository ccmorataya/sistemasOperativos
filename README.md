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
$ gcc -shared -o liblibreria.so libreria.o
```

Linking the dynamic library:

`$ gcc consume.c -o dynamically_linked -L. -llibreria`

At this point if we execute the binary with:

`$ ./dynamically_linked`

We receive the following error:

`$./dynamically_linked: error while loading shared libraries: liblibreria.so: cannot open shared object file: No such file or directory`

To solve that is necesary to add a variable to the path, the LD_LIBRARY_PATH with two simple comands:

```
$ LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
$ export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
```

And that's all to do, now simple execute the bin as follow:

`$ ./dynamically_linked`