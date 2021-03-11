#include<stdio.h>

void Bai134(int a[],int n);
int Bai135(int a[],int n);
int Bai136(int a[],int n);
int Bai137(int a[],int n);
int Bai138(int a[],int n);
int kiemTraSoHoanThien(int n);
int Bai139(int a[],int n);
int Bai140(int a[],int n);
int Bai141(int a[],int n);
int Bai142(int a[],int n);
int Bai143(int a[],int n);
int kiemTraSoNguyenTo(int n);
int Bai144(int a[],int n);
int Bai145(int a[],int n);
int Bai146(int a[],int n);
int Bai147(int a[],int n);
int Bai148(int a[],int n);
int Bai149(int a[],int n);
void tachMangSoAm(int a[],int n,int b[],int &nb);
int Bai150(int a[],int n);
int Bai151(int a[],int n);
int Bai152(int a[],int n);
void tachMangSoChan(int a[],int n,int b[],int &nb);
int Bai153(int a[],int n);
void tachMangSoAmVT(int a[],int n,int b[],int &nb,int vitri[],int &nc);
int Bai154(int a[],int n);

void NhapMang(int *a,int &n)
{
    
    do{
    printf("Nhap so phan tu cua mang (0<n<200 phan tu): ");
    scanf("%d",&n);
    }while(n>200);

    printf("Nhap cac phan tu: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void XuatMang(int *a,int n)
{
    printf("Mang da nhap: ");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}




int main()
{
    int a[200];
    int n;
    NhapMang(a,n);
    XuatMang(a,n);
    //Bai134(a,n);

    /*int b135 = Bai135(a,n);
    printf("\nSo duong dau tien: %d",b135);*/

    /*int b136 = Bai136(a,n);
    printf("\n So chan cuoi cung: %d",b136);*/

   /* int b137 = Bai137(a,n);
    printf("\nvi tri nho nhat: %d",b137);
    printf("\nGia tri: %d",a[b137]);*/

   /* int b138 = Bai138(a,n);
    printf("\nvi tri chan dau tien: %d",b138);
    if(b138 ==-1)
        printf("\nKhong co gia tri chan");
    else
        printf("\nGia tri: %d",a[b138]);*/

    /*int b139 = Bai139(a,n);
    printf("\nvi tri so hoan thien cuoi: %d",b139);
    if(b139==-1)
        printf("\nKhong co gia tri so hoan thien");
    else
        printf("\nGia tri: %d",a[b139]);*/

    /*int b140 = Bai140(a,n);
    printf("\n gia tri duong nho nhat: %d",b140);*/

    /*int b141 = Bai141(a,n);
    printf("\nvi tri duong nho nhat: %d",b141);
    if(b141==-1)
        printf("\nMang khong co gia tri duong");
    else
        printf ("\nGia tri: %d",a[b141]);*/

    /*int b142 = Bai142(a,n);
    printf("\nSo nho nhat: %d",b142);*/

    /*int b143 = Bai143(a,n);
    printf("\n so chan dau tien: %d",b143);*/

    /*int b144 = Bai144(a,n);
    printf("\nSo nguyen do dau tien: %d",b144);*/

    /*int b145 = Bai145(a,n);
    printf("\nSo hoan thien dau tien: %d",b145);*/

    /*int b146 = Bai146(a,n);
    printf("\nGia tri am dau tien: %d",b146);*/

    /*int b147 = Bai147(a,n);
    printf("\ngia tri duong cuoi cung: %d",b147);*/

    /*int b148 = Bai148(a,n);
    printf("\nSo nguyen to cuoi cung: %d",b148);*/

    /*int b149 = Bai149(a,n);
    printf("\nSo hoan thien cuoi cung: %d",b149);*/

    /*int b150 = Bai150(a,n);
    printf("\nso am lon nhat: %d",b150);*/

    /*int b151 = Bai151(a,n);
    printf("\nSo nguyen to lon nhat: %d",b151);*/

    /*int b152 = Bai152(a,n);
    printf("\nSo hoan thien lon nhat: %d",b152);*/

    /*int b153 = Bai153(a,n);
    printf("\n So chan nho nhat: %d",b153);*/

    int b154 = Bai154(a,n);
    printf("\nvi tri so am lon nhat: %d",b154);
    if(b154==-1)
        printf("\nMang khong co gia tri am");
    else
        printf("\nGia tri: %d",a[b154]);
    return 0;


}

/////////////////////////////////***** BAI 134 ***//////////////

void Bai134(int a[],int n) // tim gia tri lon nhat trong mang
{
    int max = a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("\nGia tri max la: %d",max);
}
/////////////////////********** BAI 135 *******///////////

int Bai135(int a[],int n) // tim gia tri duong dau tien
{
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            return a[i];
        }
    }
    return -1;
}
//////////////////******* Bai 136*********//////
int Bai136(int a[],int n) // tim gia tri chan cuoi cung
{
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]%2==0)
            return a[i];
    }
    return -1;
}

//////////////********* BAI 137*********///////
int Bai137(int a[],int n) // tim vi tri cua phan tu nho nhat
{
    int index=0;
    int min =a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            index=i;
        }
    }
    return index;
}
///////////////******* BAI 138 *******//////////////

