/*tugas kuliah di pertemuan 13 while*/
#include<conio.h>
#include<stdio.h>

main()
{
 int bil;
 puts(" Menampilkan Bilangan Genap dan Ganjil");
 puts("   dari Deretan Bilangan 10 s/d 20 ");
 puts(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~");
 puts("\tBilangan \t Keterangan ");
 bil=10;

 while(bil<=20)
  {
  if(bil%2==0)
  printf("\t  %i\t\t  Genap \n",bil);
  else
  printf("\t  %i\t\t  Ganjil \n",bil);
  bil++;
  }

  printf("Yes Sukses !!");
  getch();
 }