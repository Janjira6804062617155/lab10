#include <stdio.h> 
#include <stdlib.h> 
struct Books{ 
int BookID; 
char BookTitle[50]; 
} ComputerBook; 
void DisplayData(struct Books CBook); 

int main() { 
printf("Enter Book ID :");      
scanf("%d",&ComputerBook.BookID); 
printf("Enter Book Title :");   
scanf("%s",ComputerBook.BookTitle); 
DisplayData(ComputerBook); // ส่งข้อมูลไปยังฟังก์ชัน DisplayData 
return 0; 
} 
void DisplayData(struct Books CBook){ 
printf("Book ID : %d \n",CBook.BookID); 
printf("Book Title : %s \n",CBook.BookTitle); 
} 

//void DisplayData(struct Books CBook) คือ ฟังชันก์แสดงbookid and book titleไม่มีreturnค่ากลับ
//มีพารามิเตอร์CBook ชนิดstruct Books

