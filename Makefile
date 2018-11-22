all:
	gcc -std=c99 -w -o shell shell.c filesys.c
	./shell
