#include <stdio.h>
#include <dirent.h>
#include <errno.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/types.h>
#include <grp.h>
#include <pwd.h>
#include <time.h>
//#include <ptdlib.h>
 

int lsTest(const char* repertoire){
	DIR* ptdir;
    struct dirent* entree;
	struct stat fileStat;
	struct group* grp = NULL;
	struct passwd* pw = NULL;
	
    ptdir=opendir(repertoire);
    if (!ptdir)
    {
        fprintf(stderr, "Pb opendir \n");
        return(1);
    }
 
    while((entree=readdir(ptdir))!= NULL)
    {
	printf("\n");
	lstat(entree->d_name,&fileStat);
	pw = getpwuid(fileStat.st_uid);
	printf(" %s ",pw->pw_name);
	grp = getgrgid(fileStat.st_gid);
	printf(" %s ",grp->gr_name);
	printf( (S_ISDIR(fileStat.st_mode)) ? "d" : "-");
    printf( (fileStat.st_mode & S_IRUSR) ? "r" : "-");
    printf( (fileStat.st_mode & S_IWUSR) ? "w" : "-");
    printf( (fileStat.st_mode & S_IXUSR) ? "x" : "-");
    printf( (fileStat.st_mode & S_IRGRP) ? "r" : "-");
    printf( (fileStat.st_mode & S_IWGRP) ? "w" : "-");
    printf( (fileStat.st_mode & S_IXGRP) ? "x" : "-");
    printf( (fileStat.st_mode & S_IROTH) ? "r" : "-");
    printf( (fileStat.st_mode & S_IWOTH) ? "w" : "-");
    printf( (fileStat.st_mode & S_IXOTH) ? "x" : "-");
    printf(" %d kb",fileStat.st_size/1024);
	printf(" %s ", ctime(&fileStat.st_ctime));
	printf(" %s", entree->d_name);
    }
    closedir(ptdir);
 
    return(0);
}


int main(int argc, char *argv[])
{
	lsTest("/comptes/etudiant/E177647U/Documents/Systeme2/TP1");
    return(0);
}
