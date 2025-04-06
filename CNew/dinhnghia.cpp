#include "khaibao.h"
#include <math.h>
#include <stdio.h>
double Bai_16(int a, int b)
{
	double kq = 0.0;
	int m = 0;
	for (int i = 1; i <= b; i++)
	{
		m += i;
		kq += 1.0 * pow(a, i)/m;
	}
	return kq;
}

double Bai_17(int a, int b)
{
	double kq = 0.0;
	int m = 1;
	for (int i = 1; i <= b; i++)
	{
		m *= i;
		kq += 1.0 * pow(a, i) / m;
	}
	return kq;
}

double Bai_18(int a, int b)
{
	double kq = 1.0;
	for (int i = 1; i <= b; i++) 
	{
		int m = 1;
		for (int j = 1; j <= 2 * i; j++)
		{
			m *= j; 
		}
		kq += 1.0 * pow(a, i * 2) / m;
	}
	return kq;
}

double Bai_19(int a, int b)
{
	double kq = 1.0;
	for (int i = 0; i <= b; i++)
	{
		int m = 1;
		for (int j = 1; j <= (2 * i) + 1; j++)
		{
			m *= j;
		}
		kq += 1.0 * pow(a, (i * 2) + 1) / m;
	}
	return kq;
}

void Bai_20(int a)
{
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			printf("+- %d\t", i);
		}
	}
}

void Bai_21(int a)
{
	int kq = 0;
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			printf("+- %d\t", i);
			kq += i;
		}
	}
	printf("\nTong cac uoc so la: %d", kq);
}

void Bai_22(int a)
{
	int kq = 1;
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			printf("+- %d\t", i);
			kq *= i;
		}
	}
	printf("\nTich cac uoc so la: %d", kq);
}

int Bai_23(int a)
{
	int count = 0;
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			printf("+- %d\t", i);
			count++;
		}
	}
	return count;
}

void Bai_24(int a)
{
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			if (i % 2 != 0)
			{
				printf("+- %d\t", i);
			}
		}
	}
}

void Bai_25(int a)
{
	int kq = 0;
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			if (i % 2 == 0)
			{
				printf("+- %d\t", i);
				kq += i;
			}
		}
	}
	printf("\nTong cac uoc so chan la: %d", kq);
}

void Bai_26(int a)
{
	int kq = 0;
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			if (i % 2 != 0)
			{
				printf("+- %d\t", i);
				kq += i;
			}
		}
	}
	printf("\nTong cac uoc so le la: %d", kq);
}

void Bai_27(int a)
{
	int count = 0;
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			if (i % 2 == 0)
			{
				printf("+- %d\t", i);
				count++;
			}
		}
	}
	printf("\nSo luong uoc so chan la: %d", count);
}

void Bai_28(int a)
{
	int kq = 0;
	for (int i = 1; i < a; i++)
	{
		if (a % i == 0)
		{
			printf("+- %d\t", i);
			kq += i;
		}
	}
	printf("\nTong cac uoc so nho hon chinh no la: %d", kq);
}

void Bai_29(int a)
{
	int max = 0;
	for (int i = 1; i < a; i++)
	{
		if (a % i == 0)
		{
			if (i % 2 != 0)
			{
				if (max < i)
				{
					max = i;
				}
			}
		}
	}
	printf("\nUoc so le lon nhat la: %d", max);
}

void Bai_30(int a)
{
	int kq = 0;
	for (int i = 1; i < a; i++)
	{
		if (a % i == 0)
		{
			kq += i;
		}
	}
	if (kq == a)
	{
		printf("\n%d la so hoan hao", kq);
	}
	else
	{
		kq = a;
		printf("\n%d khong la so hoan hao", kq);
	}
}

int Bai_31(int a)
{
	if (a <= 1)
	{
		printf("%d khong la so nguyen to", a);
		return 0;
	}
	else
	{
		for (int i = 2; i <= sqrt(a); i++)
		{
			if (a % i == 0)
			{
				printf("%d khong la so nguyen to", a);
				return;
			}
		}
		printf("%d la so nguyen to", a);
		return 1;
	}
}

