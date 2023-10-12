#include <stdio.h>
#include <string.h>

int main ()
{
	char nim[8];
	char nama[16];
	char jurusan[19];
	
	strcpy(nim, "2341037");
	strcpy(nama, "Silvia Agustina");
	strcpy(jurusan, "Teknik Informatika");
	
	printf("NIM : %s", nim);
	printf("NAMA : %s", nama);
	printf("JURUSAN : %s", jurusan);
	
	return  0;
}