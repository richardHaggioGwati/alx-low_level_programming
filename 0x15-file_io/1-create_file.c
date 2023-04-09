#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include "main.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file with the specified name and writes the specified
 *               text content to it.
 *
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string containing the text to write to the file.
 *
 * Return: 1 on success, -1 on failure (file cannot be created, cannot be written,
 *         write "fails", etc.).
 *
 * If the file already exists, it is truncated. The file has permissions set to
 * rw-------. If @filename is NULL, the function returns -1. If @text_content is
 * NULL, an empty file is created.
 */
int create_file(const char *filename, char *text_content)
{
    int fd;

    if (filename == NULL)
    {
        return -1;
    }
    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd == -1)
    {
        return -1;
    }
    if (text_content != NULL)
    {
        ssize_t bytes_written = write(fd, text_content, strlen(text_content));
        if (bytes_written == -1)
        {
            close(fd);
            return -1;
        }
    }

    close(fd);
    return 1;
}