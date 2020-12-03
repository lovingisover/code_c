int* maxSlidingWindow(int* nums, int numsSize, int k, int* returnSize){
	if (nums == NULL || numsSize == 0){
		*returnSize = 0;//���μ��
		return NULL;
	}
	int size = ((numsSize - k + 1) > 0) ? (numsSize - k + 1) : 1;
	//������ڳ��� k ���� numsSize �������軬��
	int first = (size > 1) ? (k - 1) : (numsSize - 1);
	int max = Max(nums, 0, first);//ȡ��һ�����ڵ����ֵ
	int *res = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size - 1; ++i){
		res[i] = max;//��ֵ
		if (nums[i] < max){//������ֵ���ڻ��������ڣ�ֻ��Ƚ��ƶ�����һλ��ԭ�ȵ����ֵ
			max = (nums[k] > max) ? nums[k] : max;
		}
		else {//�������ֵ���ڻ��������ڣ���Ҫ���¼��㻬�������ڵ����ֵ
			max = Max(nums, i + 1, k);
		}
		++k;//���һ�������һ��
	}
	res[size - 1] = max;//�������һ��
	*returnSize = size;
	return res;
}

int Max(int *arr, int left, int right){//Ѱ�����������ֵ
	int max = arr[left];
	for (; left <= right; ++left){
		max = (arr[left] > max) ? arr[left] : max;
	}
	return max;
}