void Bai_32(int a)
{
	for (int i = 1; i <= sqrt(a); i++)
	{
		if (pow(i, 2) == a)
		{
			printf("%d la so chinh phuong", a);
			return;
		}
	}
	printf("%d khong la so chinh phuong", a);
}

double Bai_33(int a)
{
	double kq = 0.0;
	for (int i = 1; i <= a; i++)
	{
		kq = sqrt(kq + i);
	}
	return kq;
}

double Bai_34(int a)
{
	double kq = 0.0;
	for (int i = 1; i <= a; i++)
	{
		int gt = 1;
		for (int j = 1; j <= i; j++)
		{
			gt *= j;
		}
		kq = sqrt(kq + gt);
	}
	return kq;
}

double Bai_35(int a)
{
	double kq = 0.0;
	for (int i = 1; i <= a; i++)
	{
		kq = pow((kq + i),(1.0/i));
	}
	return kq;
}

double Bai_36(int a)
{
	double kq = 0.0;
	for (int i = 1; i <= a; i++)
	{
		kq = pow((kq + i), (1.0 / i + 1));
	}
	return kq;
}

double Bai_38(int a)
{
	double kq = 0.0;
	for (int i = 1; i <= a; i++)
	{
		kq = pow((kq + i), (1.0 / i + 1));
	}
	return kq;
}

double Bai_39(int a)
{
	double kq = 0.0;
	for (int i = 1; i <= a; i++)
	{
		int gt = 1;
		for (int j = 1; j <= i; j++)
		{
			gt *= j;
		}
		kq = pow((kq + gt), (1.0 / i + 1));
	}
	return kq;
}

double Bai_40(int a, int b)
{
	double kq = 0.0;
	for (int i = 1; i <= b; i++)
	{
		kq = sqrt(kq + pow(a, i));
	}
	return kq;
}

bool KiemTraNguyenTo(int n)
{
	if (n <= 1)
	{
		return  false;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
		return true;
	}
}

int TinhTongNguyenTo(int n)
{
	int s = 0;
	for (int i = 2; i < n; i++)
	{
		if (KiemTraNguyenTo(i))
		{
			s = s + i;
		}
		return s;
	}
}

double Bai_41(int a)
{
	int i = 0;
	double kq = 1.0;
	while (i < a)
	{
		kq = 1 / (1 + kq);
		i++;
	}
	printf("Ket qua la: %.2f", kq);
}

int Bai_42(int a)
{
	int s = 1;
	int i = 1;
	while (s + i < a)
	{
		s += i;
		i++;
	}
	printf("K lon nhat la: %d", i - 1);
}

int Bai_43(int a)
{
	int s = a;
	int i = 0;
	while (s > 0)
	{
		s = s / 10;
		i++;
	}
	printf("So luong chu so: %d", i);
}

void Bai_44(int a)
{
	int s = a;
	int kq = 0;
	while (s > 0)
	{
		int s1 = s % 10;
		s = s / 10;
		kq += s1;
	}
	printf("Tong thanh phan la: %d", kq);
}

void Bai_45(int a)
{
	int s = a;
	int kq = 1;
	while (s > 0)
	{
		int s1 = s % 10;
		s = s / 10;
		kq *= s1;
	}
	printf("Tong thanh phan la: %d", kq);
}

void Bai_46(int a)
{
	int s = a;
	int count = 0;
	while (s > 0)
	{
		int s1 = s % 10;
		s = s / 10;
		if (s1 % 2 != 0)
		{
			count++;
		}
	}
	printf("Tong thanh phan la: %d", count);
}

void Bai_47(int a)
{
	int s = a;
	int tongchan = 0;
	while (s > 0)
	{
		int s1 = s % 10;
		s = s / 10;
		if (s1 % 2 == 0)
		{
			tongchan += s1;
		}
	}
	printf("Tong thanh phan la: %d", tongchan);
}

void Bai_48(int a)
{
	int s = a;
	int tongchan = 1;
	while (s > 0)
	{
		int s1 = s % 10;
		s = s / 10;
		if (s1 % 2 != 0)
		{
			tongchan *= s1;
		}
	}
	printf("Tong thanh phan la: %d", tongchan);
}

