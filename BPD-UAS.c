#include <stdio.h>
int main(void)
{
    int nilai[10];
    printf("NIM     :   2211510462");
    printf("\nNama    :   Aditya Prayoga\n");
    printf("\nProgram penentuan kelulusan berdasarkan nilai\n\n");
    for (int i = 0; i < 10; i++)
    {   
    printf("Input nilai Mahasiswa ke -%d :", i+1);
    scanf("%d",&nilai[i]);
    }
    printf("\nNilai Mahasiswa yang dikategorikan Lulus adalah :\n");
    for (int i = 0; i < 10; i++)
    {
    if(nilai[i] >= 60)
    {
    printf("\nNilai Mahasiswa ke-%d yaitu ",i+1);
    printf("%d", nilai[i]);
    }   
    }
    printf("\n\nNilai yang tidak tampil berarti tidak Lulus karena kurang dari 60");

return 0;

}
