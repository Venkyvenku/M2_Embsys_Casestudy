main.exe: main.c src/user_utils.c
		gcc -Iinc ./src/user_utils.c ./main.c -o main.exe

run : main.exe
		./main.exe

clean:
		rm *.exe