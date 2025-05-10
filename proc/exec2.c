#include "../include/apue.h"
#include <sys/wait.h>

int
main(void)
{
	pid_t	pid;

	if ((pid = fork()) < 0) {
		err_sys("fork error");
	} else if (pid == 0) {			/* child */
		if (execlp("/data/home/taylorzhong/unix_env_v3/proc/build/testinterp.sh",
				  "testinterp.shxxxxxxxxxxx", "myarg", "MY ARG2", (char *)0) < 0)
			err_sys("execl error");
	}
	if (waitpid(pid, NULL, 0) < 0)	/* parent */
		err_sys("waitpid error");
	exit(0);
}
