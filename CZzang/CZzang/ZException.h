#pragma once
#include "CZzang.h"

namespace czzang {

	class ZException : std::exception
	{
	public:
		/** Constructor (C strings).
		 *  @param message C-style string error message.
		 *                 The string contents are copied upon construction.
		 *                 Hence, responsibility for deleting the char* lies
		 *                 with the caller.
		 */
		explicit ZException(const char* message);

		/** Constructor (C++ STL strings).
		 *  @param message The error message.
		 */
		explicit ZException(const std::string& message);

		/** Destructor.
		 * Virtual to allow for subclassing.
		 */
		virtual ~ZException() throw ();

		/** Returns a pointer to the (constant) error description.
		 *  @return A pointer to a const char*. The underlying memory
		 *          is in posession of the Exception object. Callers must
		 *          not attempt to free the memory.
		 */
		virtual const char* what() const throw ();

	protected:
		/** Error message.
		 */
		std::string msg_;
	};


}