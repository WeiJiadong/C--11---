/*
*	C++11������
*	�����߳�(������)��ϰ
*	VS2013����
*/
#include <iostream>
#include <thread>
using namespace std;
//���0-20
void fThread1(){
	for (int i = 0; i < 21; i++){
		cout << i << ' ';
	}
}
//���21-40
void fThread2(){
	for (int i = 21; i < 41; i++){
		cout << i << ' ';
	}
}
int main(){
	//�������߳�
	thread * Thread1 = new thread(fThread1);
	thread * Thread2 = new thread(fThread2);
	
	//�����̶߳���
	Thread1->detach();
	
	Thread2->detach();
	
	getchar();

	return 0;
}
