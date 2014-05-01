// this file was generated by sndfileExpHdr; don't edit it

typedef SNDFILE* 	(*psf_open)		(const char *path, int mode, SF_INFO *sfinfo) ;
typedef const char* (*psf_strerror) (SNDFILE *sndfile) ;
typedef int		(*psf_command)	(SNDFILE *sndfile, int command, void *data, int datasize) ;
typedef int		(*psf_format_check)	(const SF_INFO *info) ;
typedef int (*psf_set_string) (SNDFILE *sndfile, int str_type, const char* str) ;
typedef const char* (*psf_get_string) (SNDFILE *sndfile, int str_type) ;
typedef sf_count_t	(*psf_readf_short)	(SNDFILE *sndfile, short *ptr, sf_count_t frames) ;
typedef sf_count_t	(*psf_writef_short)	(SNDFILE *sndfile, const short *ptr, sf_count_t frames) ;
typedef sf_count_t	(*psf_readf_int)	(SNDFILE *sndfile, int *ptr, sf_count_t frames) ;
typedef sf_count_t	(*psf_writef_int) 	(SNDFILE *sndfile, const int *ptr, sf_count_t frames) ;
typedef int		(*psf_close)		(SNDFILE *sndfile) ;