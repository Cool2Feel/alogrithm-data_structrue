//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////������Ҫ��������������������,������ȫΪ������ʱ��,����ܺý��������,��������а�������,�Ƿ�Ӧ�ð���ĳ������,
////�������Աߵ��������ֲ����أ�����:{6,-3,-2,7,-15,1,2,2},����������������Ϊ8(�ӵ�0����ʼ,����3��Ϊֹ)����᲻�ᱻ������ס��
//
//// �����Ǽ���һ������ʱ���ͻ����ӣ������Ǽ���һ������ʱ���ͻ���١������ǰ�õ��ĺ��Ǹ�������
////��ô������ڽ��������ۼ���Ӧ���������������㣬��Ȼ�Ļ��������������ٽ������ĺ�
//class Solution {
//public:
//	int FindGreatestSumOfSubArray(vector<int> array) {
//		if (array.size() == 0) return 0;
//		int sum1 = array[0];
//		int temp = array[0];
//		for (int i = 1; i<array.size(); i++){
//			//tempΪ��ǰ����ĺͣ������С��0ʱ������ѡ��������
//			//ֻҪ�и�����temp�ͻ���٣���ʱsum1>temp;������Ϊ����ʱ��temp���¸�ֵ��ֱ����������ʱ���ֿ�ʼ���
//			temp = (temp<0 ? array[i] : array[i] + temp);
//			sum1 = max(sum1, temp);//sum1��ʱ��õĺͣ���������б�sum1������ֵ����ȡ����֮
//		}
//		return sum1;
//	}
//};

//Cʵ��

//���룺
//�����ж�������, ÿ��������ݰ������С�
//��һ��Ϊһ������n(0 <= n <= 100000), ��n = 0ʱ, �������������ȥ��һ�а���n������(���Ǳ�֤������������[-1000, 1000])��
//�����
//��Ӧÿ�����԰���, ��Ҫ���3����������һ��, �ֱ��ʾ���������������͡����������ĵ�һ��Ԫ�ص��±�����һ��Ԫ�ص��±ꡣ
//���Ǵ��ڶ��������, �������ʼԪ���±���С���Ǹ���
//
//#include<stdio.h>
//#include<stdlib.h>
//void main()
//{
//	int curSum, maxSum, start, end,n;
//	int index=0;
//	int *pData;
//	scanf("%d",&n);
//	while (n)
//	{
//		pData = (int*)malloc(sizeof(int)*n);
//		for (size_t i = 0; i < n; i++)
//		{
//			scanf("%d", &pData[i]);
//		}
//		curSum = maxSum = pData[0];
//		start = end = 0;
//		for (size_t i = 1; i < n; i++)
//		{
//			if (curSum<0)
//			{
//				curSum = 0;
//				index=i;//��¼��ʱ���¿�ʼ��λ��
//			}
//			curSum += pData[i];
//			if (curSum>maxSum)
//			{
//				maxSum = curSum;
//				end = i;//������λ��
//				start = index;//��ʼ��λ��
//			}
//		}
//		printf("%d,%d,%d\n",maxSum,start,end);
//		free(pData);
//		scanf("%d",&n);//��ʼ����ѭ��
//	}
//}

//C++
#include<iostream>
using namespace std;
void main()
{
	int curSum, maxSum, start, end, n;
	int index=0;
	cin >> n;
	while (n)
	{
		int *pData = new int[n];//��ȷ����Сʱ�����ڴ����������
		for (size_t i = 0; i < n; i++)
		{
			cin >> pData[i];
		}
		curSum = maxSum = pData[0];
		start = end = 0;
		for (size_t i = 1; i < n; i++)
		{
			if (curSum<0)
			{
				curSum = 0;
				index = i;//��¼��ʱ���¿�ʼ��λ��
			}
			curSum += pData[i];
			if (curSum>maxSum)
			{
				maxSum = curSum;
				end = i;//������λ��
				start = index;//��ʼ��λ�ã���û�о���curSum<0ʱ��indexҪ��ʼ��
			}
		}
		cout << maxSum << "  " << start << "  " << end << endl;
		delete[] pData;
		cin>>n;//��ʼ����ѭ��
	}
}