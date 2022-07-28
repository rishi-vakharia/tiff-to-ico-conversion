CC = gcc
all_sources = main.c TIFFToRaw.c RawToICO.c
all_obs = $(all_sources:.c=.o)

project: $(all_obs)
	$(CC) -o convert $(all_obs) -lm

%.o: %.c 
	$(CC) -c $(all_sources) 

clean:
	rm *.o