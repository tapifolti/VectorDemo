# sudo apt-get install g++
# sudo apt-get install mc ?? for mcedit -- do not needed

TARGET = WebTest.so
CC = g++
CFLAGS = -g -Wall -fPIC -m64 

.PHONY: default all clean

default: $(TARGET)
all: default

OBJECTS = $(patsubst %.cpp, %.o, $(wildcard *.cpp))
HEADERS = $(wildcard *.h)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -I$(JAVA_HOME)/include/ -I$(JAVA_HOME)/include/linux/ -c $< -o $@

.PRECIOUS: $(TARGET) $(OBJECTS)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -shared -o $@

clean:
	-rm -f *.o
	-rm -f $(TARGET)