#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t rd, wr;
    char *buf;

    if (!filename)
        return 0;

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return 0;

    buf = malloc(letters);
    if (!buf)
    {
        close(fd);
        return 0;
    }

    rd = read(fd, buf, letters);
    if (rd == -1)
    {
        free(buf);
        close(fd);
        return 0;
    }

    wr = write(STDOUT_FILENO, buf, rd);
    free(buf);
    close(fd);

    if (wr != rd)
        return 0;

    return wr;
}
