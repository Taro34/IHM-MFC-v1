
// Mfc.h�: fichier d'en-t�te principal pour l'application PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "incluez 'stdafx.h' avant d'inclure ce fichier pour PCH"
#endif

#include "resource.h"		// symboles principaux


// CMfcApp�:
// Consultez Mfc.cpp pour l'impl�mentation de cette classe
//

class CMfcApp : public CWinApp
{
public:
	CMfcApp();

// Substitutions
public:
	virtual BOOL InitInstance();

// Impl�mentation

	DECLARE_MESSAGE_MAP()
};

extern CMfcApp theApp;