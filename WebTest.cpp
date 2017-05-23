#include "WebTest.h"
#include <math.h>

void addV( const std::vector< double >& v1,
           const std::vector< double >& v2,
           std::vector< double >& vRes )
{
  vRes.resize( v1.size() );
  for(std::size_t i = 0; i < v1.size(); ++i )
  {
    vRes[i] = v1[i] + v2[i];
  }
}

void mulV( const std::vector< double >& v1,
           const std::vector< double >& v2,
           std::vector< double >& vRes )
{
  vRes.resize( v1.size() );
  for(std::size_t i = 0; i < v1.size(); ++i )
  {
    vRes[i] = v1[i] * v2[i];
  }
}


void expV( const std::vector< double >& v1,
           std::vector< double >& vRes )
{
  vRes.resize( v1.size() );
  for(std::size_t i = 0; i < v1.size(); ++i )
  {
    vRes[i] = exp( v1[i] );
  }
}

