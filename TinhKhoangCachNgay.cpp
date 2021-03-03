#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Day
{
	int ngay;
	int thang;
	int nam;
};

int SoNgay(Day d1, Day d2)
{
	int i, j, kc=0;
	
	//2 NAM KHAC NHAU
	if(d2.nam > d1.nam)
	{
		for(i=d1.nam+1; i<d2.nam; i++)
		{
			if(i % 4 ==0)
			{
				kc = kc + 366;
			}
			else
			{
				kc = kc + 365;
			}
		}
		// THANG BAT DAU
		for(i=d1.thang+1; i<=12; i++ )
		{
			if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
			{
				kc = kc + 31;
			}
			else if(i==4 || i==6 || i==9 || i==11)
			{
				kc = kc + 30;
			}
			else if(i==2)
			{
				if(d1.nam % 4 ==0)
				{
					kc = kc + 29;
				}
				else
				{
					kc = kc + 28;
				}
			}
		}
		//THANG KET THUC
		for(i=1; i<d2.thang; i++)
		{
			if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
			{
				kc = kc + 31;
			}
			else if(i==4 || i==6 || i==9 || i==11)
			{
				kc = kc + 30;
			}
			else if(i==2)
			{
				if(d2.nam % 4 ==0)
				{
					kc = kc + 29;
				}
				else
				{
					kc = kc + 28;
				}
			}
		}
		//NGAY BAT DAU
		if(d1.thang==1 || d1.thang==3 || d1.thang==5 || d1.thang==7 || d1.thang==8 || d1.thang==10 || d1.thang==12)
		{
			kc = kc + 31 - d1.ngay;
		}
		else if(d1.thang==4 || d1.thang==6 || d1.thang==9|| d1.thang==11 )
		{
			kc = kc + 30 - d1.ngay;
		}
		else if(d1.thang==2)
		{
			if(d1.nam % 4 == 0 )
			{
				kc = kc + 29 - d1.ngay;
			}
			else
			{
				kc = kc + 28 - d1.ngay;
			}
		}
		
		kc = kc + d2.ngay;
		
	}
	
	// CUNG NAM KHAC THANG
	if( (d1.nam == d2.nam) && (d1.thang != d2.thang) )
	{
		for(i=d1.thang+1; i<d2.thang; i++)
		{
			if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
			{
				kc = kc + 31;
			}
			else if(i==4 || i==6 || i==9 || i==11)
			{
				kc = kc + 30;
			}
			else if(i==2)
			{
				if(d1.nam % 4 ==0)
				{
					kc = kc + 29;
				}
				else
				{
					kc = kc + 28;
				}
			}
		}
		
		if(d1.thang==1 || d1.thang==3 || d1.thang==5 || d1.thang==7 || d1.thang==8 || d1.thang==10 || d1.thang==12)
		{
			kc = kc + 31 - d1.ngay;
		}
		else if(d1.thang==4 || d1.thang==6 || d1.thang==9|| d1.thang==11 )
		{
			kc = kc + 30 - d1.ngay;
		}
		else if(d1.thang==2)
		{
			if(d1.nam % 4 == 0 )
			{
				kc = kc + 29 - d1.ngay;
			}
			else
			{
				kc = kc + 28 - d1.ngay;
			}
		}
		
		if(d2.thang==1 || d2.thang==3 || d2.thang==5 || d2.thang==7 || d2.thang==8 || d2.thang==10 || d2.thang==12)
		{
			kc = kc + 31 - d2.ngay;
		}
		else if(d2.thang==4 || d2.thang==6 || d2.thang==9|| d2.thang==11 )
		{
			kc = kc + 30 - d2.ngay;
		}
		else if(d2.thang==2)
		{
			if(d2.nam % 4 == 0 )
			{
				kc = kc + 29 - d2.ngay;
			}
			else
			{
				kc = kc + 28 - d2.ngay;
			}
		}
	}
	
	//CUNG NAM CUNG THANG
	if( (d1.nam == d2.nam) && (d1.thang == d2.thang) )
	{
		kc = kc + (d2.ngay - d1.ngay);
	}
	
	return kc;
}

int main(){
	Day d1, d2;
	
	printf("\nNhap ngay bat dau: ");
	scanf("%d/%d/%d",&d1.ngay,&d1.thang,&d1.nam);
	printf("\nNhap ngay ket dau: ");
	scanf("%d/%d/%d",&d2.ngay,&d2.thang,&d2.nam);
	
	printf("\nSo ngay cach nhau: %d",SoNgay(d1,d2));	
	return 0;
}



















