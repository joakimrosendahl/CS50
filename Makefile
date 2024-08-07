CC= gcc
CFLAGS = -Wall -Wextra -lm
LDLIBS = -lcrypt -lcs50 -lm

EXE = foo

SRCS = foo.c bar.c
OBJS = $(SRCS:.c=.o)


$(EXE): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LDLIBS)