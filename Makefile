CXX = g++
CXXFLAGS = -Wal -Wextra -02
TARGET = main.cpp

all: $(TARGET)

$(TARGET): main.o
	$(CXX) -o $(TARGET) main.o

clean:
	rm -f *.o $(TARGET)

	
