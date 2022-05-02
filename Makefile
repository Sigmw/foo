CC := cc
CFLAGS := -static

all:
	$(CC) $(CFLAGS) main.c -o foo
