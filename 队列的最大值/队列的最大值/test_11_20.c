#define MAX_SIZE 99999

typedef struct
{
	int Data[MAX_SIZE];
	int head;
	int rear;
	int Max_data;
} MaxQueue;


MaxQueue* maxQueueCreate()
{
	MaxQueue *obj = (MaxQueue*)malloc(sizeof(MaxQueue));
	obj->head = 0;
	obj->rear = 0;
	obj->Max_data = 0;
	return obj;

}

int maxQueueMax_value(MaxQueue* obj)
{
	if (obj->head == obj->rear)
	{
		return -1;
	}
	obj->Max_data = 0;
	for (int i = obj->head; i%MAX_SIZE < obj->rear; ++i)
	{
		obj->Max_data = obj->Max_data > obj->Data[i] ? obj->Max_data : obj->Data[i];
	}
	return obj->Max_data;
}

void maxQueuePush_back(MaxQueue* obj, int value)
{
	obj->Data[obj->rear] = value;
	obj->rear = (obj->rear + 1) % MAX_SIZE;
}

int maxQueuePop_front(MaxQueue* obj)
{
	if (obj->head == obj->rear)
	{
		return -1;
	}
	int temp = obj->Data[obj->head];
	obj->head = (obj->head + 1) % MAX_SIZE;
	return temp;
}

void maxQueueFree(MaxQueue* obj)
{
	//free(Data);
	free(obj);
}

/**
* Your MaxQueue struct will be instantiated and called as such:
* MaxQueue* obj = maxQueueCreate();
* int param_1 = maxQueueMax_value(obj);

* maxQueuePush_back(obj, value);

* int param_3 = maxQueuePop_front(obj);

* maxQueueFree(obj);
*/