-----------------------------------------------------------------------COMPILER-----------------------------------------------------------------------
Compiler là gì?
- Là phần mềm để dịch ngôn ngữ bậc cao về ngôn ngữ máy.
ví dụ: gcc, g++

Các bước Compiler thực hiện: Preprocessor, Compilation, Assembler, Linker

1. Preprocessor (Tiền xử lý)

Từ những file .c, .h, .cpp, .hpp chuyển sang file .i
Lệnh tiền xử lý từ gcc: gcc -E main.c -o main.i

Preprocessor: Là thực hiện việc gộp vào cùng một file đối với là lệnh include, còn nếu là Macro thì sẽ thay thế đoạn định nghĩa sau đó và sẽ xoá hết tất cả comment.

2. Compilation 

Tạo file Assembly code ( .s)từ file .i
Lệnh tạo ra Assembly từ gcc: gcc -S main.i -o main.s

Compilation: tạo ra file Assembly

3. Assembler 

Tạo object file .o từ file .s
Lệnh tạo ra Object file từ gcc: gcc -C main.s -o main.o

4. Linker

Liên kết các Object file lại với nhau.
tạo ra được file .exe
Lệnh liên kết các file từ gcc: gcc main.o sensor.o -o test

-----------------------------------------------------------------------MACRO-----------------------------------------------------------------------
Macro là nhóm lệnh dùng để thay thế định nghĩa những đoạn lệnh sau đó
Macro gồm những nhóm lệnh sau: 
- #include (include thư viện hoặc các file khác)
- #define, #undef (định nghĩa những giá trị sau đó)
- #if, #elif, #else, #ifdef, #ifndef 

- Sự khác nhau giửa Macro và Function
    + Macro: Thay thế đoạn định nghĩa vào chương trình nếu gọi nhiều lần thì thay thế nhiều lần => Kích thước lớn hơn; Bù lại tốc độ xử lý nhanh hơn.
    + Function: Viết chương trình 1 lần sau này chỉ cần gọi lại => Kích thước chương trình lớn hơn; Tốc độ xử lý chậm hơn vì phải qua những cơ chế như: lưu vào main Stack poiter hay đếm (Program counter)
    