[BEGIN]
  Version=1
[END]
[BEGIN]
  ObjTp=FSgntr
  Sgntr=CresSPlus
  RelVrs=1
  IntStrVrs=1
  SPlusVrs=4.02.20
  CrossCplrVrs=1.3
[END]
[BEGIN]
  ObjTp=Symbol
  Exclusions=1,19,20,21,88,89,167,168,179,213,214,215,216,217,225,226,248,249,266,267,310,718,756,854,
  Exclusions_CDS=6
  Inclusions_CDS=5
  Name=Load Control (cm)
  SmplCName=Load Control.csp
  Code=1
  SysRev5=4.000
  SMWRev=2.02.05
  InputCue1=Load_Level_Increasing
  InputSigType1=Digital
  InputCue2=Load_Level_Decreasing
  InputSigType2=Digital
  InputCue3=Load_Level_Ramping
  InputSigType3=Digital
  InputCue4=SubscriptionExpired
  InputSigType4=Digital
  OutputCue1=RaiseLevel
  OutputSigType1=Digital
  OutputCue2=LowerLevel
  OutputSigType2=Digital
  OutputCue3=LoadSubscribed
  OutputSigType3=Digital
  OutputCue4=LoadNotSubscribed
  OutputSigType4=Digital
  InputList2Cue1=Load_Cmd$
  InputList2SigType1=Serial
  InputList2Cue2=Path$
  InputList2SigType2=Serial
  OutputList2Cue1=SetLevel
  OutputList2SigType1=Analog
  OutputList2Cue2=Response$
  OutputList2SigType2=Serial
  OutputList2Cue3=ResponseID
  OutputList2SigType3=Analog
  ParamCue1=[Reference Name]
  ParamCue2=Load_Number
  ParamSigType2=Constant
  MinVariableInputs=4
  MaxVariableInputs=4
  MinVariableInputsList2=2
  MaxVariableInputsList2=2
  MinVariableOutputs=4
  MaxVariableOutputs=4
  MinVariableOutputsList2=3
  MaxVariableOutputsList2=3
  MinVariableParams=1
  MaxVariableParams=1
  Expand=expand_separately
  Expand2=expand_separately
  ProgramTree=Logic
  SymbolTree=0
  Hint=
  PdfHelp=
  HelpID= 
  Render=4
  Smpl-C=16
  CompilerCode=-48
  CompilerParamCode=27
  CompilerParamCode5=14
  NumFixedParams=1
  Pp1=1
  Pp2=2
  MPp=2
  NVStorage=10
  ParamSigType1=String
  SmplCInputCue1=o#
  SmplCOutputCue1=i#
  SmplCInputList2Cue1=an#
  SmplCOutputList2Cue1=ai#
  SPlus2CompiledName=S2_Load_Control
  SymJam=NonExclusive
  FileName=Load Control.csh
[END]
[BEGIN]
  ObjTp=Dp
  H=1
  Tp=1
  NoS=False
[END]
[BEGIN]
  ObjTp=Dp
  H=2
  Tp=1
  HD=True
  DV=FFd
  Sgn=0
  Lng=False
  NF=1
  NoS=True
  DNF=1
  VVS=0
[END]
