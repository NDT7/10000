/*
#include<stdio.h>
void hamNhap(int n)
{
	printf(" Nhap vao N : ");
	scanf("%d", &n);
}

void inDauSao(int &n)
{

	for(int i = 0; i<n; i++)
	{
		printf(" *  ");
    }
}

int main()
{
	//int n = 0;
	hamNhap(0);
	inDauSao(int $n);
	return 0;
}


#include<stdio.h>
void indausao(int N) {

	for(int i=0;i>N;i++){
		printf(" * ");
		}
}
int main(){
	int N;

	printf("nhap so lan in: ");
	scanf("%d",&N);
	indausao(0);
	return 0;
}
*/

#include<stdio.h>

void inDauSao(int n)
{
	
	printf(" Nhap vao N : ");
	scanf("%d", &n);
	for(int i=0; i < n; i++)
	{
		printf(" * ");
    }
}
int main()
{
	inDauSao(0);
	return 0;
}
