#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
/*
stat donne des informations sur le fichier pointer par le pathname
lstat lui fait la même chose sauf pour les liens symboliques, il donneras alors des informations sur le lien et pas
le fichier pointer par le lien
dev_t     st_dev;          ID of device containing file 
               ino_t     st_ino;         /* inode number 
               mode_t    st_mode;        /* file type and mode 
               nlink_t   st_nlink;       /* number of hard links 
               uid_t     st_uid;         /* user ID of owner 
               gid_t     st_gid;         /* group ID of owner 
               dev_t     st_rdev;        /* device ID (if special file) 
               off_t     st_size;        /* total size, in bytes 
               blksize_t st_blksize;     /* blocksize for filesystem I/O 
               blkcnt_t  st_blocks;      /* number of 512B blocks allocated 
*/
	int question3(){
		struct stat fileStat;
    if(stat("/comptes/etudiant/E177647U/Documents/Systeme2/TP1/test.txt",&fileStat) < 0)    
        return 1;
 	printf("--------------------Using here stat----------------------\n");
    printf("Information for %s\n","/comptes/etudiant/E177647U/Documents/Systeme2/TP1/test.txt");
    printf("---------------------------\n");
    printf("File Size: \t\t%d bytes\n",fileStat.st_size);
    printf("Number of Links: \t%d\n",fileStat.st_nlink);
    printf("File inode: \t\t%d\n",fileStat.st_ino);
 
    printf("File Permissions: \t");
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
    printf("\n\n");
 
    printf("The file %s a symbolic link\n", (S_ISLNK(fileStat.st_mode)) ? "is" : "is not");

	struct stat fileStat2;
    if(lstat("/comptes/etudiant/E177647U/Documents/Systeme2/TP1/test.txt",&fileStat2) < 0)    
        return 1;
 	printf("--------------------Using here lstat----------------------\n");
    printf("Information for %s\n","/comptes/etudiant/E177647U/Documents/Systeme2/TP1/test.txt");
    printf("---------------------------\n");
    printf("File Size: \t\t%d bytes\n",fileStat2.st_size);
    printf("Number of Links: \t%d\n",fileStat2.st_nlink);
    printf("File inode: \t\t%d\n",fileStat2.st_ino);
 
    printf("File Permissions: \t");
    printf( (S_ISDIR(fileStat2.st_mode)) ? "d" : "-");
    printf( (fileStat2.st_mode & S_IRUSR) ? "r" : "-");
    printf( (fileStat2.st_mode & S_IWUSR) ? "w" : "-");
    printf( (fileStat2.st_mode & S_IXUSR) ? "x" : "-");
    printf( (fileStat2.st_mode & S_IRGRP) ? "r" : "-");
    printf( (fileStat2.st_mode & S_IWGRP) ? "w" : "-");
    printf( (fileStat2.st_mode & S_IXGRP) ? "x" : "-");
    printf( (fileStat2.st_mode & S_IROTH) ? "r" : "-");
    printf( (fileStat2.st_mode & S_IWOTH) ? "w" : "-");
    printf( (fileStat2.st_mode & S_IXOTH) ? "x" : "-");
    printf("\n\n");
 
    printf("The file %s a symbolic link\n", (S_ISLNK(fileStat2.st_mode)) ? "is" : "is not");

struct stat fileStat3;
    if(stat("/comptes/etudiant/E177647U/Documents/Systeme2/TP1/client2Link",&fileStat3) < 0)    
        return 1;
 	printf("--------------------Using here stat----------------------\n");
    printf("Information for %s\n","/comptes/etudiant/E177647U/Documents/Systeme2/TP1/test.txt");
    printf("---------------------------\n");
    printf("File Size: \t\t%d bytes\n",fileStat3.st_size);
    printf("Number of Links: \t%d\n",fileStat3.st_nlink);
    printf("File inode: \t\t%d\n",fileStat3.st_ino);
 
    printf("File Permissions: \t");
    printf( (S_ISDIR(fileStat3.st_mode)) ? "d" : "-");
    printf( (fileStat3.st_mode & S_IRUSR) ? "r" : "-");
    printf( (fileStat3.st_mode & S_IWUSR) ? "w" : "-");
    printf( (fileStat3.st_mode & S_IXUSR) ? "x" : "-");
    printf( (fileStat3.st_mode & S_IRGRP) ? "r" : "-");
    printf( (fileStat3.st_mode & S_IWGRP) ? "w" : "-");
    printf( (fileStat3.st_mode & S_IXGRP) ? "x" : "-");
    printf( (fileStat3.st_mode & S_IROTH) ? "r" : "-");
    printf( (fileStat3.st_mode & S_IWOTH) ? "w" : "-");
    printf( (fileStat3.st_mode & S_IXOTH) ? "x" : "-");
    printf("\n\n");
 
    printf("The file %s a symbolic link\n", (S_ISLNK(fileStat3.st_mode)) ? "is" : "is not");

	struct stat fileStat4;
    if(lstat("/comptes/etudiant/E177647U/Documents/Systeme2/TP1/client2Link",&fileStat4) < 0)    
        return 1;
 	printf("--------------------Using here lstat----------------------\n");
    printf("Information for %s\n","/comptes/etudiant/E177647U/Documents/Systeme2/TP1/test.txt");
    printf("---------------------------\n");
    printf("File Size: \t\t%d bytes\n",fileStat4.st_size);
    printf("Number of Links: \t%d\n",fileStat4.st_nlink);
    printf("File inode: \t\t%d\n",fileStat4.st_ino);
 
    printf("File Permissions: \t");
    printf( (S_ISDIR(fileStat4.st_mode)) ? "d" : "-");
    printf( (fileStat4.st_mode & S_IRUSR) ? "r" : "-");
    printf( (fileStat4.st_mode & S_IWUSR) ? "w" : "-");
    printf( (fileStat4.st_mode & S_IXUSR) ? "x" : "-");
    printf( (fileStat4.st_mode & S_IRGRP) ? "r" : "-");
    printf( (fileStat4.st_mode & S_IWGRP) ? "w" : "-");
    printf( (fileStat4.st_mode & S_IXGRP) ? "x" : "-");
    printf( (fileStat4.st_mode & S_IROTH) ? "r" : "-");
    printf( (fileStat4.st_mode & S_IWOTH) ? "w" : "-");
    printf( (fileStat4.st_mode & S_IXOTH) ? "x" : "-");
    printf("\n\n");
 
    printf("The file %s a symbolic link\n", (S_ISLNK(fileStat4.st_mode)) ? "is" : "is not");
 
	}

	int question4(){
		int filedesc = open("test.txt", O_WRONLY | O_APPEND);
		int filedesc2 = open("test.txt", O_WRONLY | O_APPEND);
		printf("%d\n",filedesc);
		printf("%d\n",filedesc2);
		struct stat fileStat;
		struct stat fileStat1;
		lstat("/comptes/etudiant/E177647U/Documents/Systeme2/TP1/test.txt",&fileStat);
		lstat("/comptes/etudiant/E177647U/Documents/Systeme2/TP1/test.txt",&fileStat1);
		printf("File inode: \t\t%d\n",fileStat.st_ino);
		printf("File inode: \t\t%d\n",fileStat1.st_ino);
	}

	int main(int argc, char *argv[])
	{
		question3();	
		question4();
	}
