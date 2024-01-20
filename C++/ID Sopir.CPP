#include<stdio.h>
#include<conio.h>
#include<string.h>
FILE *Fangkutan;
 //Deklarasi variabel data/fields/artibut dengan structure
 struct
 {
  char ids[5],nms[10],kd[2];
  float jls;
 }Rangkutan;
 entry()
 {
 //Deklarasi variabel memory
 char Vids[15];
 char als,tds,ketemu;
 als='y';
 while(als=='y'||als=='Y')
 {
  clrscr();
  gotoxy(10,1);printf("Usaha Angkutan Kota");
  gotoxy(10,2);printf(" Entri Data Setoran");
  gotoxy(10,3);printf("~~~~~~~");
  gotoxy(10,4);printf("ID Sopir         : ");
  gotoxy(10,5);printf("Nama Sopir       : ");
  gotoxy(10,6);printf("Kode(MI/MB/TX)   : ");
  gotoxy(10,7);printf("Jumlah Setoran   : ");

 //Inputkann nomor bp cari
 gotoxy(28,4);gets(Vids);

 //File diaktifkan untuk dibaca
 Fangkutan=fopen("angkotnya.dat","r");

 ketemu='t';
 if(Fangkutan==NULL)
    //File diaktifkan untuk membuat file baru
    Fangkutan=fopen("NILMHS.dat","w");
 else
 {
  while(fread(&Rangkutan,sizeof(Rangkutan),1,Fangkutan)==1)
  {
  if(strcmp(Rangkutan.ids,Vids)==0)
   {
   ketemu='y';
   //Tampilkan Record cari
   gotoxy(28,5);printf("%s",Rangkutan.nms);
   gotoxy(28,6);printf("%s",Rangkutan.kd);
   gotoxy(28,7);printf("%7.0f",Rangkutan.jls);
   }
  }
 }
 fclose(Fangkutan);
 if(ketemu=='t')
 {
   //Inputkan Data Nilai
   gotoxy(28, 5);gets(Rangkutan.nms);
   gotoxy(28, 6);gets(Rangkutan.kd);
   gotoxy(28, 7);scanf("%7.0f",Rangkutan.jls);
   strcpy(Rangkutan.ids,Vids);
   gotoxy(10,9);printf("Tambah Data Setoran ? Y/T[_]");gotoxy(27,9);tds=getche();
   if(tds=='Y'||tds=='y')
   {
   //File diaktifkan untuk menambah data
     Fangkutan=fopen("angkotnya.dat","a");

    //Rekam data
    fwrite(&Rangkutan,sizeof(Rangkutan),1,Fangkutan);
   }
   else
   {
    gotoxy(10,14);printf("Data Tidak Disimpan");
    getch();
   }
    fclose(Fangkutan);
  }
  else
  {
   gotoxy(10,13);printf("ID Sopir Tersebut sudah ada");
   getch();
  }
   gotoxy(10,14);printf("Ada Setoran Lagi? Y/T[_]: ");als=getche();
 }
 fclose(Fangkutan);
}
 laporan()
 {
  char jna[8];
  int brs;
  float swj,ups,klb,phs,php,tphs,tphp,bns,bnp;
 Fangkutan=fopen("angkotnya.dat","w");
 if(Fangkutan==NULL)
 {
  clrscr();
  printf("File Tidak Dapat Dibaca");
  getch();
 }
  //Tampilkan Judul & Header tabel
  clrscr();
  gotoxy(1,1);printf("                             USAHA ANGKUTAN KOTA");
  gotoxy(1,2);printf("                 LAPORAN PENGHASILAN SOPIR DAN PERUSAHAAN");
                    //12345678901234567890123456789012345678901234567890123456789012345678901234567890
                    //         1         2         3         4         5         6         7         8
  gotoxy(1,4);printf("--------------------------------------------------------------------------------");
  gotoxy(1,5);printf("|ID   |Nama Sopir| Jenis  |Jumlah |Setoran| Upah  |Kelebihan|    Penghasilan   |");
  gotoxy(1,6);printf("|Sopir|          |Angkutan|Setoran| Wajib | Sopir |         |------------------|");
  gotoxy(1,7);printf("|     |          |        |  Rp.  |       |       |         | Sopir |Perusahaan|");
  gotoxy(1,8);printf("--------------------------------------------------------------------------------");
  brs=8;tphs=0;tphp=0;
  while(fread(&Rangkutan, sizeof(Rangkutan), 1, Fangkutan) == 1)
  {
  brs++;
  if(strcmp(Rangkutan.kd,"MI")==0)
   {
    strcpy(jna,"Mikrolet");
    swj=40000;
    ups=20000;
   }
   else if((strcmp(Rangkutan.kd,"MB"))==0)
   	  {
         strcpy(jna,"Mini Bus");
         swj=50000;
         ups=25000;
        }
        else if((strcmp(Rangkutan.kd,"TX"))==0)
              {
               strcpy(jna,"Taxi");
               swj=50000;
               ups=25000;
              }
      klb=Rangkutan.jls-(swj+ups);
      if(strcmp(Rangkutan.kd,"MI")==0)
      {
       bns=0.7*klb;
       bnp=0.3*klb;
      }
      else if(strcmp(Rangkutan.kd,"MB")==0)
      {
       bns=0.5*klb;
       bnp=0.5*klb;
      }
      else if(strcmp(Rangkutan.kd,"TX")==0)
      {
       bns=0.6*klb;
       bnp=0.4*klb;
      }
  phs=ups+bns;
  php=swj+bnp;
  tphs=tphs+phs;
  tphp=tphp+php;
     //Tampilkan Isi Tabel
 gotoxy( 1,brs);printf("|");gotoxy( 2,brs);printf("%s",Rangkutan.ids);
 gotoxy( 7,brs);printf("|");gotoxy( 8,brs);printf("%s",Rangkutan.nms);
 gotoxy(18,brs);printf("|");gotoxy(19,brs);printf("%s",jna);
 gotoxy(27,brs);printf("|");gotoxy(28,brs);printf("%7.0f",Rangkutan.jls);
 gotoxy(35,brs);printf("|");gotoxy(36,brs);printf("%7.0f",swj);
 gotoxy(43,brs);printf("|");gotoxy(44,brs);printf("%7.0f",ups);
 gotoxy(51,brs);printf("|");gotoxy(52,brs);printf("%7.0f",klb);
 gotoxy(61,brs);printf("|");gotoxy(62,brs);printf("%7.0f",phs);
 gotoxy(69,brs);printf("|");gotoxy(72,brs);printf("%7.0f",php);
 gotoxy(80,brs);printf("|");
 }
 //Tampilkan garis tutup dan total
 gotoxy(1,brs+1);printf("----------------------------------------------------------------------------");
 gotoxy(1,brs+2);printf("|     Total Penghasilan Rp.                             |       |          |");
 gotoxy(1,brs+3);printf("----------------------------------------------------------------------------");
 gotoxy(62,brs+2);printf("%7.0f",tphs);
 gotoxy(72,brs+2);printf("%7.0f",tphp);
 gotoxy(1,brs+4);printf("Press Anykey to Continue...");
 getch();
 }
main()
{
int pil=0;
while(pil<3)
{
clrscr();
 gotoxy(25, 5);printf("    USAHA ANGKUTAN KOTA");
 gotoxy(25, 6);printf("    << Menu Pilihan >>     ");
 gotoxy(25, 7);printf("~~~~~~~~~~");
 gotoxy(25, 8);printf("1. Entry Data Angkutan            ");
 gotoxy(25, 9);printf("2. Laporan Data Angkutan          ");
 gotoxy(25,10);printf("3. Keluar                         ");
 gotoxy(25,12);printf("Silahkan Inputkan Pilihan [1-3] [_]");gotoxy(58,12);scanf("%i",&pil);
 if(pil==1)
 {entry();continue;}
 else if(pil==2)
 {laporan();continue;}
}
}