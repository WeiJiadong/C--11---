/*
*	C++11新特性
*	使用mutex的lock和unlock进行加解锁练习
*	VS2013环境
*/
#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
//输出0-20
void fThread1(mutex * Mutex){
	//加锁
	Mutex->lock();
	for (int i = 0; i < 21; i++){
		cout << i << ' ';
	}
	//解锁
	Mutex->unlock();
}
//输出21-40
void fThread2(mutex * Mutex){
	//加锁
	Mutex->lock();
	for (int i = 21; i < 41; i++){
		cout << i << ' ';
	}
	//解锁
	Mutex->unlock();
}
int main(){
	//创建线程锁对象
	mutex * Mutex = new mutex();
	//创建子线程
	thread * Thread1 = new thread(fThread1, Mutex);
	thread * Thread2 = new thread(fThread2, Mutex);
	
	//将子线程独立
	Thread1->detach();
	
	Thread2->detach();
	
	getchar();

	return 0;
}