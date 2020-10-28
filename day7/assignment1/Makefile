CXX = g++
NAME = program
LIB_PATH = lib
INCLUDE_PATH = include
SRC_PATH = src

all: main.o libshapes.so
	$(CXX) main.o -L$(LIB_PATH) -lshapes -o $(NAME)

main.o: libshapes.so
	$(CXX) -c $(SRC_PATH)/main.cpp -o main.o -I $(INCLUDE_PATH)

libshapes.so: $(LIB_PATH)/shapes.cpp $(INCLUDE_PATH)/shapes.h
	$(CXX) --shared -fPIC $(LIB_PATH)/shapes.cpp -o $(LIB_PATH)/libshapes.so -I $(INCLUDE_PATH)