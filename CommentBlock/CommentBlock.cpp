/*! 
  我是该类的块注释。
 */
class Afterdoc_Test{
public:
  //! 我是枚举的简单注释
  /*! 
    我是枚举的详细注释
   */
  enum EnumType{
    int EVal1, /*!< Enum value TVal1 */
    int EVal2, /*!< Enum value TVal2 */
  };

  void member(); /*!< 我是成员函数 */

protected:
  int value; /*!< 我是数据成员注释*/
};
