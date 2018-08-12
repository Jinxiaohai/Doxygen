//! 读取文件
/*! 
  该函数主要用来读取文件的内容。
  \param[in] fileNameLen 文件名长度
  \param[in] fileName 文件名
  \param[in] dataLen 数据长度
  \param[in] fileData 输出的数据内容
  
  \return 0，执行成功，非0，执行失败。详见
  \ref function.h
  \see 
  \note
*/
int ReadFile(int fileNameLen, char *fileName, int dataLen, char *fileData);
