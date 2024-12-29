//
//  main.c
//  CountDown
//
//  Created by Edwin Cardenas on 12/29/24.
//

#include <stdio.h>
#include <stdlib.h>
#import <readline/readline.h>

int main(int argc, const char * argv[]) {
    printf("Where should I start counting? ");
    
    const char *strNumber = readline(NULL);
    int number = atoi(strNumber);
    
    for (int i = number; i >= 0; i -= 3) {
        printf("%d\n", i);
        
        if (i % 5 == 0) {
            printf("Found one!\n");
        }
    }
    
    return 0;
}
