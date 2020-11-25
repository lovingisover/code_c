#include"common.h"
#include"common.h"

#define DEFAULT_QUEUE_SIZE 8
typedef struct SeqCyQueue
{
	DataType *base;
	size_t    capacity;
	int       front;
	int       tail;
}SeqCyQueue;



void SeqQueueCyInit(SeqCyQueue *Q, int sz);
void SeqQueueCyEn(SeqCyQueue *Q ,DataType x);
bool SeqQueueCyFull(SeqCyQueue *Q);
bool SeqQueueCyEmpty(SeqCyQueue *Q);
DataType SeqQueueCyFront(SeqCyQueue *Q);
void SeqQueueCyDe(SeqCyQueue *Q);
void SeqQueueCyShow(SeqCyQueue *Q);
void SeqQueueCyDestroy(SeqCyQueue *Q);
void SeqQueueCyDestroy(SeqCyQueue *Q)
{
	
	free(Q->base);
	Q->base = NULL;
	Q->capacity = Q->front = Q->tail = 0;
}

void SeqQueueCyShow(SeqCyQueue *Q)
{
	assert(Q != NULL);
	if (SeqQueueCyEmpty(&Q))
	{
		printf("队列已空，不能打印.\n");
		return;
	}
	for (int i = Q->front; i != Q->tail;)
	{
		printf("%d", Q->base[i]);
		i = (i + 1) % Q->capacity;
	}
	printf("\n");
}

void SeqQueueCyDe(SeqCyQueue *Q)
{
	if (SeqQueueCyEmpty(&Q))
	{
		printf("队列已空，不能出队.\n");
		return;
	}
	Q->front = (Q->front + 1) % Q->capacity;
}

bool SeqQueueCyFull(SeqCyQueue *Q)
{
	assert(Q != NULL);
	return ((Q->tail + 1) % Q->capacity) == Q->front;
}
bool SeqQueueCyEmpty(SeqCyQueue *Q)
{
	return Q->front == Q->tail;
}
void SeqQueueCyInit(SeqCyQueue *Q,int sz)
{
	assert(Q != NULL);
	Q->capacity = sz > DEFAULT_QUEUE_SIZE ? sz : DEFAULT_QUEUE_SIZE;
	Q->base = (DataType*)malloc(sizeof(DataType)*Q->capacity);
	Q->front = Q->tail = 0;
}
void SeqQueueCyEn(SeqCyQueue *Q, DataType x)
{
	if (SeqQueueCyFull(Q))
	{
		printf("循环队列已满，%d 不能入队.\n", x);
		return;
	}
	Q->base[Q->tail] = x;
	Q->tail = (Q->tail + 1) % Q->capacity;
}
DataType SeqQueueCyFront(SeqCyQueue *Q)
{
	assert(Q != NULL);
	if (SeqQueueCyEmpty(Q))
	{
		printf("队列已空，不能去队头元素.\n");
		return;
	}
	return Q->base[Q->front];
}
