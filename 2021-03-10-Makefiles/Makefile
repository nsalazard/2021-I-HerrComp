all: datos.txt

updown.x : updown.cpp
	g++ updown.cpp -o updown.x

datos.txt: updown.x
	./updown.x 1000 > datos.txt

clean:
	rm -f datos.txt updown.x
