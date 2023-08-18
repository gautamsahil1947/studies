CXX = g++
CXXFLAGS = -std=c++20 -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -Wshadow
SOURCES = $(wildcard *.cxx)
HEADERS = $(wildcard *.hxx)
OBJ_DIR = obj
OBJECTS = $(addprefix $(OBJ_DIR)/,$(SOURCES:.cxx=.o))
EXECUTABLE = exe 

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(EXECUTABLE)

$(OBJ_DIR)/%.o: %.cxx $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(EXECUTABLE) $(OBJECTS)

.PHONY: all clean
