/*
*	C++11新特性
*	创建线程(不加锁)练习
*	VS2013环境
*/
#include <iostream>
#include <thread>
using namespace std;
//输出0-20
void fThread1(){
	for (int i = 0; i < 21; i++){
		cout << i << ' ';
	}
}
//输出21-40
void fThread2(){
	for (int i = 21; i < 41; i++){
		cout << i << ' ';
	}
}
int main(){
	//创建子线程
	thread * Thread1 = new thread(fThread1);
	thread * Thread2 = new thread(fThread2);
	
	//将子线程独立
	Thread1->detach();
	
	Thread2->detach();
	
	getchar();

	return 0;
}
