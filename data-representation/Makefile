CC = gcc
CFLAGS  = -Werror -Wall -I.

# typing 'make' will invoke the first target entry in the file 
# (in this case the default target entry)
# you can name this target entry anything, but "default" or "all"
# are the most commonly used names by convention
#
all: i2h i2b f2h f2b

i2h:  i2h.o show_bytes_hex.o 
	$(CC) $(CFLAGS) -o i2h i2h.o show_bytes_hex.o

i2h.o:  i2h.c show_bytes_hex.h 
	$(CC) $(CFLAGS) -c i2h.c

f2h:  f2h.o show_bytes_hex.o
	$(CC) $(CFLAGS) -o f2h f2h.o show_bytes_hex.o

f2h.o:  f2h.c show_bytes_hex.h
	$(CC) $(CFLAGS) -c f2h.c

show_bytes_hex.o:  show_bytes_hex.c show_bytes_hex.h 
	$(CC) $(CFLAGS) -c show_bytes_hex.c

i2b: i2b.o show_bytes.o
	$(CC) $(CFLAGS) -o i2b i2b.o show_bytes.o

i2b.o:  i2b.c show_bytes.h
	$(CC) $(CFLAGS) -c i2b.c

f2b: f2b.o show_bytes.o
	$(CC) $(CFLAGS) -o f2b f2b.o show_bytes.o

f2b.o:  f2b.c show_bytes.h
	$(CC) $(CFLAGS) -c f2b.c

show_bytes.o:  show_bytes.c show_bytes.h
	$(CC) $(CFLAGS) -c show_bytes.c

# To start over from scratch, type 'make clean'.  This
# removes the executable file, as well as old .o object
# files and *~ backup files:
#
clean: 
	$(RM) i2h i2b *.o *~
