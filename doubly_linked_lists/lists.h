#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>


typedef struct node {
struct node  *prev;
char *data;
struct node  *next;
}dlistint_t;