void Bai_49(int a)
{
	int s = a;
	int kq = 1;
	while (s > 0)
	{
		int s1 = s % 10;
		s = s / 10;
		kq = s1;
	}
	printf("Chu so dau tien la: %d", kq);
}

int Bai_50(int a)
{
	int s = a;
	int kq = 0;
	while (s > 0)
	{
		int s1 = s % 10;
		s = s / 10;
		kq = kq * 10 + s1;
	}
	return kq;
}

void Bai_51(int a)
{
	int s = a;
	int max = 0;
	while (s > 0)
	{
		int s1 = s % 10;
		s = s / 10;
		if (max < s1)
		{
			max = s1;
		}
	}
	printf("Chu so lon nhat la: %d", max);
}

void Bai_52(int a)
{
	int s = a;
	int min = 9;
	while (s > 0)
	{
		int s1 = s % 10;
		s = s / 10;
		if (min > s1)
		{
			min = s1;
		}
	}
	printf("Chu so nho nhat la: %d", min);
}

void Bai_53(int a)
{
	int s = a;
	int max = 0;
	int count = 0;
	while (s > 0)
	{
		int s1 = s % 10;
		s = s / 10;
		if (max < s1)
		{
			max = s1;
			count = 1;
		}
		else if (max == s1)
		{
			count++;
		}
	}
	printf("So luong so lon nhat la: %d", count);
}

void Bai_54(int a)
{
	int s = a;
	int min = 9;
	int count = 0;
	while (s > 0)
	{
		int s1 = s % 10;
		s = s / 10;
		if (min > s1)
		{
			min = s1;
			count = 1;
		}
		else if (min == s1)
		{
			count++;
		}
	}
	printf("So luong so nho nhat la: %d", count);
}

void Bai_55(int a)
{
	int count = 0;
	int count2 = 0;
	while (a > 0)
	{
		int s1 = a % 10;
		a = a / 10;
		if (s1 % 2 != 0)
		{
			count++;
		}
		count2++;
	}
	if (count == count2)
	{
		printf("Tat ca la so le");
	}
	else
	{
		printf("Van con so chan :v");
	}
}

void Bai_56(int a)
{
	int count = 0;
	int count2 = 0;
	while (a > 0)
	{
		int s1 = a % 10;
		a = a / 10;
		if (s1 % 2 == 0)
		{
			count++;
		}
		count2++;
	}
	if (count == count2)
	{
		printf("Tat ca la so chan");
	}
	else
	{
		printf("Van con so le :v");
	}
}

//Bai_50 la so dao nguoc
void Bai_59(int a)
{
	int kq = Bai_50(a);
	if (kq == a)
	{
		printf("Day la so dao nguoc");
	}
	else
	{
		printf("Day khong la so dao nguoc");
	}
}

void Bai_60(int a)
{
	int count = 0;
	while (a > 0)
	{
		int s1 = a % 10;
		a = a / 10;
		int s2 = a % 10;
		if (s1 < s2)
		{
			count++;
		}
	}
	if (count == 0)
	{
		printf("So tang dan tu trai sang phai");
	}
	else
	{
		printf("Khong tang tu trai sang");
	}
}

void Bai_61(int a)
{
	int count = 0;
	while (a > 0)
	{
		int s1 = a % 10;
		a = a / 10;
		int s2 = a % 10;
		if (s1 > s2)
		{
			count++;
		}
	}
	if (count == 1)
	{
		printf("So giam dan tu trai sang phai");
	}
	else
	{
		printf("Khong giam tu trai sang");
	}
}

int Bai_62(int a, int b)
{
	int max = 1;
	int min = (a < b) ? a : b;
	for (int i = 1; i <= min; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			max = i;
		}
	}
	return max;
	//printf("UCLN cua so %d va %d la: %d", a, b, max);
}

void Bai_63(int a, int b)
{
	int ucln = Bai_62(a, b);
	int kq = (a * b) / ucln;
	printf("BCNN la: %d", kq);
}

void Bai_64(int a, int b)
{
	double x;
	if (a == 0)
	{
		printf("a phai khac 0!");
	}
	else
	{
		x = 1.0 * -b / a;
	}
	printf("Dap an PT bac 1 la: %.2f", x);
}

