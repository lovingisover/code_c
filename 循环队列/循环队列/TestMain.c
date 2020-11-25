#include"queue.h"


int main()
{
	SeqCyQueue CQ;

	SeqQueueCyInit(&CQ,8);

	SeqQueueCyEn(&CQ, 1);
	SeqQueueCyEn(&CQ, 2);
	SeqQueueCyEn(&CQ, 3);
	SeqQueueCyEn(&CQ, 4);
	SeqQueueCyShow(&CQ);
	SeqQueueCyFront(&CQ);
	SeqQueueCyDe(&CQ);
	SeqQueueCyShow(&CQ);

	SeqQueueCyDestroy(&CQ);
}