CC       := g++
CFLAGS 	 := -pedantic-errors -Wall -Wextra -Werror

TARGET = FrozHash

all: $(TARGET)

$(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp

clean:
	$(RM) $(TARGET)