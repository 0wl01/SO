/*
Implemente em C um programa "mycat" com funcionalidade semelhcante à do comando
cat que lê do seu stdin e escreve para o seu stdout
*/

#include <unistd.h>

int main(int argc, char*, argv[]) {
    int n, fd;
    char c;
    /*while (n= read(0, &c, sizeof(c)) > c)
    write (1, &c, sizeof(c));*/

    /*while (1) {
        n = read(0, &c, sizeof(c));
        if (n <= 0) //EOF ou erro?
            break;
        write(1, &c, sizeof(c))
    }*/

    if (argc != 2) {
        fprintf(stderr, "usage: %s <file>\n", argv[0]);
        return 1;
    }

    fd = open(argv[1], O_RDONLY);
    if fd == -1 {
        perror(argv[1]);
        return 1;
    }
    
    while ((n = read(fd, &c, sizeof(c)) > 0)
    write(1, &c, sizeof(c));

    return 0;
}