
#include <cstdio>
int main() {
	
	int T, num = 1;
	
	scanf_s("%d", &T);
	while (T--)
	{
		long long a, b, c;//������long long �洢abc
		scanf_s("%lld%lld%lld", &a, &b, &c);
		long long t = a + b;
		bool flag;
		if (a > 0 && b > 0 && t < 0)	flag = true; //�����
		else if (a < 0 && b < 0 && t >= 0)	flag = false;//�����
		else if (t > c)	flag = true;  //δ���
		else flag = false;
		
		if (flag) printf("Case #%d: true\n", num++);
		else printf("Case #%d: false\n", num++);

	}
	return 0;
}

