typedef struct Person{
    char name[50];
    int age;
    float height;

} Person;


int main(void){

    Person p1 = {"João", 25, 1.80};


    //Alteração

    p1.age = 26;
    p1.height = 1.81;
    
}