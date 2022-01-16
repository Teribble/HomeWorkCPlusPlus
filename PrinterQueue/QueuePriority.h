#pragma once

template <typename T>

class QueuePriority
{
public:

#pragma region Constructors and Distructors

	QueuePriority(int size);
	~QueuePriority();

#pragma endregion Constructors and Distructors

#pragma region Methods

	// Добавить новый элемент с приоритетом
	void add( T value , int priority );
	// Извлекает элемент с максимальным приоритетом
	T pop();
	// Проверяет, пустой ли список
	bool isEmpty();
	// Проверяет, полная ли очередь
	bool isFull();
	// Очистка очереди
	void clear();
	// Возращает размер очереди
	int size();

#pragma endregion Methods

private:

#pragma region Fields

	T* wait;
	int* priority;
	int maxSizeQueue;
	int currentSize;

#pragma endregion Fields

};

#pragma region Full class discription
template<typename T>
QueuePriority<T>::QueuePriority( int size )
{
	maxSizeQueue = size;
	wait = new T[ maxSizeQueue ];
	currentSize = 0;
}
template<typename T>
QueuePriority<T>::~QueuePriority()
{
	delete[]wait;
	delete[]priority;
}
template<typename T>
bool QueuePriority<T>::isEmpty()
{
	return 0 == currentSize;
}
template<typename T>
bool QueuePriority<T>::isFull()
{
	return currentSize == maxSizeQueue;
}
template<typename T>
int QueuePriority<T>::size()
{
	if(!isEmpty())
	{
		return currentSize;
	}
	else
	{
		return 0;
	}
}
template<typename T>
void QueuePriority<T>::clear()
{
	currentSize = 0;
}
template<typename T>
void QueuePriority<T>::add( T value , int priority )
{
	if(!isFull())
	{
		wait[ currentSize ] = value;
		QueuePriority::priority[ currentSize ] = priority;
		currentSize++;
	}
}
template<typename T>
T QueuePriority<T>::pop()
{
	if(!isEmpty())
	{
		int max_priority = priority[ 0 ];
		int position_max_priority = 0;

		for(size_t i = 0; i < currentSize; i++)
		{
			if(max_priority < priority[ i ])
			{
				max_priority = priority[ i ];
				position_max_priority = i;
			}
		}

		T temp = wait[ position_max_priority ];

		for(size_t i = position_max_priority; i < currentSize - 1; i++)
		{
			wait[ i ] = wait[ i + 1 ];
			priority[ i ] = priority[ i + 1 ];
		}

		currentSize--;
		return temp;
	}
}
#pragma endregion Full class discription