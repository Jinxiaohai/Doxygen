/*! 
  \file SimpleExampleBlock.h
  \brief 我是该文档的简单注释，记得简单注释和详细注释之间要添加添加一个空行。

  我是文档的详细注释
*/

/*!
  \def MAX(a, b)
  \brief 我是该宏的简单注释。

  我是该宏的详细注释。
*/
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

/*!
  \var typedef unsigned int UNIT32
  \brief 我是变量的简单注释。

  我是变量的详细注释
*/
typedef unsigned int UINT32;

/*!
  \var int errno
  \brief 我是errno的简单注释

  我是errno的详细注释
*/
int errno;

/*! 
  \fn int open(const char *pathname, int flags)
  \brief 我是open函数的简单注释

  \param pathname 参数1的描述
  \param flags 参数2的描述
*/
int open(const char *, int);

/*!
  \fn int close(int fd)
  \brief 我是close函数的简要描述
  \param fd 我是参数的描述。
*/
int close(int);

/*!
  \fn size_t write(int fd, char *buf, size_t count)
  \brief Writes \a count bytes from \a buf to the filedescriptor \a fd
  \param fd 参数1的描述
  \param buf 参数2的描述
  \param count 参数3的描述
 */
size_t write(int, const char *, size_t);

