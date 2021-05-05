all: sort generatorInt generatorStr

run: sort dataset1.txt dataset2.txt
	cat dataset1.txt | ./sort -i mergeSort
	cat dataset1.txt | ./sort -i quickSort
	cat dataset1.txt | ./sort -i heapSort
	cat dataset2.txt | ./sort -s mergeSort
	cat dataset2.txt | ./sort -s quickSort
	cat dataset2.txt | ./sort -s heapSort

dataset1.txt: generatorInt
	./generatorInt | cat > dataset1.txt

dataset2.txt: generatorStr
	./generatorStr | cat > dataset2.txt

sort: main.c mergeSort.o swap.o quickSort.o heapSort.o
	gcc -g -Wall -o sort swap.o mergeSort.o quickSort.o heapSort.o main.c

mergeSort.o: mergeSort.h mergeSort.c
	gcc -c mergeSort.c

quickSort.o: quickSort.h quickSort.c swap.c swap.h
	gcc -c swap.c quickSort.c

heapSort.o: heapSort.h heapSort.c swap.c swap.h
	gcc -c swap.c heapSort.c

swap.o: swap.c swap.h
	gcc -c swap.c

generatorInt: generatorInt.c
	gcc -o generatorInt generatorInt.c
generatorStr: generatorStr.c
	gcc -o generatorStr generatorStr.c
clean:
	-rm sort
	-rm mergeSort.o
	-rm quickSort.o
	-rm heapSort.o
	-rm swap.o
	-rm generatorInt
	-rm generatorStr
