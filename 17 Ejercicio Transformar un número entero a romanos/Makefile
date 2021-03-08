CCOPTION = Wall std=gnu++11 D__USE_MINGW_ANSI_STDIO=1
FLAGS = $(addprefix -,$(CCOPTION))
CC = g++
OBJ = ejercicio.o 
SRC_DIR = C:\Users\Usuario1\Desktop\CODE\CURSO C++\17 Ejercicio Transformar un número entero a romanos

output.exe: $(OBJ) 
	 $(CC) $(FLAGS) $(OBJ) -o output.exe 

ejercicio.o: $(SRC_DIR)\ejercicio.cpp 
	 $(CC) $(FLAGS) -c $(SRC_DIR)\ejercicio.cpp -o ejercicio.o 


clean: 
	del /Q $(OBJ_DIR)\*.o
	del /Q $(BUILD_DIR)\*.exe
