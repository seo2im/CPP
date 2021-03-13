TARGET = whatever
FLAG = -Wall -Werror -Wextra
SRCS = whatever.cpp
OBJS = whatever.o
CC = clang++

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(FLAG) -o $(TARGET) $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) $(FLAG) -c $(SRCS)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)

re : fclean all
