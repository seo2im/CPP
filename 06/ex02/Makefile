TARGET = Identify
FLAG = -Wall -Werror -Wextra
HEADER = -I ./
SRCS = Identify.cpp main.cpp
OBJS = *.o
CC = clang++

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(FLAG) -o $(TARGET) $(OBJS) $(HEADER)

$(OBJS) : $(SRCS)
	$(CC) $(FLAG) -c $(SRCS) $(HEADER)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)

re : fclean all
