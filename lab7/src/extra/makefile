CC = gcc 
TO_F = ./extra/

all: main

main: client server

main_client: client.c
	$(CC) client.c -o $(TO_F)client.out

main_server: main_server.c
	$(CC) server.c -o $(TO_F)server.out

clear: *.o