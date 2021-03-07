//
//  main.c
//  Hello
//
//  Created by Mert Aydın on 7.03.2021.
//

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What is your name?\n");
    printf("hello, %s\n", name);
}

