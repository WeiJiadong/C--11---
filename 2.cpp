/*
*	C++11������
*	ʹ��mutex��lock��unlock���мӽ�����ϰ
*	VS2013����
*/
#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
//���0-20
void fThread1(mutex * Mutex){
	//����
	Mutex->lock();
	for (int i = 0; i < 21; i++){
		cout << i << ' ';
	}
	//����
	Mutex->unlock();
}
//���21-40
void fThread2(mutex * Mutex){
	//����
	Mutex->lock();
	for (int i = 21; i < 41; i++){
		cout << i << ' ';
	}
	//����
	Mutex->unlock();
}
int main(){
	//�����߳�������
	mutex * Mutex = new mutex();
	//�������߳�
	thread * Thread1 = new thread(fThread1, Mutex);
	thread * Thread2 = new thread(fThread2, Mutex);
	
	//�����̶߳���
	Thread1->detach();
	
	Thread2->detach();
	
	getchar();

	return 0;
}