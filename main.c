#include <stdio.h>

struct SinhVien {
    char tenSV[50];
    int maSV;
    float diemTB;
};

void nhapDanhSachSinhVien(struct SinhVien* SV) 
{
    printf("Nhap ten SV: ");
    scanf("%s",&SV->tenSV);
    printf("Ma SV: ");
    scanf("%d",&SV->maSV);
    printf("Diem TB: ");
    scanf("%f",&SV->diemTB);
}

void hienThiDanhSachSinhVien(struct SinhVien* SV) 
{
    printf("Ten SV: %s\n",SV->tenSV);
    printf("Ma SV: %d\n",SV->maSV);
    printf("Diem TB: %0.2f\n",SV->diemTB);
}

int main() {
    int n;
    struct SinhVien sv[100];
    printf("Nhap so luong SV: "); 
    scanf("%d",&n);
    for(int i=1;i<=n;i++) 
    {     
        printf("\nNHAP THONG TIN SINH VIEN THU: %d\n",i);
        nhapDanhSachSinhVien(&sv[i]);  
    }
    printf("--------------------------");
    for(int i=1;i<=n;i++) 
    {
        printf("\nSINH VIEN THU: %d\n",i);
        hienThiDanhSachSinhVien(&sv[i]);
    }        
    return 0;
}