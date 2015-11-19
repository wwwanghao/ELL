// Loader.h

#pragma once

#include "SupervisedExample.h"

#include "RowMatrix.h"
using linear::RowMatrix;

#include<string>
using std::string;

namespace dataset
{
    using RowDataset = RowMatrix<SupervisedExample>;

    /// Container that holds a static function that loads and parses a dataset 
    ///
    struct Loader
    {
        template<typename RowIteratorType, typename VectorEntryParserType>
        static RowDataset Load(RowIteratorType line_iterator, VectorEntryParserType parser);
    };
}

#include "../tcc/Loader.tcc"
