TARGET = PhoneBook
SRC = ./Contact.cpp \
		./PhoneBook.cpp \
		./main.cpp
OBJ = $(SRC:.cpp=.o)
CC = clang++
FLAGS = -Wall -Werror -Wextra

all : $(TARGET)

$(TARGET) : $(OBJ)
	$(CC) $(FLAGS) -o $(TARGET) $(OBJ)
	

$(OBJ) : $(SRC)
	$(CC) $(FLAGS) -c $(SRC)
	
clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(TARGET)

re : fclean all