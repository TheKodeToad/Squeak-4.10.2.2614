/* Header file for AsynchFile plugin */
/* module initialization/shutdown */
int asyncFileInit(void);
int asyncFileShutdown(void);

/*** Experimental Asynchronous File I/O ***/
typedef struct {
	int			sessionID;
	void		*state;
} AsyncFile;

int asyncFileClose(AsyncFile *f);
int asyncFileOpen(AsyncFile *f, long fileNamePtr, int fileNameSize, int writeFlag, int semaIndex);
int asyncFileRecordSize();
int asyncFileReadResult(AsyncFile *f, long bufferPtr, int bufferSize);
int asyncFileReadStart(AsyncFile *f, int fPosition, int count);
int asyncFileWriteResult(AsyncFile *f);
int asyncFileWriteStart(AsyncFile *f, int fPosition, long bufferPtr, int bufferSize);
