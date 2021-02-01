TARGET = Arr
FLAG = -Wall -Werror -Wextra
SRCS = *.cpp
OBJS = *.o
CC = clang++

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(FLAG) -o $(TARGET) $(OBJS) -I ./

$(OBJS) : $(SRCS)
	$(CC) $(FLAG) -c $(SRCS) -I ./

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)

re : fclean all
