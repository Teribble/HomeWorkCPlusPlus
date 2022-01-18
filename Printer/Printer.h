#pragma once
#include "Helper_fail/Helper.h"

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
	// добавить в статистику
	void addStatistics( T value , int priority , std::string time );
	// Вытаскивает из очереди элемент с наибольшим приоритетом
	T pop();
	// Проверка, пустая ли очередь
	bool isEmpty();
	// Проверка, пустая ли очередь статистики
	bool isEmptyStatistics();
	// Проверка, полная ли очередь
	bool isFull();
	// Проверка, полная ли очередь статистики
	bool isFullStatistics();
	// Очистка очереди
	void clear();
	// Очистка очереди статистики
	void clearStatistics();
	// Возращает размер очереди
	int size();
	// Возращает размер очереди статистики
	int sizeStatistics();
	// Возращает время добавления
	char* getCurrentTime();
	// Показывает очередь
	void showBaseQueue();
	// Показать статистику
	void showStatisticsQueue();

#pragma endregion Methods

private:

#pragma region Fields and private Methods

	// Указатель на очередь и ее приоритет
	T* wait;
	int* priority;
	// Указатель на статистику и ее приоритет
	T* statistics;
	int* statPriority;
	// Время добавления и выполнения
	std::string* addingTime;
	std::string* addingTimeStatistics;
	std::string* complateTime;
	// Максимальный размер очереди и статичстики
	int maxSizeQueue;
	int maxSizeQueueStatistics;
	// Текущий размер очереди и очереди статистики
	int currentSize;
	int currentSizeStatistics;

#pragma endregion Fields and private Methods
};

template <typename T>
Printer<T>::Printer(int size)
{
	maxSizeQueue = size;
	wait = new T[ maxSizeQueue ];
	priority = new int[ maxSizeQueue ];
	addingTime = new std::string[ maxSizeQueue ];
	currentSize = ZERO;

	maxSizeQueueStatistics = size*size;
	statistics = new T[ maxSizeQueueStatistics ];
	statPriority = new int[ maxSizeQueueStatistics ];
	complateTime = new std::string[ maxSizeQueueStatistics ];
	addingTimeStatistics = new std::string[ maxSizeQueueStatistics ];
	currentSizeStatistics = ZERO;
}
template <typename T>
Printer<T>::~Printer()
{
	delete[]wait;
	delete[]statistics;

	delete[]priority;
	delete[]statPriority;

	delete[]addingTime;
	delete[]addingTimeStatistics;
	delete[]complateTime;

}
template <typename T>
bool Printer<T>::isEmpty()
{
	return ZERO == currentSize;
}
template <typename T>
bool Printer<T>::isFull()
{
	return maxSizeQueue == currentSize;
}
template <typename T>
void Printer<T>::clear()
{
	currentSize = ZERO;
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
		int max_pri = priority[ ZERO ];
		int pos_max_pri = ZERO;

		for(size_t i = ZERO; i < currentSize; i++)
		{
			if (max_pri < priority[i]) {
				max_pri = priority[i];
				pos_max_pri = i;
			}
		}

		T temp = wait[pos_max_pri];
		int temp_priority = priority[ pos_max_pri ];
		std::string temp_time = addingTime[ pos_max_pri ];

		complateTime[ currentSizeStatistics ] = getCurrentTime();
		addStatistics( temp , temp_priority , temp_time );

		for (size_t i = pos_max_pri; i < currentSize - ONE; i++)
		{
			wait[i] = wait[i + ONE ];
			priority[i] = priority[i + ONE ];
			addingTime[i] = addingTime[i + ONE ];
		}

		currentSize--;

		return temp;
	}
}
template <typename T>
void Printer<T>::showBaseQueue() 
{
	if (!isEmpty()) 
	{
		
		for (size_t i = ZERO; i < currentSize; i++)
		{
			std::cout << "\033[47;32m" << std::left << std::setw( TEN + FIVE ) << wait[ i ]
				<< std::left << std::setw( TEN + FIVE ) << priority[ i ]
				<< std::left << std::setw( TEN + TEN + FOUR ) << addingTime[ i ] << TEXT_RESET;
		}
	}
	
}
template <typename T>
void Printer<T>::showStatisticsQueue()
{
	if(!isEmptyStatistics())
	{
		
		for(size_t i = ZERO; i < currentSizeStatistics; i++)
		{

			std::cout << "\033[47;35m"<<"\r" << std::left << std::setw(TEN + FIVE) << statistics[i]
				<< std::left << std::setw( TEN + FIVE ) << statPriority[ i ]
				<< std::left << std::setw( TEN + TEN + FOUR ) << complateTime[ i ] << TEXT_RESET;

		}
	}
}
template <typename T>
void Printer<T>::addStatistics( T value , int priority , std::string time )
{
	if(!isFullStatistics())
	{
		statistics[ currentSizeStatistics ] = value;
		statPriority[ currentSizeStatistics ] = priority;
		addingTimeStatistics[ currentSizeStatistics ] = time;
		currentSizeStatistics++;
	}
}
template <typename T>
bool Printer<T>::isEmptyStatistics()
{
	return ZERO == currentSizeStatistics;
}
template <typename T>
bool Printer<T>::isFullStatistics()
{
	return maxSizeQueueStatistics == currentSizeStatistics;
}
template <typename T>
void Printer<T>::clearStatistics()
{
	currentSizeStatistics = ZERO;
}
template <typename T>
int Printer<T>::sizeStatistics()
{
	return currentSizeStatistics;
}