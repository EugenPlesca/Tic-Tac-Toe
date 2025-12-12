@echo off

g++ -c libs\core\board.cpp -Ilibs\core -o board.o
ar rcs libcore.a board.o

g++ -c src\game_engine.cpp -Ilibs\core -o game_engine.o
g++ -c src\painter.cpp -Ilibs\core -o painter.o
g++ -c src\main.cpp -Ilibs\core -o main.o

g++ main.o game_engine.o painter.o libcore.a -o Tic-Tac-Toe.exe

g++ tests\test_board.cpp libcore.a -Ilibs\core -o test_board.exe
test_board.exe

pause
