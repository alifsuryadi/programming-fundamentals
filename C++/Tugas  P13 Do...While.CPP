/*tugas kuliah di pertemuan 13 Do..while*/
#include<conio.h>
#include<stdio.h>

main()
{
 int bil;
 bil=10;
 puts(" Menampilkan Bilangan Genap dan Ganjil");
 puts("   dari Deretan Bilangan 10 s/d 20 ");
 puts(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~");
 puts(" \t Bilangan \t Keterangan ");

 do
  {
  if(bil%2==0)
  	printf("\t  %i \t	  Genap \n",bil);
  else
  	printf("\t  %i \t	  Ganjil \n",bil);
  bil++;
  }

  while(bil<=20);
  printf("Yes Sukses !!");
  getch();
 } 

