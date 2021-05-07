#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int count_letters(string word);
int count_words(string word);
int count_sentences(string word);
double coleman_liau(int l, int w, int s);

int main(void)
{
    string text = get_string("Text: ");
    int lets = count_letters(text);
    int words = count_words(text);
    int sents = count_sentences(text);
    double calc = coleman_liau(lets, words, sents);
    
    int grade = calc;
    
    if (grade <= 1)
    {
        printf("Before Grade 1\n"); 
    }
    else if (grade > 1 && grade < 16)
    {
        printf("Grade %i\n", grade);
    }
    else
    {
        printf("Grade 16+\n");
    }
    

}
int count_letters(string word)
{
    int let = 0;
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        if (isalpha(word[i]))
        {
            let++;
        }
    }
    return let;
}

int count_words(string word)
{
    int words = 0;
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        if (word[i] == ' ')
        {
            words++;
        }
    }
    words = words + 1;
    return words;
}
int count_sentences(string word)
{
    int sents = 0;
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        if (word[i] == '.' || word[i] == '?' || word[i] == '!')
        {
            sents++;
        }
    }
    return sents;
}

double coleman_liau(int l, int w, int s)
{
    float S, L, index;
    L = ((float) l / w) * 100;
    S = ((float) s / w) * 100;
    index = 0.0588 * L - 0.296 * S - 15.8;
    index = round(index);
    return index;
}