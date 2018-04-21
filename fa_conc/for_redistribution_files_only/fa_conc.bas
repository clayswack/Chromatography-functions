Dim MCLUtil As Object
Dim bModuleInitialized As Boolean
Dim Class1 As Object 

Private Sub InitModule()
    If Not bModuleInitialized Then
        On Error GoTo Handle_Error
        If MCLUtil Is Nothing Then
            Set MCLUtil = CreateObject("MWComUtil.MWUtil8.3")
        End If
        Call MCLUtil.MWInitApplication(Application)
        
        bModuleInitialized = True
        Exit Sub
Handle_Error:
        bModuleInitialized = False
    End If
End Sub

Function fa_conc(Optional sorted As Variant, Optional mass As Variant) As Variant

    Dim out As Variant

    On Error GoTo Handle_Error

#If CBool(Win64) Then
    fa_conc = "This Excel Add-In is built for 32 bit Excel and you are using 64 bit Excel. Rebuild the Excel Add-In with 64 bit MATLAB."
    Exit Function
#End If

    Call InitModule()

    If Class1 Is Nothing Then
        Set Class1 = CreateObject("fa_conc.Class1.1_0")
    End If

    Call Class1.fa_conc(1, out, sorted, mass)
    fa_conc = out

    Exit Function
Handle_Error:
    fa_conc = "Error in " & Err.Source & ": " & Err.Description
End Function
