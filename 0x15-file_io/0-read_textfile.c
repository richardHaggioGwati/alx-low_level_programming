#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 *
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The number of letters actually read and printed, or 0 if:
 *         - The file can not be opened or read.
 *         - The filename argument is NULL.
 *         - Write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE *file;
    char *buffer;
    ssize_t bytes_read, bytes_written;
    
    if (filename == NULL)
    {
        return 0;
    }

    file = fopen(filename, "r");
    if (file == NULL)
    {
        return 0;
    }

    buffer = (char *)malloc(sizeof(char) * letters);
    if (buffer == NULL)
    {
        fclose(file);
        return 0;
    }

    bytes_read = fread(buffer, sizeof(char), letters, file);
    if (bytes_read <= 0)
    {
        fclose(file);
        free(buffer);
        return 0;
    }

    bytes_written = fwrite(buffer, sizeof(char), bytes_read, stdout);
    if (bytes_written != bytes_read)
    {
        fclose(file);
        free(buffer);
        return 0;
    }

    fclose(file);
    free(buffer);
    return bytes_written;
}