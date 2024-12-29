//
//  main.c
//  CountDown
//
//  Created by Edwin Cardenas on 12/29/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    for (int i = 99; i >= 0; i -= 3) {
        printf("%d\n", i);
        
        if (i % 5 == 0) {
            printf("Found one!\n");
        }
    }
    
    return 0;
}
