# build a Makefile for wrthelp.c
wrthelp: wrthelp.o   
	$(CC) $(LDFLAGS) wrthelp.o -o wrthelp
wrthelp.o: wrthelp.c        
	$(CC) $(CFLAGS) -c wrthelp.c
clean: 
	rm *.o wrthelp
