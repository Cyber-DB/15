#include <stdio.h>
#define QUEUE_SIZE 10
int Queue[QUEUE_SIZE];
int front = 0, rear = 0, nCount = 0;

int Enqueue(int qData)
{
	if (nCount >= QUEUE_SIZE)
	{
		printf("Queue is Full Now! \n");
		return 0;
	}
	Queue[rear++] = qData;
	
	return ++nCount;

}

bool Dequeue(int *lpqDest)
{
	if (nCount == 0) // 큐에 남은 데이터가 없을경우.
	{
		printf("Queue is Empty Now! \n");
		return false;
	}
	else
	{
		*lpqDest = Queue[front++];
		nCount--;
		printf("Dequeue : %d \n", *lpqDest);
		return true;
	}
}

int GetCount()
{
	return nCount;
}

int main()
{
	int i, data;
	
	for (i = 1; i <= 11; i++)
	{
		Enqueue(i);
	}

	while (Dequeue(&data));

	return 0;
}