void Bai_65(int a, int b, int c)
{
	double delta;
	if (a == 0)
	{
		printf("a phai khac 0");
	}
	else
	{
		delta = pow(b, 2) - 4 * a * c;
		if (delta < 0)
		{
			printf("Phuong trinh vo nghiem");
		}
		else if (delta == 0)
		{
			printf("Phuong trinh co nghiem kep x1 = x2 = %.2f", 1.0 * -b / 2 * a);
		}
		else
		{
			double x1 = 1.0 * (-b - sqrt(delta)) / (2 * a);
			double x2 = 1.0 * (-b + sqrt(delta)) / (2 * a);
			printf("Phuong trinh co 2 nghiem phan biet la: %2.f va %2.f", x1, x2);
		}
	}
}

void Bai_67(int a, int b)
{
	double kq = 0.0;
	for (int i = 1; i <= b; i++)
	{
		kq += pow(-1, i + 1) * pow(a, i);
	}
	printf("Ket qua la: %d", kq);
}

void Bai_68(int a, int b)
{
	double kq = 0.0;
	for (int i = 1; i <= b; i++)
	{
		kq += pow(-1, i) * pow(a, 2*i);
	}
	printf("Ket qua la: %d", kq);
}

void Bai_69(int a, int b)
{
	double kq = 0.0;
	for (int i = 0; i <= b; i++)
	{
		kq += pow(-1, i) * pow(a, (2 * i) + 1);
	}
	printf("Ket qua la: %d", kq);
}

int Congdon(int a)
{
	int kq = 0;
	for (int i = 1; i <= a; i++)
	{
		kq += i;
	}
	return kq;
}

void Bai_70(int a)
{
	double kq = 0.0;
	for (int i = 1; i <= a; i++)
	{
		int cd = Congdon(i);
		kq += pow(-1, i + 1) / cd;
	}
}

void Bai_71(int a, int b)
{
	double kq = 0.0;
	for (int i = 0; i <= b; i++)
	{
		int cd = Congdon(i);
		kq += pow(-1, i) * pow(a, i/cd);
	}
	printf("Ket qua la: %d", kq);
}

int Giaithua(int a)
{
	int kq = 1;
	if (a == 0)
	{
		return 1;
	}
	else
	{
		for (int i = 1; i <= a; i++)
		{
			kq *= i;
		}
		return kq;
	}
}

void Bai_72(int a, int b)
{
	double kq = 0.0;
	for (int i = 1; i <= b; i++)
	{
		int gt = Giaithua(i);
		kq += pow(-1, i) * pow(a, i / gt);
	}
	printf("Ket qua la: %d", kq);
}

double Bai_73(int a, int b)
{
	double kq = 0.0;
	for (int i = 0; i <= b; i++)
	{
		int gt = Giaithua(2*i);
		kq += pow(-1, i + 1) * pow(a, 2 * i / gt);
	}
	printf("Ket qua la: %d", kq);
}

/// <summary>
/// MANG 1 CHIEU
/// </summary>
/// <param name="a"></param>
/// <param name="n"></param>
void Nhapmang(int a[100], int& n)
{
	printf("Nhap so luong phan tu: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}
}
void Xuatmang(int a[100], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%5d", a[i]);
	}
}
void TbcSNTmang1()
{

}

int GTLN(int a[100], int n)
{
	int maxIndex = 0;
	for (int i = 1; i < n; i++)
	{
		if (a[i] > a[maxIndex])
		{
			maxIndex = i;
		}
	}
	return a[maxIndex];
}

int GTNN(int a[100], int n)
{
	int minIndex = 0;
	for (int i = 1; i < n; i++)
	{
		if (a[i] < a[minIndex])
		{
			minIndex = i;
		}
	}
	return minIndex;
}

int NhoHon2004(int a[100], int n)
{
	int count = 0;
	for (int i = 1; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[i] < 2004)
		{
			count++;
		}
	}
	return count;
}

bool SoNguyenTo(int n)
{
	if (n < 2)
	{
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
//Bai125
int SoNguyenToNhoHon100(int a[100], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 100 && SoNguyenTo(a[i]))
		{
			count++;
		}
	}
	return count;
}

