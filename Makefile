crivo_int: cliente_Crivo_de_Eratostenes.o Crivo_de_Eratostenes.o
	gcc -o crivo_int bin/cliente_Crivo_de_Eratostenes.o bin/Crivo_de_Eratostenes.o

crivo_char: cliente_Crivo_de_Eratostenes_char.o Crivo_de_Eratostenes_marcador_char.o
	gcc -o crivo_char bin/cliente_Crivo_de_Eratostenes_char.o bin/Crivo_de_Eratostenes_marcador_char.o

crivo_bit: cliente_Crivo_de_Eratostenes_bit.o Crivo_de_Eratostenes_marcador_bit.o
	gcc -o crivo_bit bin/cliente_Crivo_de_Eratostenes_bit.o bin/Crivo_de_Eratostenes_marcador_bit.o

Crivo_de_Eratostenes.o: src/Crivo_de_Eratostenes.c headers/Crivo_de_Eratostenes.h
	gcc -o bin/Crivo_de_Eratostenes.o src/Crivo_de_Eratostenes.c -c

Crivo_de_Eratostenes_marcador_char.o: src/Crivo_de_Eratostenes_marcador_char.c headers/Crivo_de_Eratostenes_marcador_char.h
	gcc -o bin/Crivo_de_Eratostenes_marcador_char.o src/Crivo_de_Eratostenes_marcador_char.c -c

Crivo_de_Eratostenes_marcador_bit.o: src/Crivo_de_Eratostenes_marcador_bit.c headers/Crivo_de_Eratostenes_marcador_bit.h
	gcc -o bin/Crivo_de_Eratostenes_marcador_bit.o src/Crivo_de_Eratostenes_marcador_bit.c -c

cliente_Crivo_de_Eratostenes.o: src/cliente_Crivo_de_Eratostenes.c
	gcc -o bin/cliente_Crivo_de_Eratostenes.o src/cliente_Crivo_de_Eratostenes.c -c

cliente_Crivo_de_Eratostenes_char.o: src/cliente_Crivo_de_Eratostenes_char.c
	gcc -o bin/cliente_Crivo_de_Eratostenes_char.o src/cliente_Crivo_de_Eratostenes_char.c -c

cliente_Crivo_de_Eratostenes_bit.o: src/cliente_Crivo_de_Eratostenes_bit.c
	gcc -o bin/cliente_Crivo_de_Eratostenes_bit.o src/cliente_Crivo_de_Eratostenes_bit.c -c

clean:
	make backup
	rm -rf bin/* crivo headers/*.gch
