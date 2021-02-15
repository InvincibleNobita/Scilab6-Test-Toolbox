rm *.o *.so *.lib test

gcc -fPIC -c main.c
gcc -shared -o libtrans.so main.o
gcc -L$(pwd) -Wl,-rpath=$(pwd) -o test main.c -ltrans -g