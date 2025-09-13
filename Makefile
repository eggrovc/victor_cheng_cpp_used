# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -g

# Target executable
TARGET = submission

# Source files .cpp and .h files
SRC = cheng_p1.cpp proj1.cpp
HEADERS = proj1.h

# Object files
OBJ = $(SRC:.cpp=.o)

# Default rule
all: $(TARGET)

FILE ?= sample_1.txt
FILE2 ?= sample_2.txt

# Compile the main executable
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# Compile object files
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up compiled files
clean:
	rm -f $(OBJ) $(TARGET)

# Run the program
run: $(TARGET)
	./$(TARGET) $(FILE)  $(FILE2) 

