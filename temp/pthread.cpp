#include<iostream>
#include<pthread.h>
#include<mutex>

int count=0;
std::mutex mtx;

void counter() {
	std::lock_guard<std::mutex> lck(mtx);
	count++;
}

void* callBackFunc1(void* arg) {

	for (int i=0;i<1000000;i++) {
		counter();
	}
	return NULL;
}

void* callBackFunc2(void* arg) {
	for (int i=0;i<1000000;i++) {
		counter();
	}
	return NULL;
}

int main() {
	
	pthread_t thread1, thread2;
	pthread_create(&thread1, NULL, callBackFunc1, NULL);
	pthread_create(&thread2, NULL, callBackFunc2, NULL);

	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);

	std::cout<<"Total counter: "<<count<<std::endl;

	return 0;
}
