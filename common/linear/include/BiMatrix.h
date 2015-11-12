// BiMatrix.h

#pragma once

#include "Base.h"
#include <vector>

using std::vector;

namespace linear
{
	template<typename RowMatrixType>
	class BiMatrix : public RowMatrixType
	{
	public:
		
		/// The type of each Row
		///
		using row_type = typename RowMatrixType::row_type;

		/// Constructs a bioriented matrix
		///
		BiMatrix() = default;

		/// Move constructor
		///
		BiMatrix(BiMatrix<RowMatrixType>&&) = default;

		/// Deleted copy constructor
		///
		BiMatrix(const BiMatrix<RowMatrixType>&) = delete;

		/// \returns A reference to a Column
		///
		const row_type& GetColumn(uint index) const;

		/// Performs a general vector matrix product: y = alpha * x * M + beta * y
		///
		virtual void Gevm(const double* p_x, double* p_y, double alpha = 1.0, double beta = 0.0) const override;

	private:
		RowMatrixType _transp;
	};
}

#include "../tcc/BiMatrix.tcc"