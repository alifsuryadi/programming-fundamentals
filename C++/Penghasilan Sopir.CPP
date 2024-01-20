//Program Entry Setoran
#include<stdio.h>
#include<conio.h>
main()
{
 FILE *Fsetoran;
 struct
 {
  char ids[5],ns[10],kd[2];
  float jls;
 }Rsetoran;
 //Variabel Memory
 char sds,als;
 Fsetoran=fopen("DTSTRN.data","w");
 if(Fsetoran==NULL)
 {
  clrscr();
  printf("Tidak Dapat Buat Data");
  getch();
 }
 als='y';
 while(als=='y')
 {
  clrscr();
  gotoxy(10, 1);puts("Usaha Angkotan Kota");
  gotoxy(10, 2);puts("Entry Data Setoran ");
  gotoxy(10, 3);puts("~~~~~~~");fflush(stdin);
  gotoxy(10, 4);printf("ID Sopir       : ");gets(Rsetoran.ids);
  gotoxy(10, 5);printf("Nama Sopir     : ");gets(Rsetoran.ns);
  gotoxy(10, 6);printf("Kode(MI/MB/TX) : ");gets(Rsetoran.kd);
  gotoxy(10, 7);printf("Jumlah Setoran : ");scanf("%f",&Rsetoran.jls);
  gotoxy(10, 9);printf("Simpan data setoran ?? [.]:");gotoxy(31, 9);sds=getche();
  if(sds=='y')
  	   fwrite(&Rsetoran,sizeof(Rsetoran),1,Fsetoran);
  gotoxy(10,10);printf("Ada setoran lain    ?? [.]");als=getche();
 }
 //Tutup File
 fclose(Fsetoran);
}