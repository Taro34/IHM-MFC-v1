
// MfcDlg.h : fichier d'en-tête
//

#pragma once
#include "afxwin.h"
#include "CJoueur.h"

// boîte de dialogue CMfcDlg
class CMfcDlg : public CDialogEx
{
// Construction
public:
	CMfcDlg(CWnd* pParent = NULL);	// constructeur standard

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// Prise en charge de DDX/DDV


// Implémentation
protected:
	HICON m_hIcon;

	// Fonctions générées de la table des messages
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP();
public:
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnCbnSelchangeCombo2();
	CComboBox mComboContrat;
	afx_msg void OnCbnSelchangeCombo1();
	CComboBox mPreneur;//jhh
};
