#include <stdio.h>
#include "khaibao.h"
#include <string.h>
#include <stdlib.h>

int _strlen(char s[100])
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return i;
}

void _strlwrr(char s[100])
{
	int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] + 32;
		i++;
	}
}
//kiem tra mang con
int StrStr(char s1[100], char s2[100])
{
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);
	for (int i = 0; i <= len1 - len2; i++)
	{
		bool laCon = true;
		for (int j = 0; i < len2; j++)
		{
			if (s2[j] != s1[i + j])
			{
				laCon = false;
				break;
			}
		}
		if (laCon) return i;
	}
	return -1;
}

int main()
{

	char a[100] = "1234";
	char b[100] = "-1545434543";
	char c[100] = "12.23456";

	int songuyen = atoi(a);
	long kieulong = atol(b);
	float sothuc = atof(c);

	printf("%d\n" "%d\n" "%.2f\n", songuyen, kieulong, sothuc);

	int d = 1234;
	long e = -1545434543;
	double f = 12.23456;

	char buffer[50];

	itoa(d, buffer, 10);
	printf("%s\n", buffer);
	ltoa(e, buffer, 10);
	printf("%s\n", buffer);
	ultoa(f, buffer, 10);
	printf("%s\n", buffer);


	/*int a[10][20];
	int n, m;
	printf("Nhap so dong: ");
	scanf_s("%d", &n);
	printf("Nhap so cot: ");
	scanf_s("%d", &m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("Nhap a[%d][%d]:", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}*/


	//char s[30];
	//char s2[30];
	//printf("Nhap chuoi 1 vao: ");
	//gets_s(s);
	//printf("Nhap chuoi 2 vao: ");
	//gets_sgets_s(s2);
	//printf("%s", s);
	//char* kq = strstr(s, "ABC");
	//_strlwrr(s);
	//int kq = StrStr(s, s2);
	//printf("Ket qua la %d\n", kq);
	//printf("Chuoi la: %s", s);
	/*if (kq != NULL)
	{
		int viTri = kq - s;
		printf("Co xuat hien tai vi tri %d", viTri);
	}
	else
	{
		printf("Khong xuat hien");
	}*/

	
}
//int main()
//{
//	int x;
//	int n, h;
//	int a[100];
//	int b[100];
//	//int y;
//	//printf("Nhap x: ");
//	//scanf_s("%d", &x);
//	//printf("Nhap n: ");
//	//scanf_s("%d", &n);
//	//printf("Nhap y: ");
//	//scanf_s("%d", &y);
//	//Bai_65(x, n, y);
//	Nhapmang(a, n);
//	Nhapmang(b, h);
//	//double kq = TrungBinhCongSNT(a, n);
//	//Xuatmang(a, n);
//	//printf("\nSo nguyen to nho hon 100 la: %.2f", kq);
//	demMangCon(a, n, b, h);
//	//double kq = Bai_40(x, n);
//	//double kq = Bai_35(x);
//	//int kq = Bai_23(x);
//	//printf("So dao nguoc la: ");
//	/*int kq = Bai_50(x);
//	printf("So dao nguoc la: %d", kq);*/
//	//printf("Dap an la: %.2f", kq);
//	//printf("\nTong cac uoc so la: %d", kq);
//	
//}
/*HOC*/
//int main() {
//	printf("Hello World!");
//	return 0;
//}
//int F(int x)
//{
//	int kq;
//	if (x >= 0)
//	{
//		kq = x;
//	}
//	else
//	{
//		kq = -x;
//	}
//	return kq;
//}
//int TimMax(int a, int b)
//{
//	int max = a;
//	if (max < b)
//	{
//		max = b;
//	}
//	return max;
//}
//int main()
//{
//	int n;
//	printf("nhap n: ");
//	scanf_s("%d", &n);
//	n = F(n);
//	//int kq = TimMax(n, 20);
//	printf("tri tuyet doi la: %d", n);
//}
//int main()
//{
//	
//	//#define PI 3.14159
////	float r = 1.25;
////	float dienTich;
////	dienTich = PI * r * r;
////	printf("Ket qua la %f", dienTich);
////	return 0;
//	/*short Delta = 9;
//	printf("Kich thuoc bien Delta = %d\n", sizeof(Delta));
//	printf("Kich thuoc bien int = %d\n", sizeof(int));
//	printf("Kich thuoc bien long = %d\n", sizeof(long));
//	printf("Kich thuoc bien float = %d\n", sizeof(float));
//	printf("Kich thuoc bien double = %d\n", sizeof(double));
//	printf("Kich thuoc bien char = %d\n", sizeof(char));*/
//	/*int x, n;
//	printf("Nhap vao so x: ");
//	scanf_s("%d", &x);
//	printf("Nhap vao so luy thua: ");
//	scanf_s("%d", &n);
//	if (n == 0)
//	{
//		printf("Dap an la: 1");
//	}
//	else if (x > 0)
//	{
//
//	}
//	else
//	{
//
//	}*/
//	//So lon nhat
//	/*int a, b, c;
//	printf("Nhap a: ");
//	scanf_s("%d", &a);
//	printf("Nhap b: ");
//	scanf_s("%d", &b);
//	printf("Nhap c: ");
//	scanf_s("%d", &c);
//	int max = a;
//	if (b > max)
//	{
//		max = b;
//	}
//	if (c > max)
//	{
//		max = c;
//	}
//	printf("So ln nhat la: %d", max);*/
//	// Tich trai dau cung dau
//	/*int a, b;
//	printf("Nhap a: ");
//	scanf_s("%d", &a);
//	printf("Nhap b: ");
//	scanf_s("%d", &b);
//	if(a*b > 0)
//	{
//		printf("a va b cung dau");
//	}
//	else 
//	{
//		printf("a va b trai dau");
//	}*/
//	/*int a, b;
//	printf("Nhap a: ");
//	scanf_s("%d", &a);
//	printf("Nhap b: ");
//	scanf_s("%d", &b);
//	
//	if (a == 0)
//	{
//		if (b != 0)
//		{
//			printf("Phuong trinh vo nghiem");
//		}
//		if (b == 0)
//		{
//			printf("Phuong trinh vo so nghiem");
//		}
//	}
//	else
//	{
//		double ketqua = - 1.0 * b / a;
//		printf("Phuong trinh %dX + %d co mot nghiem duy nhat la: %0.2f", a, b, ketqua);
//	}*/
//	//Phuong trinh bac 2
//	/*int a, b, c;
//	printf("Nhap a: ");
//	scanf_s("%d", &a);
//	printf("Nhap b: ");
//	scanf_s("%d", &b);
//	printf("Nhap c: ");
//	scanf_s("%d", &c);
//	if (a != 0)
//	{
//		int delta = pow(b, 2) - (4 * a * c);
//		if (delta == 0)
//		{
//			double nghiem;
//			nghiem = - b / (2.0 * a);
//			printf("Phuong trinh co 1 nghiem kep x1 = x2 = %0.2f", nghiem);
//		}
//		else if (delta < 0)
//		{
//			printf("Phuong trinh vo nghiem");
//		}
//		else
//		{
//			double n1, n2;
//			n1 = (-b + sqrt(delta)) / (2.0 * a);
//			n2 = (-b - sqrt(delta)) / (2.0 * a);
//			printf("Phuong trinh co 2 nghiem phan biet la: %0.2f va %0.2f ", n1, n2);
//		}
//	}
//	else
//	{
//		printf("Phuong tirnh suy bien");
//	}*/
//	//Swwitch case
//	/*int thang;
//	printf("Nhap gia tri thang: ");
//	scanf_s("%d", &thang);
//
//
//	int n;
//	printf("Nhap gia tri n: ");
//	scanf_s("%d", &n);
//	int i = 1;
//	while (i <= n)
//	{
//		printf("%5d", i);
//		i = i + 1;
//	}*/
//	/*int n;
//	printf("Nhap gia tri n: ");
//	scanf_s("%d", &n);
//	int i = 1;
//	int s = 0;
//	while (i <= n)
//	{
//		int s = s + i;
//		i = i + 1;
//	}
//	printf("%5d", i);*/
///////HIEU SAI DE ROI MA NOI OI :))))
//	//Tính S(n) = x + x ^ 2 / 1 + 2 + x ^ 3 / (1 + 2 + 3) + … + x ^ n / (1 + 2 + 3 + …. + N)
//int x, n;
//int i = 1;
//double kq = 0.0;
//int a = 0;
//printf("Nhap x: ");
//scanf_s("%d", &x);
//printf("Nhap n: ");
//scanf_s("%d", &n);
//while (i <= n)
//{
//	a += i;
//	kq += pow(x, ((1.0 * i )/ a));
//	i += 1;
//}
//printf("S(n) la: %.2f", kq);
//	
//int a[100];
// 08/03/2025
//int n;
////Nhap mang
//printf("Nhap so ljuong phan tu: ");
//scanf_s("%d", &n);
//for (int i = 0; i < n; i++)
//{
//	printf("Nhap a[%d]: ", i);
//	scanf_s("%d", &a[i]);
//}
////Tinh tong cac phan tu
//int s = 0;
//for (int i = 0; i < n; i++)
//{
//	s = s + a[i];
//}
////Xuat mang
//for (int i = 0; i < n; i++)
//{
//	printf("%5d", a[i]);
//}
//printf("\nTong cac phan tu la %d: ", s);
//	
//}
// 
/*BAI TAP*/
//Bài 1: Tính S(n) = 1 + 2 + 3 + … + n
/*
 int n;
	int tinh = 0;
	printf("Nhap so n: ");
	scanf_s("%d", &n);
	if (n <= 0)
	{
		printf("Nhap so lon hon 0!");
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			tinh = tinh + i;
		}
		printf("Ket qua la: %d", tinh);
	}
	return 0;
	*/