int Bai138(int a[],int n)// vi tri cua gia tri chan dau tien
{
   int index =-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            return i;
        }
    }
    return -1;
}
//////////******** BAI 139 *******//////////////////////
int Bai139(int a[],int n) // vi tri so hoan thien cuoi cung
{
    for(int i=n-1;i>=0;i--)
    {
        if(kiemTraSoHoanThien(a[i])==1)
            return i;
    }
    return -1;
}

int kiemTraSoHoanThien(int n)
{
    int s=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    if(s==n)
        return 1;
    return 0;
}
////////////********* BAI 140******////////////

int Bai140(int a[],int n) // tim gia tri duong nho nhat
{
    int duongDau = Bai135(a,n);
    for(int i=0;i<n;i++)
    {
        if(a[i]>0 && a[i]<duongDau)
        {
            duongDau=a[i];
        }
    }
    return duongDau;
}

////////////****** BAI 141*******/////////
int Bai141(int a[],int n) //vi tri duong nho nhat
{
    int duongDau = Bai135(a,n);
    int vitri=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0 && a[i]<=duongDau)
        {
            duongDau=a[i];
            vitri =i;
        }
    }
    return vitri;
}
////////////////******** BAI 142********////////////////
int Bai142(int a[],int n) // tim gia tri nho nhat
{
    int min = a[0];
    for(int i=0;i<n;i++)
        {
            if(a[i]<min)
            {
                min=a[i];
            }
        }
    return min;
}

/////////******** Bai 143  *******///////////
int Bai143(int a[],int n) // tim so chan dau tien
{
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
            return a[i];
    }
    return -1;
}
//////////******* BAi 144 ******////////////////////////
int Bai144(int a[],int n)// tim so nguyen to dau tien
{
    for(int i=0;i<n;i++)
    {
        if(kiemTraSoNguyenTo(a[i])==1)
            return a[i];
    }
    return -1;
}

int kiemTraSoNguyenTo(int n)
{
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            dem++;
    }
    if(dem==2)
        return 1;
    return 0;
}
///////////////////////****** BAI 145*******///////////////
int Bai145(int a[],int n) // so hoan thien dau tien
{
    for(int i=0;i<n;i++)
    {
        if(kiemTraSoHoanThien(a[i])==1)
            return a[i];
    }
    return -1;
}

//////////////////////***** BAI 146 ******///////
int Bai146(int a[],int n) // tim gia tri am dau tien
{
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
            return a[i];
    }
    return 1;
}

///////////////****** BAI 147 *******////////
int Bai147(int a[],int n) // tim so duong cuoi cung
{
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]>0)
            {
                return a[i];
            }
    }
    return -1;
}

/////////////////******* BAI 148 **********/////////////////
int Bai148(int a[],int n) // tim so nguyen to cuoi cung
{
    for(int i=n-1;i>=0;i--)
    {
        if(kiemTraSoNguyenTo(a[i])==1)
            return a[i];
    }
    return -1;
}

//////////////*********** BAI 149 *******//////////////
int Bai149(int a[],int n) // tim so hoan thien cuoi cung
{
    for(int i=n-1;i>=0;i--)
    {
        if(kiemTraSoHoanThien(a[i])==1)
            return a[i];
    }
    return -1;
}

///////////********* BAI 150 ******//////////////////
int Bai150(int a[],int n)// tim so am lon nhat
{
    int b[200],nb=0;
    tachMangSoAm(a,n,b,nb);
    int max=b[0];
    for(int i=0;i<nb;i++)
    {
        if(b[i]>max)
            max=b[i];
    }
    if(nb==0)
        return 0;
    return max;
}

void tachMangSoAm(int a[],int n,int b[],int &nb)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            b[nb++] = a[i];
        }
    }
}

//////////////****** BAI 151 *****//////////
int Bai151(int a[],int n)// tim so nguyen to lon nhat
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(kiemTraSoNguyenTo(a[i])==1 && a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}

//////////////********* BAI 152 *******/////////////
int Bai152(int a[],int n) // tim so hoan thien lon nhat
{
    int max=0;
        for(int i=0;i<n;i++)
        {
            if(kiemTraSoHoanThien(a[i])==1 && a[i]>max)
            {
                max=a[i];
            }
        }
        return max;
}
////////////********* BAI 153 ********////////////
int Bai153(int a[],int n) // tim so chan nho nhat
{
    int b[200],nb=0;
    tachMangSoChan(a,n,b,nb);
    int min=b[0];
    for(int i=0;i<nb;i++)
    {
        if(b[i]<min)
            min=b[i];
    }
    if(nb==0)
        return -1;
    return min;
}
void tachMangSoChan(int a[],int n,int b[],int &nb)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[nb++] = a[i];
        }
    }
}

///////******* BAI 154******/////////////
int Bai154(int a[],int n)
{
    int b[200],nb=0; // mang luu cac so am
    int c[200],nc=0;// mang luu vi tri cac so am trong a[]
    tachMangSoAmVT(a,n,b,nb,c,nc);
    int max=b[0];
    int vt =0;
    for(int i=0;i<nb;i++)
    {
        if(b[i]>max)
        {
            max=b[i];
            vt = i;
        }
    }
    if(nb==0)
        return -1;
    return c[vt];
}

void tachMangSoAmVT(int a[],int n,int b[],int &nb,int vitri[],int &nc)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            b[nb++] = a[i];
            vitri[nc++] = i;
        }
    }
}