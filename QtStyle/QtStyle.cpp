//! 我是简要描述
/*! 
  我是详细描述
 */
class QtStyleTest{
public:
  //! An enum
  /*! 
    枚举的详细描述
   */
  enum TEnum{
    TVal1, /*!< Enum value TVal1 */
    TVal2, /*!< Enum value TVal2 */
    TVal3 /*!< Enum value TVal3 */
  };
  //! 枚举指针的简单描述
  /*! 
    枚举指针的详细描述
   */
  *enumPtr,
  //! 枚举值的简单描述
  /*! 
    枚举值的详细描述
   */
    enumValue;

  //! 构造函数的简单描述
  /*! 
    构造函数的详细描述
   */
  QtStyleTest();

  //! 析构函数的简单描述
  /*! 
    析构函数的详细描述
   */
  ～QtStyleTest();

  //! 成员函数的简单描述
  /*!     
    \param a 整型参数
    \param s 常量的字符型参数
    
    \return 返回的结果
    \sa QtStyleTest(), ~QtStyleTest()
  */
  int testMe(int a, const char *s);

  //! 公有数据成员的简单描述
  /*! 
    公有数据成员的详细描述
   */
  int publicVar;

};
