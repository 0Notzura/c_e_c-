#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define N 11

pthread_barrier_t barriera;

void* f_thread(void* v) {
	int id = (int) v;
    while (1) {
        printf(" %d chegou na barreira\n",id);
        sleep(1);
        pthread_barrier_wait(&barriera);
        printf("%d passou na barreira\n",id);
        sleep(1);
    }
}

int main(int argc, char *argv[]) {
	pthread_t th[N];
	int i;
    pthread_barrier_init(&barriera, NULL, N);
	for (i = 0; i < N; i++) {
		pthread_create(&th[i], NULL, &f_thread, NULL);
	}
	
    pthread_barrier_destroy(&barriera);
	return 0;
}