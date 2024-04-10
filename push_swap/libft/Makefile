#compilador
CC = gcc  

#flags
CFLAGS = -Wall -Werror -Wextra 

#nome da biblioteca a criar
NAME = libft.a 

# ar = criar um unico ficheiro com uma colecao de varios outros ficheiros, r - insere o ficheiro, c - cria pasta, s - escrever um arquivo-objeto indexar ao arquivo existente/act
CREATE = ar rcs 

#ficheiros  a adicionar
SRC = ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset ft_strchr ft_strcpy ft_strdup ft_strlcat ft_strlcpy ft_strlen ft_strncmp ft_strnstr ft_strrchr ft_tolower ft_toupper 
SRC += ft_substr ft_strtrim ft_split ft_itoa ft_strjoin ft_strmapi ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd
SRC += ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone ft_lstclear ft_lstiter ft_lstmap ft_strcmp
SRCS =	$(addsuffix .c, $(SRC))
OBJS = ${SRCS:.c=.o} 

RM = rm -f

%.o: %.c
	$(CC) $(CFLAGS) -c -I . $< -o $@

$(NAME) : $(OBJS)
	$(CREATE) $(NAME) $(OBJS)

all : $(NAME)

clean : 
	${RM} ${OBJS}

fclean : clean  
	${RM} ${NAME}

re : fclean all

bonus: $(OBJS) $(BOBJECTS)
	$(AR) -r $(NAME) $?