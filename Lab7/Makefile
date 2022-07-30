#BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF
#THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
#Name: Peter Luo
#This Makefile is written with the help of Ryan Castelli, one of the TA.
CC = gcc
SFLAGS = -lc -m64 -g
OBJ = lab7main.o readlines.o printlines.o
all: readrec lab7.zip

lab7.zip: *.s Makefile lab7Readme
	zip $@ $^ lab7Readme

%.o: %.s
	$(CC) -c $< -o $@ $(SFLAGS)

readrec: $(OBJ)
	$(CC) $^ -o $@ $(CFLAGS)

clean:
	rm -rf *.o readrec lab7.zip
