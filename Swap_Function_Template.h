
template<class ANY_TYPE>
void CSwap(ANY_TYPE a, ANY_TYPE b)
{
  ANY_TYPE c;
  c = a;
  a = b;
  b = c;

 std::cout << "Swapped: " << a << " " << b<<
 std::endl;
  
}