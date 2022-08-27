#include <stdio.h>
#include <string.h>

#include "string2.h"

int search(char a[], char b[]){
    int len = 0;
    for (int i = 0; i < strlen(a); i++){
        if (b[len] == a[i]){
            len++;
            if (len == strlen(b))
                return 1;
        }
        else{
            len = 0;
        }
    }
    return 0;
}

int startsWith(char a[], char b[]){
    for (size_t i = 0; i < strlen(b); i++){
        if (a[i] == b[i])
            continue;
        else
            return 0;
    }
    return 1;
}

int endsWith(char a[], char b[]){
    int j = 1;
    for (int i = strlen(b); i > 0; i--){
        if (a[strlen(a)-j++] == b[i-1])
            continue;
        else
            return 0;
    }
    return 1;
}