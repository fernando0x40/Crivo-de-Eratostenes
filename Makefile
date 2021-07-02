crivo_int: bin/cliente_Crivo_de_Eratostenes.o bin/Crivo_de_Eratostenes.o
	gcc -o crivo_int bin/cliente_Crivo_de_Eratostenes.o bin/Crivo_de_Eratostenes.o

crivo_char: bin/cliente_Crivo_de_Eratostenes_char.o bin/Crivo_de_Eratostenes_marcador_char.o
	gcc -o crivo_char bin/cliente_Crivo_de_Eratostenes_char.o bin/Crivo_de_Eratostenes_marcador_char.o

crivo_bit: bin/cliente_Crivo_de_Eratostenes_bit.o bin/Crivo_de_Eratostenes_marcador_bit.o
	gcc -o crivo_bit bin/cliente_Crivo_de_Eratostenes_bit.o bin/Crivo_de_Eratostenes_marcador_bit.o

bin/Crivo_de_Eratostenes.o: src/Crivo_de_Eratostenes.c headers/Crivo_de_Eratostenes.h | bin
	gcc -o bin/Crivo_de_Eratostenes.o src/Crivo_de_Eratostenes.c -c

bin/Crivo_de_Eratostenes_marcador_char.o: src/Crivo_de_Eratostenes_marcador_char.c headers/Crivo_de_Eratostenes_marcador_char.h | bin
	gcc -o bin/Crivo_de_Eratostenes_marcador_char.o src/Crivo_de_Eratostenes_marcador_char.c -c

bin/Crivo_de_Eratostenes_marcador_bit.o: src/Crivo_de_Eratostenes_marcador_bit.c headers/Crivo_de_Eratostenes_marcador_bit.h | bin
	gcc -o bin/Crivo_de_Eratostenes_marcador_bit.o src/Crivo_de_Eratostenes_marcador_bit.c -c

bin/cliente_Crivo_de_Eratostenes.o: src/cliente_Crivo_de_Eratostenes.c | bin
	gcc -o bin/cliente_Crivo_de_Eratostenes.o src/cliente_Crivo_de_Eratostenes.c -c

bin/cliente_Crivo_de_Eratostenes_char.o: src/cliente_Crivo_de_Eratostenes_char.c | bin
	gcc -o bin/cliente_Crivo_de_Eratostenes_char.o src/cliente_Crivo_de_Eratostenes_char.c -c

bin/cliente_Crivo_de_Eratostenes_bit.o: src/cliente_Crivo_de_Eratostenes_bit.c | bin
	gcc -o bin/cliente_Crivo_de_Eratostenes_bit.o src/cliente_Crivo_de_Eratostenes_bit.c -c

clean:
	rm -rf bin/* crivo_int crivo_char crivo_bit headers/*.gch

bin:
	mkdir -p $@
