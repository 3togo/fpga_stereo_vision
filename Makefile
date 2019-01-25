CC = gcc
LIBS =  -lnetpbm -lm 
PRGS =  stereobm_core_tb stereobm_prefilter_tb
CFLAGS =  -Wall -Wno-unknown-pragmas -O2 -Iinclude/ -I/usr/include/netpbm -I/usr/include

all: $(PRGS)

$(PRGS): %: test/%.c
	$(CC) $(CFLAGS) -o $@ $< src/*c $(LIBS)

clean:
	rm -f $(PRGS) 
	
