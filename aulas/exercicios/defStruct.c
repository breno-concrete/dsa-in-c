
//Exercício 1: Definindo uma Struct

typedef struct Book{
        char title[100];
        char author[50];
        int publicationYear;
        int pages;
    } Book;

int main (void){


    Book b1 = {"O Pequeno Príncipe", "Antoine de Saint-Exupéry", 1943, 96};
    Book b2 = {"Chapeuzinho Vermelho", "Irmãos Grimm", 1812, 32};

    return 0;
}