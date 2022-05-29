#include <stdio.h>
#include <string.h>
typedef struct node
{
	char date;
	int weight;
	struct node *left;
	struct node *right;
	struct node *parent;
} huffma;
void time(char a[], int n) //对一段文本中的字母出现的个数进行统计
{
	struct node Hnode[26];
	for (int i = 0; i < 26; i++)
	{
		Hnode[i].weight = 0;
	}
	for (int j = 0; j < n; j++)
	{
		Hnode[a[j] - 'a'].weight++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (Hnode[i].weight > 0)
		{
			printf("%c出现了", 'a' + i);
			printf("%d次\n", Hnode[i].weight);
		}
	}
}
void paixv(char a[], int n) //对一段文本的权重排序
{
	int i, j;
	struct node Hnode[26];
	struct node bnode;
	printf("相应结点的名称是\n");
	for (i = 0; i <= 25; i++)
	{
		Hnode[i].date = 'a' + i;
		printf("%c", Hnode[i].date);
	}
	for (i = 0; i < 25; i++)
		for (j = 0; j < 25 - i; j++)
		{
			{
				if (Hnode[j].weight > Hnode[j + 1].weight)
				{
					bnode = Hnode[j];
					Hnode[j] = Hnode[j + 1];
					Hnode[j + 1] = bnode;
				}
			}
		}
	printf("\n");
	printf("权重排序后相应结点的顺序是\n");
	for (j = 0; j <= 25; j++)
	{
		if (Hnode[j].weight > 0)
			printf("%c", Hnode[j].date);
	}
	printf("\n");
}
void fuzhi()
{
	int i;
	int count = 0;
	huffma Hnode[26];
	huffma huff[26];


	for (i = 0; i < 26; i++){
		huff[i].date = '\0';
		huff[i].weight = 0;
	}

	for (i = 0; i < 26; i++)
		if (Hnode[i].weight > 0)
		{
			huff[count].date = Hnode[i].date;
			huff[count].weight = Hnode[i].weight;
			count = count + 1;
		}


	for (i = 0; i < count; i++)
	{
		printf("%d %c \n", huff[i].weight, huff[i].date);
	}
}
void creathuffma(huffma *head) //构建哈夫曼树
{
	struct node huff[26];
	int add;
	add = huff[0].weight + huff[1].weight;
	huff[11].weight = add;
	huff[11].right = &huff[0];
	huff[11].left = &huff[1];
	huff[12].weight = huff[11].weight + huff[2].weight;
	huff[12].right = &huff[2];
	huff[12].left = &huff[11];
	huff[13].weight = huff[12].weight + huff[3].weight;
	huff[13].right = &huff[3];
	huff[13].left = &huff[12];
	huff[14].weight = huff[13].weight + huff[4].weight;
	huff[14].right = &huff[4];
	huff[14].left = &huff[13];
	huff[15].weight = huff[14].weight + huff[5].weight;
	huff[15].right = &huff[5];
	huff[15].left = &huff[14];
	huff[16].weight = huff[15].weight + huff[6].weight;
	huff[16].right = &huff[6];
	huff[16].left = &huff[15];
	huff[17].weight = huff[16].weight + huff[7].weight;
	huff[17].right = &huff[7];
	huff[17].left = &huff[16];
	huff[18].weight = huff[17].weight + huff[8].weight;
	huff[18].right = &huff[8];
	huff[18].left = &huff[17];
	huff[19].weight = huff[18].weight + huff[9].weight;
	huff[19].right = &huff[9];
	huff[19].left = &huff[18];
	head = &huff[19];
}
void xxbl(struct node *head) //先序遍历函数
{
	if (head == NULL)
		return;
	printf("%d%c", head->weight, head->date);
	xxbl(head->left);
	xxbl(head->right);
}

int main()
{
	char a[100];
	huffma *head;
	printf("请输入一段文本\n");
	// scanf("%s", a);
	//time(a, 100);
	//paixv(a, 100);
	fuzhi();
	//creathuffma(head);
	//xxbl(head);
	return 0;
}