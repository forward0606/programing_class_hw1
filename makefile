all: sort generatorInt generatorStr
	#make sort
	#make generatorInt
	#make generatorStr
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