//Bài 2: Tính S(n) = 1 ^ 2 + 2 ^ 2 + … + n ^ 2
/*
	int n;
	int tinh = 0;
	printf("Nhap so n: ");
	scanf_s("%d", &n);
	if (n <= 0)
	{
		printf("Nhap so lon hon 0!");
	}
	else
	{
		int tinh3;
		for (int i = 1; i <= n; i++)
		{
			tinh += i * i;
		}
		printf("Ket qua la: %d", tinh);
	}
*/
//Bài 3 : Tính S(n) = 1 +½ + 1 / 3 + … + 1 / n
/*
	int n;
	float tinh = 0.0;
	printf("Nhap vao so n: ");
	scanf_s("%d", &n);
	if (n <= 0)
	{
		printf("Nhap so lon hon 0!");
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			tinh = 1.0 * 1 / i;
		}
		printf("Ket qua cua %d là: %10.2f", n, tinh);
	}
*/
//Bài 4 : Tính S(n) = ½ + ¼ + … + 1 / 2n
/*
	int n;
	float tinh = 0.0;
	printf("Nhap so n: ");
	scanf_s("%d", &n);
	if (n <= 0)
	{
		printf("Nhap so lon hon 0!");
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			tinh += 1.0 / (2 * i);
		}
		printf("Dap an la: %10.2f", tinh);
	}
	return 0;
*/
//Bài 5 : Tính S(n) = 1 + 1 / 3 + 1 / 5 + … + 1 / (2n + 1)
/*
	int n;
	float tinh = 0.0;
	printf("Nhap so n: ");
	scanf_s("%d", &n);
	if (n < 0)
	{
		printf("Nhap so lon hon hoac bang 0");
	}
	else
	{
		for (int i = 0; i <= n; i++)
		{
			tinh += 1.0 / ((1.0 * 2 * i) + 1);
		}
		printf("Dap an la: %10.2f", tinh);
	}
*/
//Bài 6 : Tính S(n) = 1 / 1×2 + 1 / 2×3 + … + 1 / n x(n + 1)
/*
	int n;
	float tinh = 0.0;
	printf("Nhap so n: ");
	scanf_s("%d", &n);
	if (n <= 0)
	{
		printf("Nhap so lon hon 0");
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			tinh += 1.0 / (i * (i + 1));
		}
		printf("Dap an la: %10.2f", tinh);
	}
	return 0;
/*/ 
//Bài 7 : Tính S(n) = ½ + 2 / 3 + ¾ + …. + n / n + 1
/*
	int n;
	float tinh = 0.0;
	printf("Nhap vao so n: ");
	scanf_s("%d", &n);
	if (n <= 0)
	{
		printf("Nhap so lon hon 0");
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			tinh += 1.0 * i / (i + 1);
		}
		printf("Dap an la: %10.2f", tinh);
	}
	return 0;
*/
//Bài 8 : Tính S(n) = ½ + ¾ + 5 / 6 + … + 2n + 1 / 2n + 2
/*
	int n;
	float tinh = 0.0;
	printf("Nhap vao so n: ");
	scanf_s("%d", &n);
	if (n < 0)
	{
		printf("Nhap so lon hon 0");
	}
	else
	{
		for (int i = 0; i <= n; i++)
		{
			tinh += (1.0 * ((2 * i) + 1)) / ((2 * i) + 2);
		}
		printf("Dap an la: %10.2f", tinh);
	}
	return 0;
*/
//Bài 9 : Tính T(n) = 1 x 2 x 3…x N
/*
	int n;
	printf("Nhap vao so n: ");
	scanf_s("%d", &n);
	if (n <= 0)
	{
		printf("Nhap so lon hon 0");
	}
	else
	{
		//neu dat tinh la 0 thi luc no nhan voi i se bang 0 voi moi i nen phai chuyen thanh 1
		int tinh = 1;
		for(int i = 1; i <= n; i++)
		{
			tinh *= i;
		}
		printf("Dap an la %d", tinh);
	}
*/
//Bài 10 : Tính T(x, n) = x ^ n
/*
	int x, n;
	int kq = 0;
	int a = 1;
	printf("Nhap x: ");
	scanf_s("%d", &x);
	printf("Nhap n: ");
	scanf_s("%d", &n);
	if (n == 0)
	{
		kq = 1;
	}
	else
	{
		int i = 1;
		while(i <= n)
		{
			kq = a * x;
			a = kq;
			i += 1;
		}
	}
	printf("%d ^ %d = %d", x, n, kq);
*/
//Bài 11: Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N
/*
	int n;
	int kq = 0;
	int a = 1;
	printf("Nhap n: ");
	scanf_s("%d", &n);
	if (n <= 0)
	{
		printf("Nhap so lon hon 0!");
	}
	else
	{
		int i = 1;
		while (i <= n)
		{
			a *= i;
			kq += a;
			i += 1;
		}
		printf("Ket qua la: %d", kq);
	}
*/
//Bài 12 : Tính S(n) = x + x ^ 2 + x ^ 3 + … + x ^ n
/*
	int x, n;
	int i = 1;
	int kq = 0;
	printf("Nhap vao so x: ");
	scanf_s("%d", &x);
	printf("Nhap vao so n: ");
	scanf_s("%d", &n);
	while (i <= n)
	{
		kq += pow(x, i);
		i += 1;
	} 
	printf("S(n) la: %d", kq);
*/
//Bài 13 : Tính S(n) = x ^ 2 + x ^ 4 + … + x ^ 2n
/*
	int x, n;
	int i = 1;
	int kq = 0;
	printf("Nhap vao so x: ");
	scanf_s("%d", &x);
	printf("Nhap vao so n: ");
	scanf_s("%d", &n);
	while (i <= n)
	{
		kq += pow(x, i * 2);
		i += 1;
	}
	printf("S(n) la: %d", kq);
*/
//Bài 14 : Tính S(n) = x + x ^ 3 + x ^ 5 + … + x ^ 2n + 1
/*
	int x, n;
	int i = 0;
	int kq = 0;
	printf("Nhap vao so x: ");
	scanf_s("%d", &x);
	printf("Nhap vao so n: ");
	scanf_s("%d", &n);
	while (i <= n)
	{
		kq += pow(x, (i * 2) + 1);
		i += 1;
	}
	printf("S(n) la: %d", kq);
*/
//Bài 15 : Tính S(n) = 1 / 1 + 1 / (1 + 2) + 1 / (1 + 2 + 3) + ….. + 1 / (1 + 2 + 3 + …. + N)
/*
	int n;
	int i = 1;
	double kq = 0.0;
	int a = 0;
	printf("Nhap n: ");
	scanf_s("%d", &n);
	while (i <= n)
	{
		a += i;
		kq += (1.0 / a);
		i += 1;
	}
	printf("S(n) la: %.2f", kq);
*/
//Bài 16 : Tính S(n) = x + x ^ 2 / 1 + 2 + x ^ 3 / (1 + 2 + 3) + … + x ^ n / (1 + 2 + 3 + …. + N)

//Bài 17 : Tính S(n) = x + x ^ 2 / 2!+ x ^ 3 / 3!+ … + x ^ n / N!