double TongGiaTriAm(const int a[100], int n)
{
	double kq = 0.0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			kq += a[i];
		}
	}
	return kq;
}

double TrungBinhCongSNT(int a[100], int& n)
{
	if (n <= 0) return 0;
	int kq = 0;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (SoNguyenTo(a[i]) == true)
		{
			kq += a[i];
			count ++ ;
		}
	}
	if (count == 0) return 0;
	return 1.0 * kq / count;
}

int SoNguyenToLonNhat(int a[100], int& n)
{
	if (n == 0) return -1; // Kiểm tra mảng rỗng trước

	int maxIndex = -1;

	// Tìm số nguyên tố đầu tiên
	for (int i = 0; i < n; i++)
	{
		if (KiemTraNguyenTo(a[i]))
		{
			maxIndex = i;
			break;
		}
	}

	if (maxIndex == -1) return -1; // Không có số nguyên tố nào

	// Duyệt tiếp để tìm số nguyên tố lớn nhất
	for (int i = maxIndex + 1; i < n; i++)
	{
		if (KiemTraNguyenTo(a[i]) && a[i] > a[maxIndex])
		{
			maxIndex = i;
		}
	}

	return maxIndex; // Trả về vị trí (chứ không phải giá trị)
}

int giaTriAmLonNhat(int a[100], int& n)
{
	if (n == 0) return -1; // Kiểm tra mảng rỗng trước

	int maxIndex = -1;

	// Tìm số nguyên tố đầu tiên
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			maxIndex = i;
			break;
		}
	}

	if (maxIndex == -1) return -1; // Không có số nguyên tố nào

	// Duyệt tiếp để tìm số am nhất
	for (int i = maxIndex + 1; i < n; i++)
	{
		if (a[i]<0 && a[i] > a[maxIndex])
		{
			maxIndex = i;
		}
	}

	return maxIndex;
}

int giaTriAmNhoNhat(int a[100], int& n)
{
	if (n == 0) return -1; // Kiểm tra mảng rỗng trước

	int maxIndex = -1;

	// Tìm số nguyên tố đầu tiên
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			maxIndex = i;
			break;
		}
	}

	if (maxIndex == -1) return -1; // Không có số nguyên tố nào

	// Duyệt tiếp để tìm số am nhất
	for (int i = maxIndex + 1; i < n; i++)
	{
		if (a[i] < 0 && a[i] < a[maxIndex])
		{
			maxIndex = i;
		}
	}

	return maxIndex;
}

int thongKePhanTu(int a[100], int& n)
{
	if (n <= 0) { printf("Mang bi rong roi"); return 0;}
	for (int i = 0; i < n; i++)
	{
		bool KiemtraThongke = true;
		for (int j = 0; j < i; j++)
		{
			if (a[j] == a[i])
			{
				KiemtraThongke = false;
				break;
			}
		}
		if (KiemtraThongke)
		{
			int count = 0;
			for (int j = i; j < n; j++)
			{
				if (a[j] == a[i])
				{
					count++;
				}
			}
			printf("\n%d xuat hien: %d lan", a[i], count);
		}
	}
}

int demMangCon(int a[100], int& n, int b[100], int& h)
{
	if (n <= 0 || h <= 0) { printf("Co mang bi rong roi"); return 0; }
	int count2 = 0;
	for (int i = 0; i <= h - n; i++)
	{
		bool match = true;
		for (int j = 0; j < n; j++)
		{
			if (a[j] != b[i + j])
			{
				match = false;
				break;
			}
		}
		
		if (match == true)
		{
			count2++;
		}
	} 
	printf("Mang con xuat hien %d lan", count2);
}

void sapSepTang(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
}  

void chanPhanTu(int a[], int& n, int x, int k)
{
	if (n <= 0 || k < 0 || k > n) return;
	for (int i = n - 1; i >= k; i++)
	{
		a[i + 1] = a[i];
	}
	a[k] = x;
	n++;
}

void xoaPhanTu(int a[], int& n, int x, int k)
{
	if (n <= 0 || k < 0 || k > n - 1) return;
	for (int i = k; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}