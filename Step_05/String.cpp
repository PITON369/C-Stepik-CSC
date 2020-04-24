//https://stepik.org/lesson/559/step/9?unit=882

/*В этой задаче вам требуется реализовать оператор [] для уже известного вам класса String. Однако на этот раз оператор должен реализовывать нестандартное поведение: оператор нужно реализовать таким образом, чтобы для объекта str класса String можно было писать str[i][j] и это выражение возвращало подстроку начинающуюся в позиции i (считая с 0) и заканчивающуюся в позиции j (не включая).

Например:

String const hello("hello");
String const hell = hello[0][4]; // теперь в hell хранится подстрока "hell"
String const ell  = hello[1][4]; // теперь в ell хранится подстрока "ell"

Обратите внимание, что i может равняться j, в этом случае результатом должна быть пустая строка. Гарантируется, что i никогда не будет больше j, и они не будут выходить за пределы длины строки.
Требования к реализации: При выполнении задания вы можете создавать любые методы/конструкторы или даже структуры/классы, если они вам нужны. Реализовывать методы, которые уже объявленны в шаблоне, не нужно  они уже реализованы. При выполнении задания не вводите и не выводите что-либо. Реализовывать функцию main не нужно.*/

#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {
	String(const char *str = "");
	String(size_t n, char c);
	~String();

    String(const String &other);
    String &operator=(const String &other);

	void append(const String &other);
    
    char* cpStr(const char * const str, size_t strSz) {
    char *newStr = new char[strSz + 1];
    newStr[strSz] = '\0';
        
    const char * i = str;
    while (i != str + strSz) 
    {
        newStr[i - str] = *i;
        i++;
    };
        
    return newStr;
}
    
    String(size_t size_s, char *str)
    {
        size = size_s;
        this->str = cpStr(str, size);
    }

    struct SubString
    {
        SubString(size_t size_sub, char *str_sub)
        {
        str_ = str_sub;
        i_ = size_sub;
        }            
        String operator[](size_t size_s) const 
        {      
        String s(size_s - i_, str_ + i_);
        return s;
        }            
    size_t i_;
    char *str_;
    };      
               
    SubString operator[](size_t size_sub_) const
    {
        SubString sub(size_sub_, str);
        return sub;
    }
    
	size_t size;
	char *str;
};
