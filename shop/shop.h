#ifndef SHOP_H
#define SHOP_H
#include "list.h"
#include<string.h>
#include<stdlib.h>
char* strdup(char*);
typedef struct _Repository Repository;
typedef struct {
	char* name;
	char* version;
	float price;
}Product;
struct _Repository{
	char* name;
	Product** products;
	int* num;
	int size; //for security
	int count;
	
	//public methods
	int (*add)(Repository* _this,Product* newp);
	void (*print)(Repository* r);
};
typedef struct {
	char* date;
	Product* changed;
	int type;
}Record;
typedef struct {
	Repository** respositories;
	int respositorycount;
	List* record;
}Shop;
Product* product_new(char* name,char* version,float price);
void product_free(Product* p);
Repository* repository_new(char* name,int size);
void repository_free(Repository* r);
int product_equals(Product* p1,Product* p2);
#endif
