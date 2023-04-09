#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - Appends the specified text content to the end of the
 *                       specified file.
 *
 * @filename: The name of the file to append to.
 * @text_content: A NULL-terminated string containing the text to append.
 *
 * Return: 1 on success, -1 on failure.
 *
 * If the file does not exist or the user does not have write permissions for the file,
 * the function returns -1. If @filename is NULL, the function returns -1. If @text_content
 * is NULL, the function does nothing but returns 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd, len = 0;

    if (filename == NULL)
    {
        return (-1);
    }

    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
    {
        return (-1);
    }

    if (text_content != NULL)
    {
        while (text_content[len])
        {
            len++;
        }

        if (write(fd, text_content, len) != len)
        {
            close(fd);
            return (-1);
        }
    }

    close(fd);
    return (1);
}
