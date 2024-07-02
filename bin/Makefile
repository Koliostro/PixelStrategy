name := dev_build
nameR := release

all: dev

release: main_r.o display_sprites_r.o 
	g++ main.o display_sprites.o -Wall -lSDL2 -lSDL2_image -o $(nameR) 

main_r.o: ../code/main/cpp
	g++ -c -Wall ../code/main.cpp

display_sprites_r.o: ../code/display_sprites.cpp
	g++ -c -Wall ../code/display_sprites.cpp
dev: main.o display_sprites.o
	g++ main.o display_sprites.o -lSDL2 -lSDL2_image -o $(name) 

main.o: ../code/main.cpp
	g++ -c ../code/main.cpp

display_sprites.o: ../code/display_sprites.cpp
	g++ -c ../code/display_sprites.cpp

clear:
	rm -rf *.o dev
