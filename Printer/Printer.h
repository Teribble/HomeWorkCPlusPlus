#pragma once
#include <iostream>
template <typename T>
class Printer
{
public:

#pragma region Methods
	// Конструктор
	Printer( int size );
	// Деструктор
	~Printer();
	// добавить в очередь
	void add( T value , int priority );
	// Вытаскивает из очереди элемент с наибольшим приоритетом
	T pop();
	// Проверка, пустая ли очередь
	bool isEmpty();
	// Проверка, полная ли очередь
	bool isFull();
	// Очистка очереди
	void clear();
	// Возращает размер очереди
	int size();
	// Возращает время добавления
	char* getCurrentTime();

#pragma endregion Methods

private:

#pragma region Fields

	// указатель на очередь
	T* wait;
	// указатель на приоритеты
	int* priority;
	// Максимальный размер очереди
	std::string* addingTime;
	int maxSizeQueue;
	// Текущий размер очереди
	int currentSize;

#pragma endregion Fields
};

template <typename T>
Printer<T>::Printer(int size)
{
	maxSizeQueue = size;
	wait = new T[ maxSizeQueue ];
	priority = new int[ maxSizeQueue ];
	addingTime = new std::string[ maxSizeQueue ];
	currentSize = 0;
}
template <typename T>
Printer<T>::~Printer()
{
	delete[]wait;
	delete[]priority;
}
template <typename T>
bool Printer<T>::isEmpty()
{
	return 0 == currentSize;
}
template <typename T>
bool Printer<T>::isFull()
{
	maxSizeQueue == currentSize;
}
template <typename T>
void Printer<T>::clear()
{
	currentSize = 0;
}
template <typename T>
int Printer<T>::size()
{
	return currentSize;
}
template <typename T>
void Printer<T>::add( T value , int priority )
{
	if(!isFull())
	{
		wait[ currentSize ] = value;
		Printer::priority[ currentSize ] = priority;
		addingTime[ currentSize ] = getCurrentTime();
		currentSize++;
	}
}
template <typename T>
char* Printer<T>::getCurrentTime()
{
	time_t now = time( NULL );
	char* time = ctime( &now );
	return time;
}
template <typename T>
T Printer<T>::pop()
{
	if(!isEmpty())
	{
		int max_pri = priority[ 0 ];
		int pos_max_pri = 0;

		for(size_t i = 0; i < currentSize; i++)
		{
			if(max_pri < )
		}
	}
}