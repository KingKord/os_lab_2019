CC=gcc
CFLAGS=-I. -I../../lab3/src
LDFLAGS=-L../../lab3/src -lpthread

task1:
	@echo "task1 compiling..."
	@echo "default execution"	
	cd ../../lab3/src/&& $(CC) parallel_min_max.c utils.c find_min_max.c  -o lab4-1&& ./lab4-1 --seed 1 --array_size 5000000000 --pnum 4
	@echo "execution with timeout 1 sec"		
	cd ../../lab3/src/&& $(CC) parallel_min_max.c utils.c find_min_max.c  -o lab4-1&& ./lab4-1 --seed 1 --array_size 5000000000 --pnum 4 --timeout 1&& rm lab4-1

task2:
	@echo "task2 binary creating..."
	$(CC) task2.c -o task2
	./task2

show_zombies:
	ps ux | awk '{if($8=="Z") print}'

task3:
	@echo "task3 compiling..."
	$(CC) -o task3 process_memory.c
	./task3

task5:
	$(CC) -o task5 parallel_sum.c ../../lab3/src/utils.o -I../../lab3/src -lpthread
	./task5 4 1000 1

parallel_sum: ../../lab3/src/utils.o parallel_sum.c ../../lab3/src/utils.h
	$(CC) -o $@ $^ $(CFLAGS) $(LDFLAGS)

clean:
	rm task2 task3 task5

