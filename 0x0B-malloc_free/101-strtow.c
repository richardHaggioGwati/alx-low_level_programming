#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * copy_word - copies a word
 * @start: start to copy
 * @end: end of copying
 * Return: word
 */

static char *copy_word(const char *start, const char *end)
{
char *word = (char *)malloc((end - start + 1) * sizeof(char));

if (word == NULL)
{
return (NULL);
}
strncpy(word, start, end - start);
word[end - start] = '\0';
return (word);
}

/**
 * count_words - counts words in a string
 * @str: string to count
 * Return: length of string
 */

static int count_words(const char *str)
{
int count = 0;
int in_word = 0;
const char *p;

for (p = str; *p != '\0'; p++)
{
if (isspace(*p))
{
in_word = 0;
}
else
{
if (!in_word)
{
count++;
in_word = 1;
}
}
}
return (count);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: a pointer to an array of strings (words)
 */

char **strtow(char *str)
{
int word_index = 0, i, num_words;
int in_word = 0;
char **words;
const char *word_start = NULL;
char *p;

if (str == NULL || *str == '\0')
{
return (NULL);
}
num_words = count_words(str);
words = (char **)malloc((num_words + 1) * sizeof(char *));\
if (words == NULL)
{
return (NULL);
}
for (p = str; *p != '\0'; p++)
{
if (isspace(*p))
{
if (in_word)
{
words[word_index] = copy_word(word_start, p);
if (words[word_index] == NULL)
{
for (i = 0; i < word_index; i++)
{
free(words[i]);
}
free(words);
return (NULL);
}
word_index++;
in_word = 0;
}
}
else
{
if (!in_word)
{
word_start = p;
in_word = 1;
}
}
}
if (in_word)
{
words[word_index] = copy_word(word_start, str + strlen(str));
if (words[word_index] == NULL)
{
for (i = 0; i < word_index; i++)
{
free(words[i]);
}
free(words);
return NULL;
}
word_index++;
}
words[word_index] = NULL;
return (words);
}
