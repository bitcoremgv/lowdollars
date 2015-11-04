#include  


the dbs



are odbms
it can be all the dbs that there are db packages for
and that have a convenient format

 
the send send back package and the constancy ledger should be used to certifie a db 

the dbs should be reliable scalable to unlimited asks

100  000 000 wallets is not a limit

easy to use 
and to check 

free


the dbs are using 
no dependencies

 

the checking package is using the db and the send send back 



the dbs package
are the ledgers and the formated for a db

it has the ledgers scheme and the datas formated for the db

and allow the checking package and the send send back to be used to check and ask


the dbs the packages are certifieed

the dbs and the packages are checked and reconfirmed



the packeges can be for






a db package is a tasks to establish the ledgers to the db and constancing the datas

it has the ledgers formated for a db 
the tasks to the db for it to have constancy of dataas 































askf(prompt)
char *prompt;
{
va_list argp;
char *fmt;
int r;

do	{
	va_start(argp, prompt);

	/*
	 *  Have to pass argp by reference so _doscan can pick up
	 *  where _doprnt left off.
	 */

	_do2prnt(1, prompt, &argp, stderr);

	fmt = va_arg(argp, char *);

	r = _do2scan(1, stdin, fmt, argp);

	va_end(argp);
	} while(r < 0);

return r;
}
