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

clean:
	-rm sort
	-rm mergeSort.o
	-rm quickSort.o
	-rm heapSort.o
	-rm swap.o
