/*
 * VTFLib
 * Copyright (C) 2005-2010 Neil Jedrzejewski & Ryan Gregg

 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later
 * version.
 */

#ifndef FILEWRITER_H
#define FILEWRITER_H

#include "stdafx.h"
#include "Writer.h"

namespace VTFLib
{
	namespace IO
	{
		namespace Writers
		{
			class CFileWriter : public IWriter
			{
			private:
				FILE* hFile;
				vlChar *cFileName;

			public:
				CFileWriter(const vlChar *cFileName);
				~CFileWriter();

			public:
				virtual vlBool Opened() const;

				virtual vlBool Open();
				virtual vlVoid Close();

				virtual vlUInt GetStreamSize() const;

				virtual vlUInt Seek(vlLong lOffset, vlUInt uiMode);

				virtual vlBool Write(vlChar cChar);
				virtual vlUInt Write(vlVoid *vData, vlUInt uiBytes);
			};
		}
	}
}

#endif