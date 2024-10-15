# Tugas Asistensi P2
Berikut merupakan tugas asistensi praktikum dasar pemrograman modul P2 yang berjudul "Perulangan Percabangan Array String"

# Generator-Gambar-Sederhana
Program generator gambar sederhana ini ditulis dalam bahasa C dan dirancang untuk menerima input berupa panjang (10-100 karakter) dan lebar (5-75 karakter). Program ini dapat mengeksekusi 2 gambar berupa persegi dan segitiga. Gambar akan disusun dengan simbol asterisk "*" dan space " " dengan bentuk, panjang, dan lebar sesuai dari input yang diberikan. Setelah input diberiikan, program akan memvalidasi ukuran dan gambar terlebih dahulu yang kemudian akan dieksekusi menggunakan loop yang dibuat dari fungsi "for".

# Penjelasan Program 
1. Pada awal program dilakukan pendefinisian maksimal-minimal karakter untuk panjang dan lebar gambar dengan menggunakan :
   #define MIN_WIDTH 5     (lebar minimal 5 karakter),
   #define MAX_WIDTH 75    (lebar maksimal 75 karakter),
   #define MIN_HEIGHT 10   (panjang minimal 10 karakter), dan
   #define MAX_HEIGHT 100  (panjang maksimal 100 karakter).
2. void drawShape() | Merupakan definisi fungsi untuk membuat loop menggunakan "for" sesuai dengan gambar yang diinginkan. Pada fungsi ini loop dibuat sebanyak 2 kali untuk memastikan panjang dan lebar sesuai dengan maksimal-minimal dari input yang diberikan.
3. int validateSize() | Merupakan fungsi untuk memvalidasi ukuran yang diinput apakah sesuai dengan ketentuan maksimal-minimal atau tidak.  Jika tidak sesuai dengan ketentuan, program akan mengembalikan return 1; dan kembali meminta input dari awal.
4. int main() | Merupakan fungsi utama pada generator gambar untuk memberikan input kepada program berupa bentuk gambar (persegi atau segitiga), perintah untuk exit program, serta input panjang dan lebar dari gambar menggunakan pernyataan 'if', 'else if', dan 'else'.
5. Setelah program selesai terkesekusi dengan baik, program tidak akan berhenti hingga diberikan input  "exit" yang nantinya akan menghasilkan break; untuk mengakhiri program.
