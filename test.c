struct book
{
   char name[30];
};

int test(char *fmt, ...)
{
   return 13;
}

struct book book;
int main()
{
   struct book *books;
   return test(56, books[0].name, 1000);
}