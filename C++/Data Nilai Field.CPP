//Program Entry Data Nilai
#include<stdio.h>
#include<conio.h>
main()
{
 FILE *Fnilai;
 struct
 {
 char nobp[14],nm[25],kls[5];
 int nuts,nuas,ntgs,jhadir;
 }Rnilai;
 //Variabel memory
 char dsb, mad;
 Fnilai=fopen("NILMHS.data","r");
 if(Fnilai==NULL)
 {
  clrscr();
  printf("Tidak Dapat buat data");
  getch();
  }
  mad='y';
   while(mad=='y')
   {
   clrscr;
   gotoxy(10, 1);puts("     Universitas Masa Depan Cerah");
   gotoxy(10, 2);puts("Entry Data Nilai Algo & Pemrograman I");
   gotoxy(10, 3);puts("      Tahun Akademik 2021/2022");
   gotoxy(10, 4);puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
   gotoxy(10, 5);printf("Nomor Bp         : ");gets(Rnilai.nobp);
   gotoxy(10, 6);printf("Nama Mahasiswa   : ");gets(Rnilai.nm);
   gotoxy(10, 7);printf("Kelas            : ");gets(Rnilai.kls);
   gotoxy(10, 8);printf("Nilai UTS        : ");scanf("%i",&Rnilai.nuts);
   gotoxy(10, 9);printf("Nilai UAS        : ");scanf("%i",&Rnilai.nuas);
   gotoxy(10,10);printf("Nilai Tugas      : ");scanf("%i",&Rnilai.ntgs);
   gotoxy(10,11);printf("Jumlah Kehadiran : ");scanf("%i",&Rnilai.jhadir);
   gotoxy(10,13);printf("Data Sudah Benar ?? [.]");gotoxy(31,13);dsb=getche();
   if(dsb=='y')
     fwrite(&Rnilai,sizeof(Rnilai),1,Fnilai);
   gotoxy(10,14);printf("Masih Ada Data   ?? [.]");gotoxy(31,14);mad=getche();
   }
   //tutup file
    fclose(Fnilai);
    }  

