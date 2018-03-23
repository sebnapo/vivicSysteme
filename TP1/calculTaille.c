#include <stdio.h>
#include <dirent.h>
#include <errno.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/types.h>
 
long size(const char* addr);
 
long size(const char* addr)
{
    FILE *fichier;
    long size;
 	DIR* ptdir;
    struct dirent* entree;

	ptdir=opendir(addr);
    if (!ptdir)
    {
        fprintf(stderr, "Pas un repertoire \n");
        return(1);
    }
    fichier=fopen(addr,"rb");
 
    if(fichier)
    {
            fseek (fichier, 0, SEEK_END);   // non-portable
            size=ftell (fichier);
            fclose (fichier);          
    }
    return size;
}

long sizeRec(const char* addr);

long sizeRec(const char* addr){
	
}

int main(){
	long taille = size("/comptes/etudiant/E177647U/Documents/Systeme2/TP1/ls");
	printf("%d",taille);
	return(0);
}
