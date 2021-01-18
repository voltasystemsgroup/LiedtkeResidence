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
  Name=concat files (cm)
  SmplCName=concat files.csp
  Code=1
  SysRev5=3.154
  SMWRev=2.02.00
  InputCue1=concat
  InputSigType1=Digital
  InputList2Cue1=read_path$
  InputList2SigType1=Serial
  InputList2Cue2=read_wildcard$
  InputList2SigType2=Serial
  InputList2Cue3=write_filename$
  InputList2SigType3=Serial
  OutputList2Cue1=response_msg$
  OutputList2SigType1=Serial
  ParamCue1=[Reference Name]
  MinVariableInputs=1
  MaxVariableInputs=1
  MinVariableInputsList2=3
  MaxVariableInputsList2=3
  MinVariableOutputs=0
  MaxVariableOutputs=0
  MinVariableOutputsList2=1
  MaxVariableOutputsList2=1
  MinVariableParams=0
  MaxVariableParams=0
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
  MPp=1
  NVStorage=10
  ParamSigType1=String
  SmplCInputCue1=o#
  SmplCOutputCue1=i#
  SmplCInputList2Cue1=an#
  SmplCOutputList2Cue1=ai#
  SPlus2CompiledName=S2_concat_files
  SymJam=NonExclusive
  FileName=concat files.csh
[END]
[BEGIN]
  ObjTp=Dp
  H=1
  Tp=1
  NoS=False
[END]
