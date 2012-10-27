/**
 * @file   tSingleton.hpp
 * @author Vianney Bouchaud <vianney@bouchaud.org>
 * @date   Mon Mar 12 21:23:25 2012
 * 
 * @brief  A simple template singleton classe.
 * 
 * 
 */


namespace	utility {

  template<class T>
  class		singlt {
  private:
    singlt(const singlt&);
    singlt&	operator=(const singlt&);

  protected:
    singlt() {}
    virtual ~singlt() {}

  public:
    static T&	Instance() {
      static T	theInstance;
      return (theInstance);
    }
  };
}
