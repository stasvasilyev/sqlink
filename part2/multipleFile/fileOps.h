#ifndef FILESOPS_H
#define FILESOPS_H

int isFile (const char* path);
int isDir (const char* path);
char** getContent (char* path);
void freeContent (char** content);

#endif