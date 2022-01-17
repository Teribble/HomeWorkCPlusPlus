#pragma once
#include <iostream>
#include "Printer.h"

template <typename T>
class Statistics
{
public:
#pragma region Constructor and Destructor
	Statistics();
	~Statistics();
#pragma endregion Constructor and Destructor
#pragma region Methods
	// Добавить новый элемент в очередь статистики, с указанием имени, времени и приоритета
	void add(Printer<T> pop);
	// Пустая ли очередь
	bool isEmpty();
	// Полная ли очередь
	bool isFull();
	// Очистка очереди
	void clear();
	// Размер очереди
	int size();
	// Время завершения операции
	std::string getLeadTime;
	// Время добавления
	std::string setLeadTime;
#pragma endregion Methods
private:
#pragma region Fields
	// Очередь
	T* wait;
	// Приоритет
	int* priority;
	// Время добавления
	std::string* addingTime;
	// Время выполнения
	std::string* leadTime;
	// максимальный размер очереди
	int maxSizeQueue;
	// Текущий размер очереди
	int currentSize;
#pragma endregion Fields
};
template <typename T>
Statistics<T>::Statistics() 
{
	maxSizeQueue = 10;
	wait = new T[maxSizeQueue];
	priority = new int[maxSizeQueue];
	addingTime = new std::string[maxSizeQueue];
	leadTime = new std::string[maxSizeQueue];
	currentSize = 0;
}
template <typename T>
Statistics<T>::~Statistics() 
{
	delete[]wait;
	delete[]priority;
	delete[]addingTime;
	delete[]leadTime;
}
template<typename T>
bool Statistics<T>::isEmpty() 
{
	return 0 == currentSize;
}
template <typename T>
bool Statistics<T>::isFull()
{
	return maxSizeQueue == currentSize;
}
template <typename T>
int Statistics<T>::size() 
{
	return currentSize;
}
template <typename T>
void Statistics<T>::clear() 
{
	currentSize = 0;
}
template <typename T>
void Statistics<T>::add(Printer<T> pop)
{
	if (!isFull()) 
	{
		wait[currentSize] = Printer.
		Statistics::priority[] = priority;
		addingTime[currentSize] = time;
		currentSize++;
	}
	else
	{
		maxSizeQueue += 10;
		add(value, priority, time);
	}
}