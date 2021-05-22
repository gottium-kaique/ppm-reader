INCLUDE=include
BIN_FOLDER=bin

DEBUG_FOLDER=$(BIN_FOLDER)/debug
RELEASE_FOLDER=$(BIN_FOLDER)/release

DEBUG_FILE=$(DEBUG_FOLDER)/main
RELEASE_FILE=$(RELEASE_FOLDER)/main

SOURCE=src
INPUT_FILES=$(SOURCE)/main.cpp

RELEASE_FLAGS=-Wall -O3

debug:
	g++ src/main.cpp -I $(INCLUDE) -o $(DEBUG_FILE)
	./$(DEBUG_FILE)
release:
	g++ src/main.cpp -I $(INCLUDE) -o $(RELEASE_FILE) $(RELEASE_FLAGS)
	./$(RELEASE_FILE)
