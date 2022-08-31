/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RANS-2.0-Source/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[231];
    char stringdata0[6045];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "SendNodeTabData"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 3), // "NID"
QT_MOC_LITERAL(4, 32, 2), // "x0"
QT_MOC_LITERAL(5, 35, 2), // "y0"
QT_MOC_LITERAL(6, 38, 2), // "z0"
QT_MOC_LITERAL(7, 41, 6), // "create"
QT_MOC_LITERAL(8, 48, 22), // "on_ImportSTL_triggered"
QT_MOC_LITERAL(9, 71, 31), // "ConvertPartToSampleSurfacePlane"
QT_MOC_LITERAL(10, 103, 29), // "on_ClearHistoryButton_clicked"
QT_MOC_LITERAL(11, 133, 29), // "on_actionFront_View_triggered"
QT_MOC_LITERAL(12, 163, 27), // "on_actionTop_View_triggered"
QT_MOC_LITERAL(13, 191, 28), // "on_actionLeft_View_triggered"
QT_MOC_LITERAL(14, 220, 30), // "on_actionBottom_View_triggered"
QT_MOC_LITERAL(15, 251, 29), // "on_actionRight_View_triggered"
QT_MOC_LITERAL(16, 281, 31), // "on_actionRight_View_2_triggered"
QT_MOC_LITERAL(17, 313, 28), // "on_actionWireFrame_triggered"
QT_MOC_LITERAL(18, 342, 29), // "on_actionShade_Mesh_triggered"
QT_MOC_LITERAL(19, 372, 24), // "on_actionSolid_triggered"
QT_MOC_LITERAL(20, 397, 30), // "on_actionSwap_Buffer_triggered"
QT_MOC_LITERAL(21, 428, 30), // "on_actionSelect_Part_triggered"
QT_MOC_LITERAL(22, 459, 17), // "GetSelectedPartID"
QT_MOC_LITERAL(23, 477, 2), // "ID"
QT_MOC_LITERAL(24, 480, 13), // "GetHidePartID"
QT_MOC_LITERAL(25, 494, 17), // "GetSelectedNodeID"
QT_MOC_LITERAL(26, 512, 22), // "GetOrigoby3NodesVector"
QT_MOC_LITERAL(27, 535, 1), // "x"
QT_MOC_LITERAL(28, 537, 1), // "y"
QT_MOC_LITERAL(29, 539, 1), // "z"
QT_MOC_LITERAL(30, 541, 18), // "DeleteSelectedPart"
QT_MOC_LITERAL(31, 560, 28), // "on_actionHide_Part_triggered"
QT_MOC_LITERAL(32, 589, 28), // "on_actionBy_Coords_triggered"
QT_MOC_LITERAL(33, 618, 27), // "on_NODE_Show_Button_clicked"
QT_MOC_LITERAL(34, 646, 22), // "on_SaveNodeTab_clicked"
QT_MOC_LITERAL(35, 669, 24), // "on_CancelNodeTab_clicked"
QT_MOC_LITERAL(36, 694, 23), // "on_CloseNodeTab_clicked"
QT_MOC_LITERAL(37, 718, 23), // "StatusBarActivePartName"
QT_MOC_LITERAL(38, 742, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(39, 759, 3), // "itm"
QT_MOC_LITERAL(40, 763, 3), // "col"
QT_MOC_LITERAL(41, 767, 23), // "GetVolumeRefinementData"
QT_MOC_LITERAL(42, 791, 16), // "VOLUMEREFINEMENT"
QT_MOC_LITERAL(43, 808, 21), // "GetPartTreeRefinement"
QT_MOC_LITERAL(44, 830, 3), // "PID"
QT_MOC_LITERAL(45, 834, 13), // "NumberofLayer"
QT_MOC_LITERAL(46, 848, 13), // "MinRefinement"
QT_MOC_LITERAL(47, 862, 13), // "MaxRefinement"
QT_MOC_LITERAL(48, 876, 17), // "GetPartIDfromTree"
QT_MOC_LITERAL(49, 894, 8), // "Partname"
QT_MOC_LITERAL(50, 903, 36), // "on_actionRefinement_Volume_tr..."
QT_MOC_LITERAL(51, 940, 28), // "on_Tunnel_ShowButton_clicked"
QT_MOC_LITERAL(52, 969, 26), // "on_Tunnel_SAVE_TAB_clicked"
QT_MOC_LITERAL(53, 996, 27), // "on_Tunnel_CLEAR_TAB_clicked"
QT_MOC_LITERAL(54, 1024, 27), // "on_Tunnel_CLOSE_TAB_clicked"
QT_MOC_LITERAL(55, 1052, 36), // "on_actionRunning_BlockMesh_tr..."
QT_MOC_LITERAL(56, 1089, 33), // "on_SelectProjectDirectory_cli..."
QT_MOC_LITERAL(57, 1123, 27), // "on_CreateNew_Button_clicked"
QT_MOC_LITERAL(58, 1151, 29), // "on_CloseNewTab_Button_clicked"
QT_MOC_LITERAL(59, 1181, 25), // "on_Open_Project_triggered"
QT_MOC_LITERAL(60, 1207, 23), // "on_NewProject_triggered"
QT_MOC_LITERAL(61, 1231, 29), // "on_actionWindTunnel_triggered"
QT_MOC_LITERAL(62, 1261, 34), // "on_actionEnvironment_Set_trig..."
QT_MOC_LITERAL(63, 1296, 31), // "on_MovePart_Show_Button_clicked"
QT_MOC_LITERAL(64, 1328, 37), // "on_MovePart_SelectPart_Button..."
QT_MOC_LITERAL(65, 1366, 32), // "on_MovePart_Close_Button_clicked"
QT_MOC_LITERAL(66, 1399, 28), // "on_actionMove_Part_triggered"
QT_MOC_LITERAL(67, 1428, 35), // "on_actionChange_Part_Name_tri..."
QT_MOC_LITERAL(68, 1464, 36), // "on_actionChange_Part_Color_tr..."
QT_MOC_LITERAL(69, 1501, 33), // "on_actionShow_BlockMesh_trigg..."
QT_MOC_LITERAL(70, 1535, 33), // "on_actionHide_BlockMesh_trigg..."
QT_MOC_LITERAL(71, 1569, 34), // "on_actionClear_BlockMesh_trig..."
QT_MOC_LITERAL(72, 1604, 37), // "on_actionRefinement_Surface_t..."
QT_MOC_LITERAL(73, 1642, 42), // "on_actionSet_SnappyHexParamet..."
QT_MOC_LITERAL(74, 1685, 34), // "on_actionSnappyHexMesher_trig..."
QT_MOC_LITERAL(75, 1720, 34), // "on_actionNumerical_Setup_trig..."
QT_MOC_LITERAL(76, 1755, 38), // "on_actionWrite_SnappyHexFile_..."
QT_MOC_LITERAL(77, 1794, 28), // "on_actionDecompose_triggered"
QT_MOC_LITERAL(78, 1823, 40), // "on_actionExtract_Feature_Edge..."
QT_MOC_LITERAL(79, 1864, 36), // "on_actionShow_Future_Edges_tr..."
QT_MOC_LITERAL(80, 1901, 42), // "on_actionRefinement_Feature_E..."
QT_MOC_LITERAL(81, 1944, 27), // "on_actionRenumber_triggered"
QT_MOC_LITERAL(82, 1972, 37), // "on_actionCheck_Mesh_Quality_t..."
QT_MOC_LITERAL(83, 2010, 37), // "on_actionCheck_Surface_Mesh_t..."
QT_MOC_LITERAL(84, 2048, 22), // "on_ImportObj_triggered"
QT_MOC_LITERAL(85, 2071, 37), // "on_actionBoundary_Condition_t..."
QT_MOC_LITERAL(86, 2109, 18), // "SetTurbulenceModel"
QT_MOC_LITERAL(87, 2128, 15), // "TurbulenceModel"
QT_MOC_LITERAL(88, 2144, 8), // "solverid"
QT_MOC_LITERAL(89, 2153, 13), // "potentialfoam"
QT_MOC_LITERAL(90, 2167, 18), // "applyboundarylayer"
QT_MOC_LITERAL(91, 2186, 6), // "blayer"
QT_MOC_LITERAL(92, 2193, 19), // "TurbulenceIntensity"
QT_MOC_LITERAL(93, 2213, 9), // "Ch_Length"
QT_MOC_LITERAL(94, 2223, 9), // "CONDITION"
QT_MOC_LITERAL(95, 2233, 5), // "INLET"
QT_MOC_LITERAL(96, 2239, 6), // "GROUND"
QT_MOC_LITERAL(97, 2246, 7), // "TOPWALL"
QT_MOC_LITERAL(98, 2254, 8), // "LEFTWALL"
QT_MOC_LITERAL(99, 2263, 9), // "RIGHTWALL"
QT_MOC_LITERAL(100, 2273, 14), // "QList<QString>"
QT_MOC_LITERAL(101, 2288, 11), // "staticwalls"
QT_MOC_LITERAL(102, 2300, 19), // "QList<ROTATIONWALL>"
QT_MOC_LITERAL(103, 2320, 8), // "rotwalls"
QT_MOC_LITERAL(104, 2329, 3), // "cr1"
QT_MOC_LITERAL(105, 2333, 3), // "cr2"
QT_MOC_LITERAL(106, 2337, 3), // "cr3"
QT_MOC_LITERAL(107, 2341, 13), // "SetPorousPart"
QT_MOC_LITERAL(108, 2355, 5), // "Pname"
QT_MOC_LITERAL(109, 2361, 12), // "Coordsysname"
QT_MOC_LITERAL(110, 2374, 2), // "dx"
QT_MOC_LITERAL(111, 2377, 2), // "dy"
QT_MOC_LITERAL(112, 2380, 2), // "dz"
QT_MOC_LITERAL(113, 2383, 2), // "fx"
QT_MOC_LITERAL(114, 2386, 2), // "fy"
QT_MOC_LITERAL(115, 2389, 2), // "fz"
QT_MOC_LITERAL(116, 2392, 37), // "on_actionReconstructParMesh_t..."
QT_MOC_LITERAL(117, 2430, 26), // "on_SAVE_ForceCoeff_clicked"
QT_MOC_LITERAL(118, 2457, 35), // "on_actionForce_Parameters_tri..."
QT_MOC_LITERAL(119, 2493, 27), // "on_CLOSE_ForceCoeff_clicked"
QT_MOC_LITERAL(120, 2521, 30), // "on_actionControlDict_triggered"
QT_MOC_LITERAL(121, 2552, 26), // "on_Save_ContolDict_clicked"
QT_MOC_LITERAL(122, 2579, 28), // "on_Close_ControlDict_clicked"
QT_MOC_LITERAL(123, 2608, 34), // "on_AddProbeLocation_Button_cl..."
QT_MOC_LITERAL(124, 2643, 25), // "on_actionProbes_triggered"
QT_MOC_LITERAL(125, 2669, 37), // "on_RemoveProbeLocation_Button..."
QT_MOC_LITERAL(126, 2707, 35), // "on_ShowProbeLocation_Button_c..."
QT_MOC_LITERAL(127, 2743, 24), // "on_Save_ProbeTab_clicked"
QT_MOC_LITERAL(128, 2768, 26), // "on_Close_Probe_Tab_clicked"
QT_MOC_LITERAL(129, 2795, 28), // "on_actionSubmitJob_triggered"
QT_MOC_LITERAL(130, 2824, 27), // "on_actionParaView_triggered"
QT_MOC_LITERAL(131, 2852, 32), // "on_actionResidual_Plot_triggered"
QT_MOC_LITERAL(132, 2885, 26), // "on_ImportNastran_triggered"
QT_MOC_LITERAL(133, 2912, 26), // "on_SaveMaterialTab_clicked"
QT_MOC_LITERAL(134, 2939, 27), // "on_actionMaterial_triggered"
QT_MOC_LITERAL(135, 2967, 26), // "on_QuitMaterialTab_clicked"
QT_MOC_LITERAL(136, 2994, 30), // "on_PartSetColor_Button_clicked"
QT_MOC_LITERAL(137, 3025, 29), // "on_SavePartSet_Button_clicked"
QT_MOC_LITERAL(138, 3055, 29), // "on_QuitPartSet_Button_clicked"
QT_MOC_LITERAL(139, 3085, 30), // "on_actionCreate_Part_triggered"
QT_MOC_LITERAL(140, 3116, 33), // "on_actionCOG_by_3_Nodes_trigg..."
QT_MOC_LITERAL(141, 3150, 25), // "on_Save_Project_triggered"
QT_MOC_LITERAL(142, 3176, 26), // "on_SelectOrigo_BTN_clicked"
QT_MOC_LITERAL(143, 3203, 30), // "on_ShowCoordSystem_BTN_clicked"
QT_MOC_LITERAL(144, 3234, 31), // "on_CoordSystem_Save_BTN_clicked"
QT_MOC_LITERAL(145, 3266, 32), // "on_CoordSystem_Close_Tab_clicked"
QT_MOC_LITERAL(146, 3299, 32), // "on_By3NodesCenter_Button_clicked"
QT_MOC_LITERAL(147, 3332, 30), // "on_actionCoordSystem_triggered"
QT_MOC_LITERAL(148, 3363, 37), // "on_actionHide_Feature_Edges_t..."
QT_MOC_LITERAL(149, 3401, 31), // "on_actionRefineMesh_2_triggered"
QT_MOC_LITERAL(150, 3433, 36), // "on_Close_Refinement_Cell_Ref_..."
QT_MOC_LITERAL(151, 3470, 35), // "on_Show_Refinement_Cell_Ref_c..."
QT_MOC_LITERAL(152, 3506, 35), // "on_Save_Refinement_Cell_Ref_c..."
QT_MOC_LITERAL(153, 3542, 27), // "on_ToposetColor_Set_clicked"
QT_MOC_LITERAL(154, 3570, 27), // "on_QuitMainWindow_triggered"
QT_MOC_LITERAL(155, 3598, 27), // "on_yplusCalc_Button_clicked"
QT_MOC_LITERAL(156, 3626, 31), // "on_actionY_Calculator_triggered"
QT_MOC_LITERAL(157, 3658, 30), // "on_YPlusTabExit_Button_clicked"
QT_MOC_LITERAL(158, 3689, 40), // "on_RefineWallEdgeRatioAdd_But..."
QT_MOC_LITERAL(159, 3730, 40), // "on_RefineWallEdgeRatioRmv_But..."
QT_MOC_LITERAL(160, 3771, 36), // "on_actionRefineWallLayer_2_tr..."
QT_MOC_LITERAL(161, 3808, 27), // "LoadPartWallLayerRefinement"
QT_MOC_LITERAL(162, 3836, 37), // "on_RefineWallLayerSaveRun_But..."
QT_MOC_LITERAL(163, 3874, 36), // "on_RefineWallLayer_Close_But_..."
QT_MOC_LITERAL(164, 3911, 34), // "on_RefineWallLayerSave_but_cl..."
QT_MOC_LITERAL(165, 3946, 27), // "on_actionClipView_triggered"
QT_MOC_LITERAL(166, 3974, 24), // "on_actionYPlus_triggered"
QT_MOC_LITERAL(167, 3999, 30), // "on_actionDelete_Part_triggered"
QT_MOC_LITERAL(168, 4030, 39), // "on_actionReplace_Part_By_Part..."
QT_MOC_LITERAL(169, 4070, 20), // "on_NACA_SHOW_clicked"
QT_MOC_LITERAL(170, 4091, 20), // "on_NACA_SAVE_clicked"
QT_MOC_LITERAL(171, 4112, 21), // "on_NACA_CLOSE_clicked"
QT_MOC_LITERAL(172, 4134, 28), // "on_actionNaca_Duct_triggered"
QT_MOC_LITERAL(173, 4163, 37), // "on_ForceCoeff_ShowCOFR_Button..."
QT_MOC_LITERAL(174, 4201, 21), // "COGInfoofSelectedPart"
QT_MOC_LITERAL(175, 4223, 34), // "on_Plane_Orientation_X_But_cl..."
QT_MOC_LITERAL(176, 4258, 34), // "on_Plane_Orientation_Y_But_cl..."
QT_MOC_LITERAL(177, 4293, 34), // "on_Plane_Orientation_Z_But_cl..."
QT_MOC_LITERAL(178, 4328, 25), // "on_Plane_Show_But_clicked"
QT_MOC_LITERAL(179, 4354, 25), // "on_Plane_Save_But_clicked"
QT_MOC_LITERAL(180, 4380, 26), // "on_Plane_Close_But_clicked"
QT_MOC_LITERAL(181, 4407, 30), // "on_actionCreatePlane_triggered"
QT_MOC_LITERAL(182, 4438, 24), // "GetActualIterationNumber"
QT_MOC_LITERAL(183, 4463, 26), // "on_actionTetMesh_triggered"
QT_MOC_LITERAL(184, 4490, 20), // "on_Save_As_triggered"
QT_MOC_LITERAL(185, 4511, 29), // "on_actionMovingBelt_triggered"
QT_MOC_LITERAL(186, 4541, 32), // "on_actionMBTopoSetDict_triggered"
QT_MOC_LITERAL(187, 4574, 32), // "on_actionMBCreatePatch_triggered"
QT_MOC_LITERAL(188, 4607, 31), // "on_RH_Show_F_MasterNode_clicked"
QT_MOC_LITERAL(189, 4639, 31), // "on_RH_Show_R_MasterNode_clicked"
QT_MOC_LITERAL(190, 4671, 25), // "on_RH_Set_Visible_clicked"
QT_MOC_LITERAL(191, 4697, 21), // "on_RH_Set_All_clicked"
QT_MOC_LITERAL(192, 4719, 19), // "on_RH_Close_clicked"
QT_MOC_LITERAL(193, 4739, 30), // "on_actionRide_Height_triggered"
QT_MOC_LITERAL(194, 4770, 28), // "on_actionSTLexport_triggered"
QT_MOC_LITERAL(195, 4799, 24), // "on_actionImage_triggered"
QT_MOC_LITERAL(196, 4824, 27), // "on_actionIdentify_triggered"
QT_MOC_LITERAL(197, 4852, 37), // "on_actionShow_Part_Node_IDs_t..."
QT_MOC_LITERAL(198, 4890, 37), // "on_actionHide_Part_Node_IDs_t..."
QT_MOC_LITERAL(199, 4928, 31), // "on_actionMerge_Mesh_2_triggered"
QT_MOC_LITERAL(200, 4960, 32), // "on_actionNastranexport_triggered"
QT_MOC_LITERAL(201, 4993, 33), // "on_actionToCellZonePart_trigg..."
QT_MOC_LITERAL(202, 5027, 36), // "on_actionMergeVisibleParts_tr..."
QT_MOC_LITERAL(203, 5064, 32), // "on_actionMapRideHeight_triggered"
QT_MOC_LITERAL(204, 5097, 37), // "on_RideHeightMapAddSet_Button..."
QT_MOC_LITERAL(205, 5135, 37), // "on_RideHeightMapDelSet_Button..."
QT_MOC_LITERAL(206, 5173, 37), // "on_RideHeightMap_Close_Button..."
QT_MOC_LITERAL(207, 5211, 43), // "on_RideHeightMap_SetVisParts_..."
QT_MOC_LITERAL(208, 5255, 34), // "on_FrontMasterNode_MapShow_cl..."
QT_MOC_LITERAL(209, 5290, 33), // "on_RearMasterNode_MapShow_cli..."
QT_MOC_LITERAL(210, 5324, 43), // "on_RideHeightMap_SetAllParts_..."
QT_MOC_LITERAL(211, 5368, 29), // "on_DOE_ADDCase_Button_clicked"
QT_MOC_LITERAL(212, 5398, 32), // "on_DOE_RemoveCASE_Button_clicked"
QT_MOC_LITERAL(213, 5431, 35), // "on_DOE_Parameter_ADD_Button_c..."
QT_MOC_LITERAL(214, 5467, 38), // "on_DOE_Parameter_Remove_Butto..."
QT_MOC_LITERAL(215, 5506, 22), // "on_actionDOE_triggered"
QT_MOC_LITERAL(216, 5529, 37), // "on_DOE_Parameter_Close_Button..."
QT_MOC_LITERAL(217, 5567, 35), // "on_adaptiveMesh_vorticity_tri..."
QT_MOC_LITERAL(218, 5603, 39), // "on_adaptiveMesh_velocity_grad..."
QT_MOC_LITERAL(219, 5643, 39), // "on_adaptiveMesh_pressure_grad..."
QT_MOC_LITERAL(220, 5683, 35), // "on_actionSurface_Morphing_tri..."
QT_MOC_LITERAL(221, 5719, 33), // "on_MorphingBox_ShowButton_cli..."
QT_MOC_LITERAL(222, 5753, 28), // "on_Morphing_Morphing_clicked"
QT_MOC_LITERAL(223, 5782, 25), // "on_Morphing_Close_clicked"
QT_MOC_LITERAL(224, 5808, 34), // "on_Morphing_Save_Parameter_cl..."
QT_MOC_LITERAL(225, 5843, 23), // "on_Morhing_Undo_clicked"
QT_MOC_LITERAL(226, 5867, 31), // "on_actionCombineParts_triggered"
QT_MOC_LITERAL(227, 5899, 31), // "on_Combine_Parts_Action_clicked"
QT_MOC_LITERAL(228, 5931, 30), // "on_Combine_Parts_Close_clicked"
QT_MOC_LITERAL(229, 5962, 40), // "on_Morphing_ShowSelectMasterN..."
QT_MOC_LITERAL(230, 6003, 41) // "on_RideHeightMapShowActual_Bu..."

    },
    "MainWindow\0SendNodeTabData\0\0NID\0x0\0"
    "y0\0z0\0create\0on_ImportSTL_triggered\0"
    "ConvertPartToSampleSurfacePlane\0"
    "on_ClearHistoryButton_clicked\0"
    "on_actionFront_View_triggered\0"
    "on_actionTop_View_triggered\0"
    "on_actionLeft_View_triggered\0"
    "on_actionBottom_View_triggered\0"
    "on_actionRight_View_triggered\0"
    "on_actionRight_View_2_triggered\0"
    "on_actionWireFrame_triggered\0"
    "on_actionShade_Mesh_triggered\0"
    "on_actionSolid_triggered\0"
    "on_actionSwap_Buffer_triggered\0"
    "on_actionSelect_Part_triggered\0"
    "GetSelectedPartID\0ID\0GetHidePartID\0"
    "GetSelectedNodeID\0GetOrigoby3NodesVector\0"
    "x\0y\0z\0DeleteSelectedPart\0"
    "on_actionHide_Part_triggered\0"
    "on_actionBy_Coords_triggered\0"
    "on_NODE_Show_Button_clicked\0"
    "on_SaveNodeTab_clicked\0on_CancelNodeTab_clicked\0"
    "on_CloseNodeTab_clicked\0StatusBarActivePartName\0"
    "QTreeWidgetItem*\0itm\0col\0"
    "GetVolumeRefinementData\0VOLUMEREFINEMENT\0"
    "GetPartTreeRefinement\0PID\0NumberofLayer\0"
    "MinRefinement\0MaxRefinement\0"
    "GetPartIDfromTree\0Partname\0"
    "on_actionRefinement_Volume_triggered\0"
    "on_Tunnel_ShowButton_clicked\0"
    "on_Tunnel_SAVE_TAB_clicked\0"
    "on_Tunnel_CLEAR_TAB_clicked\0"
    "on_Tunnel_CLOSE_TAB_clicked\0"
    "on_actionRunning_BlockMesh_triggered\0"
    "on_SelectProjectDirectory_clicked\0"
    "on_CreateNew_Button_clicked\0"
    "on_CloseNewTab_Button_clicked\0"
    "on_Open_Project_triggered\0"
    "on_NewProject_triggered\0"
    "on_actionWindTunnel_triggered\0"
    "on_actionEnvironment_Set_triggered\0"
    "on_MovePart_Show_Button_clicked\0"
    "on_MovePart_SelectPart_Button_clicked\0"
    "on_MovePart_Close_Button_clicked\0"
    "on_actionMove_Part_triggered\0"
    "on_actionChange_Part_Name_triggered\0"
    "on_actionChange_Part_Color_triggered\0"
    "on_actionShow_BlockMesh_triggered\0"
    "on_actionHide_BlockMesh_triggered\0"
    "on_actionClear_BlockMesh_triggered\0"
    "on_actionRefinement_Surface_triggered\0"
    "on_actionSet_SnappyHexParameters_triggered\0"
    "on_actionSnappyHexMesher_triggered\0"
    "on_actionNumerical_Setup_triggered\0"
    "on_actionWrite_SnappyHexFile_triggered\0"
    "on_actionDecompose_triggered\0"
    "on_actionExtract_Feature_Edges_triggered\0"
    "on_actionShow_Future_Edges_triggered\0"
    "on_actionRefinement_Feature_Edge_triggered\0"
    "on_actionRenumber_triggered\0"
    "on_actionCheck_Mesh_Quality_triggered\0"
    "on_actionCheck_Surface_Mesh_triggered\0"
    "on_ImportObj_triggered\0"
    "on_actionBoundary_Condition_triggered\0"
    "SetTurbulenceModel\0TurbulenceModel\0"
    "solverid\0potentialfoam\0applyboundarylayer\0"
    "blayer\0TurbulenceIntensity\0Ch_Length\0"
    "CONDITION\0INLET\0GROUND\0TOPWALL\0LEFTWALL\0"
    "RIGHTWALL\0QList<QString>\0staticwalls\0"
    "QList<ROTATIONWALL>\0rotwalls\0cr1\0cr2\0"
    "cr3\0SetPorousPart\0Pname\0Coordsysname\0"
    "dx\0dy\0dz\0fx\0fy\0fz\0"
    "on_actionReconstructParMesh_triggered\0"
    "on_SAVE_ForceCoeff_clicked\0"
    "on_actionForce_Parameters_triggered\0"
    "on_CLOSE_ForceCoeff_clicked\0"
    "on_actionControlDict_triggered\0"
    "on_Save_ContolDict_clicked\0"
    "on_Close_ControlDict_clicked\0"
    "on_AddProbeLocation_Button_clicked\0"
    "on_actionProbes_triggered\0"
    "on_RemoveProbeLocation_Button_clicked\0"
    "on_ShowProbeLocation_Button_clicked\0"
    "on_Save_ProbeTab_clicked\0"
    "on_Close_Probe_Tab_clicked\0"
    "on_actionSubmitJob_triggered\0"
    "on_actionParaView_triggered\0"
    "on_actionResidual_Plot_triggered\0"
    "on_ImportNastran_triggered\0"
    "on_SaveMaterialTab_clicked\0"
    "on_actionMaterial_triggered\0"
    "on_QuitMaterialTab_clicked\0"
    "on_PartSetColor_Button_clicked\0"
    "on_SavePartSet_Button_clicked\0"
    "on_QuitPartSet_Button_clicked\0"
    "on_actionCreate_Part_triggered\0"
    "on_actionCOG_by_3_Nodes_triggered\0"
    "on_Save_Project_triggered\0"
    "on_SelectOrigo_BTN_clicked\0"
    "on_ShowCoordSystem_BTN_clicked\0"
    "on_CoordSystem_Save_BTN_clicked\0"
    "on_CoordSystem_Close_Tab_clicked\0"
    "on_By3NodesCenter_Button_clicked\0"
    "on_actionCoordSystem_triggered\0"
    "on_actionHide_Feature_Edges_triggered\0"
    "on_actionRefineMesh_2_triggered\0"
    "on_Close_Refinement_Cell_Ref_clicked\0"
    "on_Show_Refinement_Cell_Ref_clicked\0"
    "on_Save_Refinement_Cell_Ref_clicked\0"
    "on_ToposetColor_Set_clicked\0"
    "on_QuitMainWindow_triggered\0"
    "on_yplusCalc_Button_clicked\0"
    "on_actionY_Calculator_triggered\0"
    "on_YPlusTabExit_Button_clicked\0"
    "on_RefineWallEdgeRatioAdd_Button_clicked\0"
    "on_RefineWallEdgeRatioRmv_Button_clicked\0"
    "on_actionRefineWallLayer_2_triggered\0"
    "LoadPartWallLayerRefinement\0"
    "on_RefineWallLayerSaveRun_But_clicked\0"
    "on_RefineWallLayer_Close_But_clicked\0"
    "on_RefineWallLayerSave_but_clicked\0"
    "on_actionClipView_triggered\0"
    "on_actionYPlus_triggered\0"
    "on_actionDelete_Part_triggered\0"
    "on_actionReplace_Part_By_Part_triggered\0"
    "on_NACA_SHOW_clicked\0on_NACA_SAVE_clicked\0"
    "on_NACA_CLOSE_clicked\0"
    "on_actionNaca_Duct_triggered\0"
    "on_ForceCoeff_ShowCOFR_Button_clicked\0"
    "COGInfoofSelectedPart\0"
    "on_Plane_Orientation_X_But_clicked\0"
    "on_Plane_Orientation_Y_But_clicked\0"
    "on_Plane_Orientation_Z_But_clicked\0"
    "on_Plane_Show_But_clicked\0"
    "on_Plane_Save_But_clicked\0"
    "on_Plane_Close_But_clicked\0"
    "on_actionCreatePlane_triggered\0"
    "GetActualIterationNumber\0"
    "on_actionTetMesh_triggered\0"
    "on_Save_As_triggered\0on_actionMovingBelt_triggered\0"
    "on_actionMBTopoSetDict_triggered\0"
    "on_actionMBCreatePatch_triggered\0"
    "on_RH_Show_F_MasterNode_clicked\0"
    "on_RH_Show_R_MasterNode_clicked\0"
    "on_RH_Set_Visible_clicked\0"
    "on_RH_Set_All_clicked\0on_RH_Close_clicked\0"
    "on_actionRide_Height_triggered\0"
    "on_actionSTLexport_triggered\0"
    "on_actionImage_triggered\0"
    "on_actionIdentify_triggered\0"
    "on_actionShow_Part_Node_IDs_triggered\0"
    "on_actionHide_Part_Node_IDs_triggered\0"
    "on_actionMerge_Mesh_2_triggered\0"
    "on_actionNastranexport_triggered\0"
    "on_actionToCellZonePart_triggered\0"
    "on_actionMergeVisibleParts_triggered\0"
    "on_actionMapRideHeight_triggered\0"
    "on_RideHeightMapAddSet_Button_clicked\0"
    "on_RideHeightMapDelSet_Button_clicked\0"
    "on_RideHeightMap_Close_Button_clicked\0"
    "on_RideHeightMap_SetVisParts_Button_clicked\0"
    "on_FrontMasterNode_MapShow_clicked\0"
    "on_RearMasterNode_MapShow_clicked\0"
    "on_RideHeightMap_SetAllParts_Button_clicked\0"
    "on_DOE_ADDCase_Button_clicked\0"
    "on_DOE_RemoveCASE_Button_clicked\0"
    "on_DOE_Parameter_ADD_Button_clicked\0"
    "on_DOE_Parameter_Remove_Button_clicked\0"
    "on_actionDOE_triggered\0"
    "on_DOE_Parameter_Close_Button_clicked\0"
    "on_adaptiveMesh_vorticity_triggered\0"
    "on_adaptiveMesh_velocity_grad_triggered\0"
    "on_adaptiveMesh_pressure_grad_triggered\0"
    "on_actionSurface_Morphing_triggered\0"
    "on_MorphingBox_ShowButton_clicked\0"
    "on_Morphing_Morphing_clicked\0"
    "on_Morphing_Close_clicked\0"
    "on_Morphing_Save_Parameter_clicked\0"
    "on_Morhing_Undo_clicked\0"
    "on_actionCombineParts_triggered\0"
    "on_Combine_Parts_Action_clicked\0"
    "on_Combine_Parts_Close_clicked\0"
    "on_Morphing_ShowSelectMasterNode_clicked\0"
    "on_RideHeightMapShowActual_Button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     183,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,  929,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  940,    2, 0x08 /* Private */,
       9,    0,  941,    2, 0x08 /* Private */,
      10,    0,  942,    2, 0x08 /* Private */,
      11,    0,  943,    2, 0x08 /* Private */,
      12,    0,  944,    2, 0x08 /* Private */,
      13,    0,  945,    2, 0x08 /* Private */,
      14,    0,  946,    2, 0x08 /* Private */,
      15,    0,  947,    2, 0x08 /* Private */,
      16,    0,  948,    2, 0x08 /* Private */,
      17,    0,  949,    2, 0x08 /* Private */,
      18,    0,  950,    2, 0x08 /* Private */,
      19,    0,  951,    2, 0x08 /* Private */,
      20,    0,  952,    2, 0x08 /* Private */,
      21,    0,  953,    2, 0x08 /* Private */,
      22,    1,  954,    2, 0x08 /* Private */,
      24,    1,  957,    2, 0x08 /* Private */,
      25,    1,  960,    2, 0x08 /* Private */,
      26,    3,  963,    2, 0x08 /* Private */,
      30,    0,  970,    2, 0x08 /* Private */,
      31,    0,  971,    2, 0x08 /* Private */,
      32,    0,  972,    2, 0x08 /* Private */,
      33,    0,  973,    2, 0x08 /* Private */,
      34,    0,  974,    2, 0x08 /* Private */,
      35,    0,  975,    2, 0x08 /* Private */,
      36,    0,  976,    2, 0x08 /* Private */,
      37,    2,  977,    2, 0x08 /* Private */,
      41,    2,  982,    2, 0x08 /* Private */,
      43,    4,  987,    2, 0x08 /* Private */,
      48,    1,  996,    2, 0x08 /* Private */,
      50,    0,  999,    2, 0x08 /* Private */,
      51,    0, 1000,    2, 0x08 /* Private */,
      52,    0, 1001,    2, 0x08 /* Private */,
      53,    0, 1002,    2, 0x08 /* Private */,
      54,    0, 1003,    2, 0x08 /* Private */,
      55,    0, 1004,    2, 0x08 /* Private */,
      56,    0, 1005,    2, 0x08 /* Private */,
      57,    0, 1006,    2, 0x08 /* Private */,
      58,    0, 1007,    2, 0x08 /* Private */,
      59,    0, 1008,    2, 0x08 /* Private */,
      60,    0, 1009,    2, 0x08 /* Private */,
      61,    0, 1010,    2, 0x08 /* Private */,
      62,    0, 1011,    2, 0x08 /* Private */,
      63,    0, 1012,    2, 0x08 /* Private */,
      64,    0, 1013,    2, 0x08 /* Private */,
      65,    0, 1014,    2, 0x08 /* Private */,
      66,    0, 1015,    2, 0x08 /* Private */,
      67,    0, 1016,    2, 0x08 /* Private */,
      68,    0, 1017,    2, 0x08 /* Private */,
      69,    0, 1018,    2, 0x08 /* Private */,
      70,    0, 1019,    2, 0x08 /* Private */,
      71,    0, 1020,    2, 0x08 /* Private */,
      72,    0, 1021,    2, 0x08 /* Private */,
      73,    0, 1022,    2, 0x08 /* Private */,
      74,    0, 1023,    2, 0x08 /* Private */,
      75,    0, 1024,    2, 0x08 /* Private */,
      76,    0, 1025,    2, 0x08 /* Private */,
      77,    0, 1026,    2, 0x08 /* Private */,
      78,    0, 1027,    2, 0x08 /* Private */,
      79,    0, 1028,    2, 0x08 /* Private */,
      80,    0, 1029,    2, 0x08 /* Private */,
      81,    0, 1030,    2, 0x08 /* Private */,
      82,    0, 1031,    2, 0x08 /* Private */,
      83,    0, 1032,    2, 0x08 /* Private */,
      84,    0, 1033,    2, 0x08 /* Private */,
      85,    0, 1034,    2, 0x08 /* Private */,
      86,   17, 1035,    2, 0x08 /* Private */,
     107,    8, 1070,    2, 0x08 /* Private */,
     116,    0, 1087,    2, 0x08 /* Private */,
     117,    0, 1088,    2, 0x08 /* Private */,
     118,    0, 1089,    2, 0x08 /* Private */,
     119,    0, 1090,    2, 0x08 /* Private */,
     120,    0, 1091,    2, 0x08 /* Private */,
     121,    0, 1092,    2, 0x08 /* Private */,
     122,    0, 1093,    2, 0x08 /* Private */,
     123,    0, 1094,    2, 0x08 /* Private */,
     124,    0, 1095,    2, 0x08 /* Private */,
     125,    0, 1096,    2, 0x08 /* Private */,
     126,    0, 1097,    2, 0x08 /* Private */,
     127,    0, 1098,    2, 0x08 /* Private */,
     128,    0, 1099,    2, 0x08 /* Private */,
     129,    0, 1100,    2, 0x08 /* Private */,
     130,    0, 1101,    2, 0x08 /* Private */,
     131,    0, 1102,    2, 0x08 /* Private */,
     132,    0, 1103,    2, 0x08 /* Private */,
     133,    0, 1104,    2, 0x08 /* Private */,
     134,    0, 1105,    2, 0x08 /* Private */,
     135,    0, 1106,    2, 0x08 /* Private */,
     136,    0, 1107,    2, 0x08 /* Private */,
     137,    0, 1108,    2, 0x08 /* Private */,
     138,    0, 1109,    2, 0x08 /* Private */,
     139,    0, 1110,    2, 0x08 /* Private */,
     140,    0, 1111,    2, 0x08 /* Private */,
     141,    0, 1112,    2, 0x08 /* Private */,
     142,    0, 1113,    2, 0x08 /* Private */,
     143,    0, 1114,    2, 0x08 /* Private */,
     144,    0, 1115,    2, 0x08 /* Private */,
     145,    0, 1116,    2, 0x08 /* Private */,
     146,    0, 1117,    2, 0x08 /* Private */,
     147,    0, 1118,    2, 0x08 /* Private */,
     148,    0, 1119,    2, 0x08 /* Private */,
     149,    0, 1120,    2, 0x08 /* Private */,
     150,    0, 1121,    2, 0x08 /* Private */,
     151,    0, 1122,    2, 0x08 /* Private */,
     152,    0, 1123,    2, 0x08 /* Private */,
     153,    0, 1124,    2, 0x08 /* Private */,
     154,    0, 1125,    2, 0x08 /* Private */,
     155,    0, 1126,    2, 0x08 /* Private */,
     156,    0, 1127,    2, 0x08 /* Private */,
     157,    0, 1128,    2, 0x08 /* Private */,
     158,    0, 1129,    2, 0x08 /* Private */,
     159,    0, 1130,    2, 0x08 /* Private */,
     160,    0, 1131,    2, 0x08 /* Private */,
     161,    1, 1132,    2, 0x08 /* Private */,
     162,    0, 1135,    2, 0x08 /* Private */,
     163,    0, 1136,    2, 0x08 /* Private */,
     164,    0, 1137,    2, 0x08 /* Private */,
     165,    0, 1138,    2, 0x08 /* Private */,
     166,    0, 1139,    2, 0x08 /* Private */,
     167,    0, 1140,    2, 0x08 /* Private */,
     168,    0, 1141,    2, 0x08 /* Private */,
     169,    0, 1142,    2, 0x08 /* Private */,
     170,    0, 1143,    2, 0x08 /* Private */,
     171,    0, 1144,    2, 0x08 /* Private */,
     172,    0, 1145,    2, 0x08 /* Private */,
     173,    0, 1146,    2, 0x08 /* Private */,
     174,    0, 1147,    2, 0x08 /* Private */,
     175,    0, 1148,    2, 0x08 /* Private */,
     176,    0, 1149,    2, 0x08 /* Private */,
     177,    0, 1150,    2, 0x08 /* Private */,
     178,    0, 1151,    2, 0x08 /* Private */,
     179,    0, 1152,    2, 0x08 /* Private */,
     180,    0, 1153,    2, 0x08 /* Private */,
     181,    0, 1154,    2, 0x08 /* Private */,
     182,    1, 1155,    2, 0x08 /* Private */,
     183,    0, 1158,    2, 0x08 /* Private */,
     184,    0, 1159,    2, 0x08 /* Private */,
     185,    0, 1160,    2, 0x08 /* Private */,
     186,    0, 1161,    2, 0x08 /* Private */,
     187,    0, 1162,    2, 0x08 /* Private */,
     188,    0, 1163,    2, 0x08 /* Private */,
     189,    0, 1164,    2, 0x08 /* Private */,
     190,    0, 1165,    2, 0x08 /* Private */,
     191,    0, 1166,    2, 0x08 /* Private */,
     192,    0, 1167,    2, 0x08 /* Private */,
     193,    0, 1168,    2, 0x08 /* Private */,
     194,    0, 1169,    2, 0x08 /* Private */,
     195,    0, 1170,    2, 0x08 /* Private */,
     196,    0, 1171,    2, 0x08 /* Private */,
     197,    0, 1172,    2, 0x08 /* Private */,
     198,    0, 1173,    2, 0x08 /* Private */,
     199,    0, 1174,    2, 0x08 /* Private */,
     200,    0, 1175,    2, 0x08 /* Private */,
     201,    0, 1176,    2, 0x08 /* Private */,
     202,    0, 1177,    2, 0x08 /* Private */,
     203,    0, 1178,    2, 0x08 /* Private */,
     204,    0, 1179,    2, 0x08 /* Private */,
     205,    0, 1180,    2, 0x08 /* Private */,
     206,    0, 1181,    2, 0x08 /* Private */,
     207,    0, 1182,    2, 0x08 /* Private */,
     208,    0, 1183,    2, 0x08 /* Private */,
     209,    0, 1184,    2, 0x08 /* Private */,
     210,    0, 1185,    2, 0x08 /* Private */,
     211,    0, 1186,    2, 0x08 /* Private */,
     212,    0, 1187,    2, 0x08 /* Private */,
     213,    0, 1188,    2, 0x08 /* Private */,
     214,    0, 1189,    2, 0x08 /* Private */,
     215,    0, 1190,    2, 0x08 /* Private */,
     216,    0, 1191,    2, 0x08 /* Private */,
     217,    0, 1192,    2, 0x08 /* Private */,
     218,    0, 1193,    2, 0x08 /* Private */,
     219,    0, 1194,    2, 0x08 /* Private */,
     220,    0, 1195,    2, 0x08 /* Private */,
     221,    0, 1196,    2, 0x08 /* Private */,
     222,    0, 1197,    2, 0x08 /* Private */,
     223,    0, 1198,    2, 0x08 /* Private */,
     224,    0, 1199,    2, 0x08 /* Private */,
     225,    0, 1200,    2, 0x08 /* Private */,
     226,    0, 1201,    2, 0x08 /* Private */,
     227,    0, 1202,    2, 0x08 /* Private */,
     228,    0, 1203,    2, 0x08 /* Private */,
     229,    0, 1204,    2, 0x08 /* Private */,
     230,    0, 1205,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Bool,    3,    4,    5,    6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   23,
    QMetaType::Void, QMetaType::UInt,   23,
    QMetaType::Void, QMetaType::UInt,   23,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,   27,   28,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 38, QMetaType::Int,   39,   40,
    QMetaType::Void, 0x80000000 | 42, QMetaType::Char,   39,    7,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt,   44,   45,   46,   47,
    QMetaType::UInt, QMetaType::QString,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::Bool, QMetaType::Bool, QMetaType::Float, QMetaType::Float, QMetaType::Float, 0x80000000 | 94, 0x80000000 | 94, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 100, 0x80000000 | 102, QMetaType::Float, QMetaType::Float, QMetaType::Float,   87,   88,   89,   90,   91,   92,   93,   95,   96,   97,   98,   99,  101,  103,  104,  105,  106,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,  108,  109,  110,  111,  112,  113,  114,  115,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SendNodeTabData((*reinterpret_cast< const uint(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2])),(*reinterpret_cast< const float(*)>(_a[3])),(*reinterpret_cast< const float(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 1: _t->on_ImportSTL_triggered(); break;
        case 2: _t->ConvertPartToSampleSurfacePlane(); break;
        case 3: _t->on_ClearHistoryButton_clicked(); break;
        case 4: _t->on_actionFront_View_triggered(); break;
        case 5: _t->on_actionTop_View_triggered(); break;
        case 6: _t->on_actionLeft_View_triggered(); break;
        case 7: _t->on_actionBottom_View_triggered(); break;
        case 8: _t->on_actionRight_View_triggered(); break;
        case 9: _t->on_actionRight_View_2_triggered(); break;
        case 10: _t->on_actionWireFrame_triggered(); break;
        case 11: _t->on_actionShade_Mesh_triggered(); break;
        case 12: _t->on_actionSolid_triggered(); break;
        case 13: _t->on_actionSwap_Buffer_triggered(); break;
        case 14: _t->on_actionSelect_Part_triggered(); break;
        case 15: _t->GetSelectedPartID((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 16: _t->GetHidePartID((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 17: _t->GetSelectedNodeID((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 18: _t->GetOrigoby3NodesVector((*reinterpret_cast< const float(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2])),(*reinterpret_cast< const float(*)>(_a[3]))); break;
        case 19: _t->DeleteSelectedPart(); break;
        case 20: _t->on_actionHide_Part_triggered(); break;
        case 21: _t->on_actionBy_Coords_triggered(); break;
        case 22: _t->on_NODE_Show_Button_clicked(); break;
        case 23: _t->on_SaveNodeTab_clicked(); break;
        case 24: _t->on_CancelNodeTab_clicked(); break;
        case 25: _t->on_CloseNodeTab_clicked(); break;
        case 26: _t->StatusBarActivePartName((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 27: _t->GetVolumeRefinementData((*reinterpret_cast< VOLUMEREFINEMENT(*)>(_a[1])),(*reinterpret_cast< const char(*)>(_a[2]))); break;
        case 28: _t->GetPartTreeRefinement((*reinterpret_cast< const uint(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2])),(*reinterpret_cast< const uint(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        case 29: { uint _r = _t->GetPartIDfromTree((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 30: _t->on_actionRefinement_Volume_triggered(); break;
        case 31: _t->on_Tunnel_ShowButton_clicked(); break;
        case 32: _t->on_Tunnel_SAVE_TAB_clicked(); break;
        case 33: _t->on_Tunnel_CLEAR_TAB_clicked(); break;
        case 34: _t->on_Tunnel_CLOSE_TAB_clicked(); break;
        case 35: _t->on_actionRunning_BlockMesh_triggered(); break;
        case 36: _t->on_SelectProjectDirectory_clicked(); break;
        case 37: _t->on_CreateNew_Button_clicked(); break;
        case 38: _t->on_CloseNewTab_Button_clicked(); break;
        case 39: _t->on_Open_Project_triggered(); break;
        case 40: _t->on_NewProject_triggered(); break;
        case 41: _t->on_actionWindTunnel_triggered(); break;
        case 42: _t->on_actionEnvironment_Set_triggered(); break;
        case 43: _t->on_MovePart_Show_Button_clicked(); break;
        case 44: _t->on_MovePart_SelectPart_Button_clicked(); break;
        case 45: _t->on_MovePart_Close_Button_clicked(); break;
        case 46: _t->on_actionMove_Part_triggered(); break;
        case 47: _t->on_actionChange_Part_Name_triggered(); break;
        case 48: _t->on_actionChange_Part_Color_triggered(); break;
        case 49: _t->on_actionShow_BlockMesh_triggered(); break;
        case 50: _t->on_actionHide_BlockMesh_triggered(); break;
        case 51: _t->on_actionClear_BlockMesh_triggered(); break;
        case 52: _t->on_actionRefinement_Surface_triggered(); break;
        case 53: _t->on_actionSet_SnappyHexParameters_triggered(); break;
        case 54: _t->on_actionSnappyHexMesher_triggered(); break;
        case 55: _t->on_actionNumerical_Setup_triggered(); break;
        case 56: _t->on_actionWrite_SnappyHexFile_triggered(); break;
        case 57: _t->on_actionDecompose_triggered(); break;
        case 58: _t->on_actionExtract_Feature_Edges_triggered(); break;
        case 59: _t->on_actionShow_Future_Edges_triggered(); break;
        case 60: _t->on_actionRefinement_Feature_Edge_triggered(); break;
        case 61: _t->on_actionRenumber_triggered(); break;
        case 62: _t->on_actionCheck_Mesh_Quality_triggered(); break;
        case 63: _t->on_actionCheck_Surface_Mesh_triggered(); break;
        case 64: _t->on_ImportObj_triggered(); break;
        case 65: _t->on_actionBoundary_Condition_triggered(); break;
        case 66: _t->SetTurbulenceModel((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< const float(*)>(_a[5])),(*reinterpret_cast< const float(*)>(_a[6])),(*reinterpret_cast< const float(*)>(_a[7])),(*reinterpret_cast< const CONDITION(*)>(_a[8])),(*reinterpret_cast< const CONDITION(*)>(_a[9])),(*reinterpret_cast< const QString(*)>(_a[10])),(*reinterpret_cast< const QString(*)>(_a[11])),(*reinterpret_cast< const QString(*)>(_a[12])),(*reinterpret_cast< const QList<QString>(*)>(_a[13])),(*reinterpret_cast< const QList<ROTATIONWALL>(*)>(_a[14])),(*reinterpret_cast< const float(*)>(_a[15])),(*reinterpret_cast< const float(*)>(_a[16])),(*reinterpret_cast< const float(*)>(_a[17]))); break;
        case 67: _t->SetPorousPart((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const float(*)>(_a[3])),(*reinterpret_cast< const float(*)>(_a[4])),(*reinterpret_cast< const float(*)>(_a[5])),(*reinterpret_cast< const float(*)>(_a[6])),(*reinterpret_cast< const float(*)>(_a[7])),(*reinterpret_cast< const float(*)>(_a[8]))); break;
        case 68: _t->on_actionReconstructParMesh_triggered(); break;
        case 69: _t->on_SAVE_ForceCoeff_clicked(); break;
        case 70: _t->on_actionForce_Parameters_triggered(); break;
        case 71: _t->on_CLOSE_ForceCoeff_clicked(); break;
        case 72: _t->on_actionControlDict_triggered(); break;
        case 73: _t->on_Save_ContolDict_clicked(); break;
        case 74: _t->on_Close_ControlDict_clicked(); break;
        case 75: _t->on_AddProbeLocation_Button_clicked(); break;
        case 76: _t->on_actionProbes_triggered(); break;
        case 77: _t->on_RemoveProbeLocation_Button_clicked(); break;
        case 78: _t->on_ShowProbeLocation_Button_clicked(); break;
        case 79: _t->on_Save_ProbeTab_clicked(); break;
        case 80: _t->on_Close_Probe_Tab_clicked(); break;
        case 81: _t->on_actionSubmitJob_triggered(); break;
        case 82: _t->on_actionParaView_triggered(); break;
        case 83: _t->on_actionResidual_Plot_triggered(); break;
        case 84: _t->on_ImportNastran_triggered(); break;
        case 85: _t->on_SaveMaterialTab_clicked(); break;
        case 86: _t->on_actionMaterial_triggered(); break;
        case 87: _t->on_QuitMaterialTab_clicked(); break;
        case 88: _t->on_PartSetColor_Button_clicked(); break;
        case 89: _t->on_SavePartSet_Button_clicked(); break;
        case 90: _t->on_QuitPartSet_Button_clicked(); break;
        case 91: _t->on_actionCreate_Part_triggered(); break;
        case 92: _t->on_actionCOG_by_3_Nodes_triggered(); break;
        case 93: _t->on_Save_Project_triggered(); break;
        case 94: _t->on_SelectOrigo_BTN_clicked(); break;
        case 95: _t->on_ShowCoordSystem_BTN_clicked(); break;
        case 96: _t->on_CoordSystem_Save_BTN_clicked(); break;
        case 97: _t->on_CoordSystem_Close_Tab_clicked(); break;
        case 98: _t->on_By3NodesCenter_Button_clicked(); break;
        case 99: _t->on_actionCoordSystem_triggered(); break;
        case 100: _t->on_actionHide_Feature_Edges_triggered(); break;
        case 101: _t->on_actionRefineMesh_2_triggered(); break;
        case 102: _t->on_Close_Refinement_Cell_Ref_clicked(); break;
        case 103: _t->on_Show_Refinement_Cell_Ref_clicked(); break;
        case 104: _t->on_Save_Refinement_Cell_Ref_clicked(); break;
        case 105: _t->on_ToposetColor_Set_clicked(); break;
        case 106: _t->on_QuitMainWindow_triggered(); break;
        case 107: _t->on_yplusCalc_Button_clicked(); break;
        case 108: _t->on_actionY_Calculator_triggered(); break;
        case 109: _t->on_YPlusTabExit_Button_clicked(); break;
        case 110: _t->on_RefineWallEdgeRatioAdd_Button_clicked(); break;
        case 111: _t->on_RefineWallEdgeRatioRmv_Button_clicked(); break;
        case 112: _t->on_actionRefineWallLayer_2_triggered(); break;
        case 113: _t->LoadPartWallLayerRefinement((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 114: _t->on_RefineWallLayerSaveRun_But_clicked(); break;
        case 115: _t->on_RefineWallLayer_Close_But_clicked(); break;
        case 116: _t->on_RefineWallLayerSave_but_clicked(); break;
        case 117: _t->on_actionClipView_triggered(); break;
        case 118: _t->on_actionYPlus_triggered(); break;
        case 119: _t->on_actionDelete_Part_triggered(); break;
        case 120: _t->on_actionReplace_Part_By_Part_triggered(); break;
        case 121: _t->on_NACA_SHOW_clicked(); break;
        case 122: _t->on_NACA_SAVE_clicked(); break;
        case 123: _t->on_NACA_CLOSE_clicked(); break;
        case 124: _t->on_actionNaca_Duct_triggered(); break;
        case 125: _t->on_ForceCoeff_ShowCOFR_Button_clicked(); break;
        case 126: _t->COGInfoofSelectedPart(); break;
        case 127: _t->on_Plane_Orientation_X_But_clicked(); break;
        case 128: _t->on_Plane_Orientation_Y_But_clicked(); break;
        case 129: _t->on_Plane_Orientation_Z_But_clicked(); break;
        case 130: _t->on_Plane_Show_But_clicked(); break;
        case 131: _t->on_Plane_Save_But_clicked(); break;
        case 132: _t->on_Plane_Close_But_clicked(); break;
        case 133: _t->on_actionCreatePlane_triggered(); break;
        case 134: _t->GetActualIterationNumber((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 135: _t->on_actionTetMesh_triggered(); break;
        case 136: _t->on_Save_As_triggered(); break;
        case 137: _t->on_actionMovingBelt_triggered(); break;
        case 138: _t->on_actionMBTopoSetDict_triggered(); break;
        case 139: _t->on_actionMBCreatePatch_triggered(); break;
        case 140: _t->on_RH_Show_F_MasterNode_clicked(); break;
        case 141: _t->on_RH_Show_R_MasterNode_clicked(); break;
        case 142: _t->on_RH_Set_Visible_clicked(); break;
        case 143: _t->on_RH_Set_All_clicked(); break;
        case 144: _t->on_RH_Close_clicked(); break;
        case 145: _t->on_actionRide_Height_triggered(); break;
        case 146: _t->on_actionSTLexport_triggered(); break;
        case 147: _t->on_actionImage_triggered(); break;
        case 148: _t->on_actionIdentify_triggered(); break;
        case 149: _t->on_actionShow_Part_Node_IDs_triggered(); break;
        case 150: _t->on_actionHide_Part_Node_IDs_triggered(); break;
        case 151: _t->on_actionMerge_Mesh_2_triggered(); break;
        case 152: _t->on_actionNastranexport_triggered(); break;
        case 153: _t->on_actionToCellZonePart_triggered(); break;
        case 154: _t->on_actionMergeVisibleParts_triggered(); break;
        case 155: _t->on_actionMapRideHeight_triggered(); break;
        case 156: _t->on_RideHeightMapAddSet_Button_clicked(); break;
        case 157: _t->on_RideHeightMapDelSet_Button_clicked(); break;
        case 158: _t->on_RideHeightMap_Close_Button_clicked(); break;
        case 159: _t->on_RideHeightMap_SetVisParts_Button_clicked(); break;
        case 160: _t->on_FrontMasterNode_MapShow_clicked(); break;
        case 161: _t->on_RearMasterNode_MapShow_clicked(); break;
        case 162: _t->on_RideHeightMap_SetAllParts_Button_clicked(); break;
        case 163: _t->on_DOE_ADDCase_Button_clicked(); break;
        case 164: _t->on_DOE_RemoveCASE_Button_clicked(); break;
        case 165: _t->on_DOE_Parameter_ADD_Button_clicked(); break;
        case 166: _t->on_DOE_Parameter_Remove_Button_clicked(); break;
        case 167: _t->on_actionDOE_triggered(); break;
        case 168: _t->on_DOE_Parameter_Close_Button_clicked(); break;
        case 169: _t->on_adaptiveMesh_vorticity_triggered(); break;
        case 170: _t->on_adaptiveMesh_velocity_grad_triggered(); break;
        case 171: _t->on_adaptiveMesh_pressure_grad_triggered(); break;
        case 172: _t->on_actionSurface_Morphing_triggered(); break;
        case 173: _t->on_MorphingBox_ShowButton_clicked(); break;
        case 174: _t->on_Morphing_Morphing_clicked(); break;
        case 175: _t->on_Morphing_Close_clicked(); break;
        case 176: _t->on_Morphing_Save_Parameter_clicked(); break;
        case 177: _t->on_Morhing_Undo_clicked(); break;
        case 178: _t->on_actionCombineParts_triggered(); break;
        case 179: _t->on_Combine_Parts_Action_clicked(); break;
        case 180: _t->on_Combine_Parts_Close_clicked(); break;
        case 181: _t->on_Morphing_ShowSelectMasterNode_clicked(); break;
        case 182: _t->on_RideHeightMapShowActual_Button_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 66:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 12:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)(const unsigned int & , const float & , const float & , const float & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::SendNodeTabData)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 183)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 183;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 183)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 183;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::SendNodeTabData(const unsigned int & _t1, const float & _t2, const float & _t3, const float & _t4, bool _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
