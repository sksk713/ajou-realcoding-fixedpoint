SRCS := test.c fx_3132.c
OBJS := $(SRCS:.c=.o)
CC := gcc
CFLAGS := -c -Wall

fx_3132 : $(OBJS)
	$(CC) -o $@ $^ -lm

clean :
	-rm $(OBJS)
	rm fx_3132

dep :
	gccmakedep $(SRCS)

