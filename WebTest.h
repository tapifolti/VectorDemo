#ifndef LATERAL_WEBTEST_H  
#define LATERAL_WEBTEST_H

#include <vector>

void addV( const std::vector< double >& v1,
           const std::vector< double >& v2,
           std::vector< double >& vRes );

void mulV( const std::vector< double >& v1,
           const std::vector< double >& v2,
           std::vector< double >& vRes );

void expV( const std::vector< double >& v1,
           std::vector< double >& vRes );

#endif