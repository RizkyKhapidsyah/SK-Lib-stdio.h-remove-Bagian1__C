/* remove example: remove myfile.txt */

#include <stdio.h>
#include <conio.h>

/*
    Source by CPlusPlus
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    if (remove("myfile.txt") != 0) {
        perror("Error deleting file");
    } else {
        puts("File successfully deleted");
    }
      
    _getch();
    return 0;
}

/* 

Jika file myfile.txt ada sebelum eksekusi dan program memiliki akses tulis, 
file akan dihapus dan pesan ini akan ditulis ke stdout: File berhasil dihapus. 
Jika tidak, pesan yang mirip dengan ini akan ditulis ke stderr: 
Kesalahan menghapus file: Tidak ada file atau direktori seperti itu

*/