SOURCES = main.cpp implementations/database.cpp implementations/collection.cpp implementations/key.cpp implementations/value.cpp
all:
	g++ -g -o main $(SOURCES)
