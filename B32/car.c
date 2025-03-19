/*#include <stdio.h>  
struct Car 
{  
    int carID;  
    char model[50];  
    float rental_rate;  
};  

int main() {  
    struct Car cars[3];  
    int days;  
    float total=0.0;  
    for (int i=0;i<3;i++) 
    {  
        printf("Enter details for car %d:\n",i+1);  
        printf("Car ID:");  
        scanf("%d",&cars[i].carID);  
        printf("Model:");  
        scanf("%s",cars[i].model);  
        printf("Rental rate per day:");  
        scanf("%f",&cars[i].rental_rate);  
    }  
    printf("Enter number of rental days: ");  
    scanf("%d",&days);  
    for (int i=0;i<3;i++) 
    {  
        total+=cars[i].rental_rate*days;  
    }  
    printf("Total rental cost for %d days: %.2f\n",days,total);  
    return 0;  
}*/

#include <stdio.h>  
#include <string.h>  
struct Book {  
    char title[100];  
    char author[50];  
    float price;  
};  
int main() {  
    struct Book books[3];  
    struct Book Expensive, cheapest;  
    for (int i=0;i<3;i++) {  
        printf("Enter details for book %d:\n",i+1);  
        printf("Title:");  
        scanf("%s",books[i].title);  
        printf("Author:");  
        scanf("%s",books[i].author);  
        printf("Price:");  
        scanf("%f",&books[i].price);  
    }  
    Expensive=books[0];  
    cheapest=books[0];  
    for (int i=1;i<3;i++) 
    {  
        if (books[i].price>Expensive.price) 
        {  
            Expensive=books[i];  
        }  
        if (books[i].price<cheapest.price) 
        {  
            cheapest=books[i];  
        }  
    }
    printf("\n");
    printf("Most Expensive Book:\n");  
    printf("Title:%s\nAuthor:%s\nPrice:%.2f\n",Expensive.title,Expensive.author,Expensive.price);  
    printf("Lowest Priced Book:\n");  
    printf("Title:%s\nAuthor:%s\nPrice:%.2f\n",cheapest.title,cheapest.author,cheapest.price);  
    return 0;  
}