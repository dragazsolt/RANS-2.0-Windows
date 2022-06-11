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
    QByteArrayData data[206];
    char stringdata0[5329];
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
QT_MOC_LITERAL(48, 876, 36), // "on_actionRefinement_Volume_tr..."
QT_MOC_LITERAL(49, 913, 28), // "on_Tunnel_ShowButton_clicked"
QT_MOC_LITERAL(50, 942, 26), // "on_Tunnel_SAVE_TAB_clicked"
QT_MOC_LITERAL(51, 969, 27), // "on_Tunnel_CLEAR_TAB_clicked"
QT_MOC_LITERAL(52, 997, 27), // "on_Tunnel_CLOSE_TAB_clicked"
QT_MOC_LITERAL(53, 1025, 36), // "on_actionRunning_BlockMesh_tr..."
QT_MOC_LITERAL(54, 1062, 33), // "on_SelectProjectDirectory_cli..."
QT_MOC_LITERAL(55, 1096, 27), // "on_CreateNew_Button_clicked"
QT_MOC_LITERAL(56, 1124, 29), // "on_CloseNewTab_Button_clicked"
QT_MOC_LITERAL(57, 1154, 25), // "on_Open_Project_triggered"
QT_MOC_LITERAL(58, 1180, 23), // "on_NewProject_triggered"
QT_MOC_LITERAL(59, 1204, 29), // "on_actionWindTunnel_triggered"
QT_MOC_LITERAL(60, 1234, 34), // "on_actionEnvironment_Set_trig..."
QT_MOC_LITERAL(61, 1269, 31), // "on_MovePart_Show_Button_clicked"
QT_MOC_LITERAL(62, 1301, 37), // "on_MovePart_SelectPart_Button..."
QT_MOC_LITERAL(63, 1339, 32), // "on_MovePart_Close_Button_clicked"
QT_MOC_LITERAL(64, 1372, 28), // "on_actionMove_Part_triggered"
QT_MOC_LITERAL(65, 1401, 35), // "on_actionChange_Part_Name_tri..."
QT_MOC_LITERAL(66, 1437, 36), // "on_actionChange_Part_Color_tr..."
QT_MOC_LITERAL(67, 1474, 33), // "on_actionShow_BlockMesh_trigg..."
QT_MOC_LITERAL(68, 1508, 33), // "on_actionHide_BlockMesh_trigg..."
QT_MOC_LITERAL(69, 1542, 34), // "on_actionClear_BlockMesh_trig..."
QT_MOC_LITERAL(70, 1577, 37), // "on_actionRefinement_Surface_t..."
QT_MOC_LITERAL(71, 1615, 42), // "on_actionSet_SnappyHexParamet..."
QT_MOC_LITERAL(72, 1658, 34), // "on_actionSnappyHexMesher_trig..."
QT_MOC_LITERAL(73, 1693, 34), // "on_actionNumerical_Setup_trig..."
QT_MOC_LITERAL(74, 1728, 38), // "on_actionWrite_SnappyHexFile_..."
QT_MOC_LITERAL(75, 1767, 28), // "on_actionDecompose_triggered"
QT_MOC_LITERAL(76, 1796, 40), // "on_actionExtract_Feature_Edge..."
QT_MOC_LITERAL(77, 1837, 36), // "on_actionShow_Future_Edges_tr..."
QT_MOC_LITERAL(78, 1874, 42), // "on_actionRefinement_Feature_E..."
QT_MOC_LITERAL(79, 1917, 27), // "on_actionRenumber_triggered"
QT_MOC_LITERAL(80, 1945, 37), // "on_actionCheck_Mesh_Quality_t..."
QT_MOC_LITERAL(81, 1983, 37), // "on_actionCheck_Surface_Mesh_t..."
QT_MOC_LITERAL(82, 2021, 22), // "on_ImportObj_triggered"
QT_MOC_LITERAL(83, 2044, 37), // "on_actionBoundary_Condition_t..."
QT_MOC_LITERAL(84, 2082, 18), // "SetTurbulenceModel"
QT_MOC_LITERAL(85, 2101, 15), // "TurbulenceModel"
QT_MOC_LITERAL(86, 2117, 8), // "solverid"
QT_MOC_LITERAL(87, 2126, 13), // "potentialfoam"
QT_MOC_LITERAL(88, 2140, 18), // "applyboundarylayer"
QT_MOC_LITERAL(89, 2159, 6), // "blayer"
QT_MOC_LITERAL(90, 2166, 19), // "TurbulenceIntensity"
QT_MOC_LITERAL(91, 2186, 9), // "Ch_Length"
QT_MOC_LITERAL(92, 2196, 9), // "CONDITION"
QT_MOC_LITERAL(93, 2206, 5), // "INLET"
QT_MOC_LITERAL(94, 2212, 6), // "GROUND"
QT_MOC_LITERAL(95, 2219, 7), // "TOPWALL"
QT_MOC_LITERAL(96, 2227, 8), // "LEFTWALL"
QT_MOC_LITERAL(97, 2236, 9), // "RIGHTWALL"
QT_MOC_LITERAL(98, 2246, 14), // "QList<QString>"
QT_MOC_LITERAL(99, 2261, 11), // "staticwalls"
QT_MOC_LITERAL(100, 2273, 19), // "QList<ROTATIONWALL>"
QT_MOC_LITERAL(101, 2293, 8), // "rotwalls"
QT_MOC_LITERAL(102, 2302, 13), // "SetPorousPart"
QT_MOC_LITERAL(103, 2316, 5), // "Pname"
QT_MOC_LITERAL(104, 2322, 12), // "Coordsysname"
QT_MOC_LITERAL(105, 2335, 2), // "dx"
QT_MOC_LITERAL(106, 2338, 2), // "dy"
QT_MOC_LITERAL(107, 2341, 2), // "dz"
QT_MOC_LITERAL(108, 2344, 2), // "fx"
QT_MOC_LITERAL(109, 2347, 2), // "fy"
QT_MOC_LITERAL(110, 2350, 2), // "fz"
QT_MOC_LITERAL(111, 2353, 37), // "on_actionReconstructParMesh_t..."
QT_MOC_LITERAL(112, 2391, 26), // "on_SAVE_ForceCoeff_clicked"
QT_MOC_LITERAL(113, 2418, 35), // "on_actionForce_Parameters_tri..."
QT_MOC_LITERAL(114, 2454, 27), // "on_CLOSE_ForceCoeff_clicked"
QT_MOC_LITERAL(115, 2482, 30), // "on_actionControlDict_triggered"
QT_MOC_LITERAL(116, 2513, 26), // "on_Save_ContolDict_clicked"
QT_MOC_LITERAL(117, 2540, 28), // "on_Close_ControlDict_clicked"
QT_MOC_LITERAL(118, 2569, 34), // "on_AddProbeLocation_Button_cl..."
QT_MOC_LITERAL(119, 2604, 25), // "on_actionProbes_triggered"
QT_MOC_LITERAL(120, 2630, 37), // "on_RemoveProbeLocation_Button..."
QT_MOC_LITERAL(121, 2668, 35), // "on_ShowProbeLocation_Button_c..."
QT_MOC_LITERAL(122, 2704, 24), // "on_Save_ProbeTab_clicked"
QT_MOC_LITERAL(123, 2729, 26), // "on_Close_Probe_Tab_clicked"
QT_MOC_LITERAL(124, 2756, 28), // "on_actionSubmitJob_triggered"
QT_MOC_LITERAL(125, 2785, 27), // "on_actionParaView_triggered"
QT_MOC_LITERAL(126, 2813, 32), // "on_actionResidual_Plot_triggered"
QT_MOC_LITERAL(127, 2846, 26), // "on_ImportNastran_triggered"
QT_MOC_LITERAL(128, 2873, 26), // "on_SaveMaterialTab_clicked"
QT_MOC_LITERAL(129, 2900, 27), // "on_actionMaterial_triggered"
QT_MOC_LITERAL(130, 2928, 26), // "on_QuitMaterialTab_clicked"
QT_MOC_LITERAL(131, 2955, 30), // "on_PartSetColor_Button_clicked"
QT_MOC_LITERAL(132, 2986, 29), // "on_SavePartSet_Button_clicked"
QT_MOC_LITERAL(133, 3016, 29), // "on_QuitPartSet_Button_clicked"
QT_MOC_LITERAL(134, 3046, 30), // "on_actionCreate_Part_triggered"
QT_MOC_LITERAL(135, 3077, 33), // "on_actionCOG_by_3_Nodes_trigg..."
QT_MOC_LITERAL(136, 3111, 25), // "on_Save_Project_triggered"
QT_MOC_LITERAL(137, 3137, 26), // "on_SelectOrigo_BTN_clicked"
QT_MOC_LITERAL(138, 3164, 30), // "on_ShowCoordSystem_BTN_clicked"
QT_MOC_LITERAL(139, 3195, 31), // "on_CoordSystem_Save_BTN_clicked"
QT_MOC_LITERAL(140, 3227, 32), // "on_CoordSystem_Close_Tab_clicked"
QT_MOC_LITERAL(141, 3260, 32), // "on_By3NodesCenter_Button_clicked"
QT_MOC_LITERAL(142, 3293, 30), // "on_actionCoordSystem_triggered"
QT_MOC_LITERAL(143, 3324, 37), // "on_actionHide_Feature_Edges_t..."
QT_MOC_LITERAL(144, 3362, 31), // "on_actionRefineMesh_2_triggered"
QT_MOC_LITERAL(145, 3394, 36), // "on_Close_Refinement_Cell_Ref_..."
QT_MOC_LITERAL(146, 3431, 35), // "on_Show_Refinement_Cell_Ref_c..."
QT_MOC_LITERAL(147, 3467, 35), // "on_Save_Refinement_Cell_Ref_c..."
QT_MOC_LITERAL(148, 3503, 27), // "on_ToposetColor_Set_clicked"
QT_MOC_LITERAL(149, 3531, 27), // "on_QuitMainWindow_triggered"
QT_MOC_LITERAL(150, 3559, 27), // "on_yplusCalc_Button_clicked"
QT_MOC_LITERAL(151, 3587, 31), // "on_actionY_Calculator_triggered"
QT_MOC_LITERAL(152, 3619, 30), // "on_YPlusTabExit_Button_clicked"
QT_MOC_LITERAL(153, 3650, 40), // "on_RefineWallEdgeRatioAdd_But..."
QT_MOC_LITERAL(154, 3691, 40), // "on_RefineWallEdgeRatioRmv_But..."
QT_MOC_LITERAL(155, 3732, 36), // "on_actionRefineWallLayer_2_tr..."
QT_MOC_LITERAL(156, 3769, 27), // "LoadPartWallLayerRefinement"
QT_MOC_LITERAL(157, 3797, 37), // "on_RefineWallLayerSaveRun_But..."
QT_MOC_LITERAL(158, 3835, 36), // "on_RefineWallLayer_Close_But_..."
QT_MOC_LITERAL(159, 3872, 34), // "on_RefineWallLayerSave_but_cl..."
QT_MOC_LITERAL(160, 3907, 27), // "on_actionClipView_triggered"
QT_MOC_LITERAL(161, 3935, 24), // "on_actionYPlus_triggered"
QT_MOC_LITERAL(162, 3960, 30), // "on_actionDelete_Part_triggered"
QT_MOC_LITERAL(163, 3991, 39), // "on_actionReplace_Part_By_Part..."
QT_MOC_LITERAL(164, 4031, 20), // "on_NACA_SHOW_clicked"
QT_MOC_LITERAL(165, 4052, 20), // "on_NACA_SAVE_clicked"
QT_MOC_LITERAL(166, 4073, 21), // "on_NACA_CLOSE_clicked"
QT_MOC_LITERAL(167, 4095, 28), // "on_actionNaca_Duct_triggered"
QT_MOC_LITERAL(168, 4124, 37), // "on_ForceCoeff_ShowCOFR_Button..."
QT_MOC_LITERAL(169, 4162, 21), // "COGInfoofSelectedPart"
QT_MOC_LITERAL(170, 4184, 34), // "on_Plane_Orientation_X_But_cl..."
QT_MOC_LITERAL(171, 4219, 34), // "on_Plane_Orientation_Y_But_cl..."
QT_MOC_LITERAL(172, 4254, 34), // "on_Plane_Orientation_Z_But_cl..."
QT_MOC_LITERAL(173, 4289, 25), // "on_Plane_Show_But_clicked"
QT_MOC_LITERAL(174, 4315, 25), // "on_Plane_Save_But_clicked"
QT_MOC_LITERAL(175, 4341, 26), // "on_Plane_Close_But_clicked"
QT_MOC_LITERAL(176, 4368, 30), // "on_actionCreatePlane_triggered"
QT_MOC_LITERAL(177, 4399, 24), // "GetActualIterationNumber"
QT_MOC_LITERAL(178, 4424, 26), // "on_actionTetMesh_triggered"
QT_MOC_LITERAL(179, 4451, 20), // "on_Save_As_triggered"
QT_MOC_LITERAL(180, 4472, 29), // "on_actionMovingBelt_triggered"
QT_MOC_LITERAL(181, 4502, 32), // "on_actionMBTopoSetDict_triggered"
QT_MOC_LITERAL(182, 4535, 32), // "on_actionMBCreatePatch_triggered"
QT_MOC_LITERAL(183, 4568, 31), // "on_RH_Show_F_MasterNode_clicked"
QT_MOC_LITERAL(184, 4600, 31), // "on_RH_Show_R_MasterNode_clicked"
QT_MOC_LITERAL(185, 4632, 25), // "on_RH_Set_Visible_clicked"
QT_MOC_LITERAL(186, 4658, 21), // "on_RH_Set_All_clicked"
QT_MOC_LITERAL(187, 4680, 19), // "on_RH_Close_clicked"
QT_MOC_LITERAL(188, 4700, 30), // "on_actionRide_Height_triggered"
QT_MOC_LITERAL(189, 4731, 28), // "on_actionSTLexport_triggered"
QT_MOC_LITERAL(190, 4760, 24), // "on_actionImage_triggered"
QT_MOC_LITERAL(191, 4785, 27), // "on_actionIdentify_triggered"
QT_MOC_LITERAL(192, 4813, 37), // "on_actionShow_Part_Node_IDs_t..."
QT_MOC_LITERAL(193, 4851, 37), // "on_actionHide_Part_Node_IDs_t..."
QT_MOC_LITERAL(194, 4889, 31), // "on_actionMerge_Mesh_2_triggered"
QT_MOC_LITERAL(195, 4921, 32), // "on_actionNastranexport_triggered"
QT_MOC_LITERAL(196, 4954, 33), // "on_actionToCellZonePart_trigg..."
QT_MOC_LITERAL(197, 4988, 36), // "on_actionMergeVisibleParts_tr..."
QT_MOC_LITERAL(198, 5025, 32), // "on_actionMapRideHeight_triggered"
QT_MOC_LITERAL(199, 5058, 37), // "on_RideHeightMapAddSet_Button..."
QT_MOC_LITERAL(200, 5096, 37), // "on_RideHeightMapDelSet_Button..."
QT_MOC_LITERAL(201, 5134, 37), // "on_RideHeightMap_Close_Button..."
QT_MOC_LITERAL(202, 5172, 43), // "on_RideHeightMap_SetVisParts_..."
QT_MOC_LITERAL(203, 5216, 34), // "on_FrontMasterNode_MapShow_cl..."
QT_MOC_LITERAL(204, 5251, 33), // "on_RearMasterNode_MapShow_cli..."
QT_MOC_LITERAL(205, 5285, 43) // "on_RideHeightMap_SetAllParts_..."

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
    "QList<ROTATIONWALL>\0rotwalls\0SetPorousPart\0"
    "Pname\0Coordsysname\0dx\0dy\0dz\0fx\0fy\0fz\0"
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
    "on_RideHeightMap_SetAllParts_Button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     162,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,  824,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  835,    2, 0x08 /* Private */,
       9,    0,  836,    2, 0x08 /* Private */,
      10,    0,  837,    2, 0x08 /* Private */,
      11,    0,  838,    2, 0x08 /* Private */,
      12,    0,  839,    2, 0x08 /* Private */,
      13,    0,  840,    2, 0x08 /* Private */,
      14,    0,  841,    2, 0x08 /* Private */,
      15,    0,  842,    2, 0x08 /* Private */,
      16,    0,  843,    2, 0x08 /* Private */,
      17,    0,  844,    2, 0x08 /* Private */,
      18,    0,  845,    2, 0x08 /* Private */,
      19,    0,  846,    2, 0x08 /* Private */,
      20,    0,  847,    2, 0x08 /* Private */,
      21,    0,  848,    2, 0x08 /* Private */,
      22,    1,  849,    2, 0x08 /* Private */,
      24,    1,  852,    2, 0x08 /* Private */,
      25,    1,  855,    2, 0x08 /* Private */,
      26,    3,  858,    2, 0x08 /* Private */,
      30,    0,  865,    2, 0x08 /* Private */,
      31,    0,  866,    2, 0x08 /* Private */,
      32,    0,  867,    2, 0x08 /* Private */,
      33,    0,  868,    2, 0x08 /* Private */,
      34,    0,  869,    2, 0x08 /* Private */,
      35,    0,  870,    2, 0x08 /* Private */,
      36,    0,  871,    2, 0x08 /* Private */,
      37,    2,  872,    2, 0x08 /* Private */,
      41,    2,  877,    2, 0x08 /* Private */,
      43,    4,  882,    2, 0x08 /* Private */,
      48,    0,  891,    2, 0x08 /* Private */,
      49,    0,  892,    2, 0x08 /* Private */,
      50,    0,  893,    2, 0x08 /* Private */,
      51,    0,  894,    2, 0x08 /* Private */,
      52,    0,  895,    2, 0x08 /* Private */,
      53,    0,  896,    2, 0x08 /* Private */,
      54,    0,  897,    2, 0x08 /* Private */,
      55,    0,  898,    2, 0x08 /* Private */,
      56,    0,  899,    2, 0x08 /* Private */,
      57,    0,  900,    2, 0x08 /* Private */,
      58,    0,  901,    2, 0x08 /* Private */,
      59,    0,  902,    2, 0x08 /* Private */,
      60,    0,  903,    2, 0x08 /* Private */,
      61,    0,  904,    2, 0x08 /* Private */,
      62,    0,  905,    2, 0x08 /* Private */,
      63,    0,  906,    2, 0x08 /* Private */,
      64,    0,  907,    2, 0x08 /* Private */,
      65,    0,  908,    2, 0x08 /* Private */,
      66,    0,  909,    2, 0x08 /* Private */,
      67,    0,  910,    2, 0x08 /* Private */,
      68,    0,  911,    2, 0x08 /* Private */,
      69,    0,  912,    2, 0x08 /* Private */,
      70,    0,  913,    2, 0x08 /* Private */,
      71,    0,  914,    2, 0x08 /* Private */,
      72,    0,  915,    2, 0x08 /* Private */,
      73,    0,  916,    2, 0x08 /* Private */,
      74,    0,  917,    2, 0x08 /* Private */,
      75,    0,  918,    2, 0x08 /* Private */,
      76,    0,  919,    2, 0x08 /* Private */,
      77,    0,  920,    2, 0x08 /* Private */,
      78,    0,  921,    2, 0x08 /* Private */,
      79,    0,  922,    2, 0x08 /* Private */,
      80,    0,  923,    2, 0x08 /* Private */,
      81,    0,  924,    2, 0x08 /* Private */,
      82,    0,  925,    2, 0x08 /* Private */,
      83,    0,  926,    2, 0x08 /* Private */,
      84,   14,  927,    2, 0x08 /* Private */,
     102,    8,  956,    2, 0x08 /* Private */,
     111,    0,  973,    2, 0x08 /* Private */,
     112,    0,  974,    2, 0x08 /* Private */,
     113,    0,  975,    2, 0x08 /* Private */,
     114,    0,  976,    2, 0x08 /* Private */,
     115,    0,  977,    2, 0x08 /* Private */,
     116,    0,  978,    2, 0x08 /* Private */,
     117,    0,  979,    2, 0x08 /* Private */,
     118,    0,  980,    2, 0x08 /* Private */,
     119,    0,  981,    2, 0x08 /* Private */,
     120,    0,  982,    2, 0x08 /* Private */,
     121,    0,  983,    2, 0x08 /* Private */,
     122,    0,  984,    2, 0x08 /* Private */,
     123,    0,  985,    2, 0x08 /* Private */,
     124,    0,  986,    2, 0x08 /* Private */,
     125,    0,  987,    2, 0x08 /* Private */,
     126,    0,  988,    2, 0x08 /* Private */,
     127,    0,  989,    2, 0x08 /* Private */,
     128,    0,  990,    2, 0x08 /* Private */,
     129,    0,  991,    2, 0x08 /* Private */,
     130,    0,  992,    2, 0x08 /* Private */,
     131,    0,  993,    2, 0x08 /* Private */,
     132,    0,  994,    2, 0x08 /* Private */,
     133,    0,  995,    2, 0x08 /* Private */,
     134,    0,  996,    2, 0x08 /* Private */,
     135,    0,  997,    2, 0x08 /* Private */,
     136,    0,  998,    2, 0x08 /* Private */,
     137,    0,  999,    2, 0x08 /* Private */,
     138,    0, 1000,    2, 0x08 /* Private */,
     139,    0, 1001,    2, 0x08 /* Private */,
     140,    0, 1002,    2, 0x08 /* Private */,
     141,    0, 1003,    2, 0x08 /* Private */,
     142,    0, 1004,    2, 0x08 /* Private */,
     143,    0, 1005,    2, 0x08 /* Private */,
     144,    0, 1006,    2, 0x08 /* Private */,
     145,    0, 1007,    2, 0x08 /* Private */,
     146,    0, 1008,    2, 0x08 /* Private */,
     147,    0, 1009,    2, 0x08 /* Private */,
     148,    0, 1010,    2, 0x08 /* Private */,
     149,    0, 1011,    2, 0x08 /* Private */,
     150,    0, 1012,    2, 0x08 /* Private */,
     151,    0, 1013,    2, 0x08 /* Private */,
     152,    0, 1014,    2, 0x08 /* Private */,
     153,    0, 1015,    2, 0x08 /* Private */,
     154,    0, 1016,    2, 0x08 /* Private */,
     155,    0, 1017,    2, 0x08 /* Private */,
     156,    1, 1018,    2, 0x08 /* Private */,
     157,    0, 1021,    2, 0x08 /* Private */,
     158,    0, 1022,    2, 0x08 /* Private */,
     159,    0, 1023,    2, 0x08 /* Private */,
     160,    0, 1024,    2, 0x08 /* Private */,
     161,    0, 1025,    2, 0x08 /* Private */,
     162,    0, 1026,    2, 0x08 /* Private */,
     163,    0, 1027,    2, 0x08 /* Private */,
     164,    0, 1028,    2, 0x08 /* Private */,
     165,    0, 1029,    2, 0x08 /* Private */,
     166,    0, 1030,    2, 0x08 /* Private */,
     167,    0, 1031,    2, 0x08 /* Private */,
     168,    0, 1032,    2, 0x08 /* Private */,
     169,    0, 1033,    2, 0x08 /* Private */,
     170,    0, 1034,    2, 0x08 /* Private */,
     171,    0, 1035,    2, 0x08 /* Private */,
     172,    0, 1036,    2, 0x08 /* Private */,
     173,    0, 1037,    2, 0x08 /* Private */,
     174,    0, 1038,    2, 0x08 /* Private */,
     175,    0, 1039,    2, 0x08 /* Private */,
     176,    0, 1040,    2, 0x08 /* Private */,
     177,    1, 1041,    2, 0x08 /* Private */,
     178,    0, 1044,    2, 0x08 /* Private */,
     179,    0, 1045,    2, 0x08 /* Private */,
     180,    0, 1046,    2, 0x08 /* Private */,
     181,    0, 1047,    2, 0x08 /* Private */,
     182,    0, 1048,    2, 0x08 /* Private */,
     183,    0, 1049,    2, 0x08 /* Private */,
     184,    0, 1050,    2, 0x08 /* Private */,
     185,    0, 1051,    2, 0x08 /* Private */,
     186,    0, 1052,    2, 0x08 /* Private */,
     187,    0, 1053,    2, 0x08 /* Private */,
     188,    0, 1054,    2, 0x08 /* Private */,
     189,    0, 1055,    2, 0x08 /* Private */,
     190,    0, 1056,    2, 0x08 /* Private */,
     191,    0, 1057,    2, 0x08 /* Private */,
     192,    0, 1058,    2, 0x08 /* Private */,
     193,    0, 1059,    2, 0x08 /* Private */,
     194,    0, 1060,    2, 0x08 /* Private */,
     195,    0, 1061,    2, 0x08 /* Private */,
     196,    0, 1062,    2, 0x08 /* Private */,
     197,    0, 1063,    2, 0x08 /* Private */,
     198,    0, 1064,    2, 0x08 /* Private */,
     199,    0, 1065,    2, 0x08 /* Private */,
     200,    0, 1066,    2, 0x08 /* Private */,
     201,    0, 1067,    2, 0x08 /* Private */,
     202,    0, 1068,    2, 0x08 /* Private */,
     203,    0, 1069,    2, 0x08 /* Private */,
     204,    0, 1070,    2, 0x08 /* Private */,
     205,    0, 1071,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::Bool, QMetaType::Bool, QMetaType::Float, QMetaType::Float, QMetaType::Float, 0x80000000 | 92, 0x80000000 | 92, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 98, 0x80000000 | 100,   85,   86,   87,   88,   89,   90,   91,   93,   94,   95,   96,   97,   99,  101,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,  103,  104,  105,  106,  107,  108,  109,  110,
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
        case 29: _t->on_actionRefinement_Volume_triggered(); break;
        case 30: _t->on_Tunnel_ShowButton_clicked(); break;
        case 31: _t->on_Tunnel_SAVE_TAB_clicked(); break;
        case 32: _t->on_Tunnel_CLEAR_TAB_clicked(); break;
        case 33: _t->on_Tunnel_CLOSE_TAB_clicked(); break;
        case 34: _t->on_actionRunning_BlockMesh_triggered(); break;
        case 35: _t->on_SelectProjectDirectory_clicked(); break;
        case 36: _t->on_CreateNew_Button_clicked(); break;
        case 37: _t->on_CloseNewTab_Button_clicked(); break;
        case 38: _t->on_Open_Project_triggered(); break;
        case 39: _t->on_NewProject_triggered(); break;
        case 40: _t->on_actionWindTunnel_triggered(); break;
        case 41: _t->on_actionEnvironment_Set_triggered(); break;
        case 42: _t->on_MovePart_Show_Button_clicked(); break;
        case 43: _t->on_MovePart_SelectPart_Button_clicked(); break;
        case 44: _t->on_MovePart_Close_Button_clicked(); break;
        case 45: _t->on_actionMove_Part_triggered(); break;
        case 46: _t->on_actionChange_Part_Name_triggered(); break;
        case 47: _t->on_actionChange_Part_Color_triggered(); break;
        case 48: _t->on_actionShow_BlockMesh_triggered(); break;
        case 49: _t->on_actionHide_BlockMesh_triggered(); break;
        case 50: _t->on_actionClear_BlockMesh_triggered(); break;
        case 51: _t->on_actionRefinement_Surface_triggered(); break;
        case 52: _t->on_actionSet_SnappyHexParameters_triggered(); break;
        case 53: _t->on_actionSnappyHexMesher_triggered(); break;
        case 54: _t->on_actionNumerical_Setup_triggered(); break;
        case 55: _t->on_actionWrite_SnappyHexFile_triggered(); break;
        case 56: _t->on_actionDecompose_triggered(); break;
        case 57: _t->on_actionExtract_Feature_Edges_triggered(); break;
        case 58: _t->on_actionShow_Future_Edges_triggered(); break;
        case 59: _t->on_actionRefinement_Feature_Edge_triggered(); break;
        case 60: _t->on_actionRenumber_triggered(); break;
        case 61: _t->on_actionCheck_Mesh_Quality_triggered(); break;
        case 62: _t->on_actionCheck_Surface_Mesh_triggered(); break;
        case 63: _t->on_ImportObj_triggered(); break;
        case 64: _t->on_actionBoundary_Condition_triggered(); break;
        case 65: _t->SetTurbulenceModel((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< const float(*)>(_a[5])),(*reinterpret_cast< const float(*)>(_a[6])),(*reinterpret_cast< const float(*)>(_a[7])),(*reinterpret_cast< const CONDITION(*)>(_a[8])),(*reinterpret_cast< const CONDITION(*)>(_a[9])),(*reinterpret_cast< const QString(*)>(_a[10])),(*reinterpret_cast< const QString(*)>(_a[11])),(*reinterpret_cast< const QString(*)>(_a[12])),(*reinterpret_cast< const QList<QString>(*)>(_a[13])),(*reinterpret_cast< const QList<ROTATIONWALL>(*)>(_a[14]))); break;
        case 66: _t->SetPorousPart((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const float(*)>(_a[3])),(*reinterpret_cast< const float(*)>(_a[4])),(*reinterpret_cast< const float(*)>(_a[5])),(*reinterpret_cast< const float(*)>(_a[6])),(*reinterpret_cast< const float(*)>(_a[7])),(*reinterpret_cast< const float(*)>(_a[8]))); break;
        case 67: _t->on_actionReconstructParMesh_triggered(); break;
        case 68: _t->on_SAVE_ForceCoeff_clicked(); break;
        case 69: _t->on_actionForce_Parameters_triggered(); break;
        case 70: _t->on_CLOSE_ForceCoeff_clicked(); break;
        case 71: _t->on_actionControlDict_triggered(); break;
        case 72: _t->on_Save_ContolDict_clicked(); break;
        case 73: _t->on_Close_ControlDict_clicked(); break;
        case 74: _t->on_AddProbeLocation_Button_clicked(); break;
        case 75: _t->on_actionProbes_triggered(); break;
        case 76: _t->on_RemoveProbeLocation_Button_clicked(); break;
        case 77: _t->on_ShowProbeLocation_Button_clicked(); break;
        case 78: _t->on_Save_ProbeTab_clicked(); break;
        case 79: _t->on_Close_Probe_Tab_clicked(); break;
        case 80: _t->on_actionSubmitJob_triggered(); break;
        case 81: _t->on_actionParaView_triggered(); break;
        case 82: _t->on_actionResidual_Plot_triggered(); break;
        case 83: _t->on_ImportNastran_triggered(); break;
        case 84: _t->on_SaveMaterialTab_clicked(); break;
        case 85: _t->on_actionMaterial_triggered(); break;
        case 86: _t->on_QuitMaterialTab_clicked(); break;
        case 87: _t->on_PartSetColor_Button_clicked(); break;
        case 88: _t->on_SavePartSet_Button_clicked(); break;
        case 89: _t->on_QuitPartSet_Button_clicked(); break;
        case 90: _t->on_actionCreate_Part_triggered(); break;
        case 91: _t->on_actionCOG_by_3_Nodes_triggered(); break;
        case 92: _t->on_Save_Project_triggered(); break;
        case 93: _t->on_SelectOrigo_BTN_clicked(); break;
        case 94: _t->on_ShowCoordSystem_BTN_clicked(); break;
        case 95: _t->on_CoordSystem_Save_BTN_clicked(); break;
        case 96: _t->on_CoordSystem_Close_Tab_clicked(); break;
        case 97: _t->on_By3NodesCenter_Button_clicked(); break;
        case 98: _t->on_actionCoordSystem_triggered(); break;
        case 99: _t->on_actionHide_Feature_Edges_triggered(); break;
        case 100: _t->on_actionRefineMesh_2_triggered(); break;
        case 101: _t->on_Close_Refinement_Cell_Ref_clicked(); break;
        case 102: _t->on_Show_Refinement_Cell_Ref_clicked(); break;
        case 103: _t->on_Save_Refinement_Cell_Ref_clicked(); break;
        case 104: _t->on_ToposetColor_Set_clicked(); break;
        case 105: _t->on_QuitMainWindow_triggered(); break;
        case 106: _t->on_yplusCalc_Button_clicked(); break;
        case 107: _t->on_actionY_Calculator_triggered(); break;
        case 108: _t->on_YPlusTabExit_Button_clicked(); break;
        case 109: _t->on_RefineWallEdgeRatioAdd_Button_clicked(); break;
        case 110: _t->on_RefineWallEdgeRatioRmv_Button_clicked(); break;
        case 111: _t->on_actionRefineWallLayer_2_triggered(); break;
        case 112: _t->LoadPartWallLayerRefinement((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 113: _t->on_RefineWallLayerSaveRun_But_clicked(); break;
        case 114: _t->on_RefineWallLayer_Close_But_clicked(); break;
        case 115: _t->on_RefineWallLayerSave_but_clicked(); break;
        case 116: _t->on_actionClipView_triggered(); break;
        case 117: _t->on_actionYPlus_triggered(); break;
        case 118: _t->on_actionDelete_Part_triggered(); break;
        case 119: _t->on_actionReplace_Part_By_Part_triggered(); break;
        case 120: _t->on_NACA_SHOW_clicked(); break;
        case 121: _t->on_NACA_SAVE_clicked(); break;
        case 122: _t->on_NACA_CLOSE_clicked(); break;
        case 123: _t->on_actionNaca_Duct_triggered(); break;
        case 124: _t->on_ForceCoeff_ShowCOFR_Button_clicked(); break;
        case 125: _t->COGInfoofSelectedPart(); break;
        case 126: _t->on_Plane_Orientation_X_But_clicked(); break;
        case 127: _t->on_Plane_Orientation_Y_But_clicked(); break;
        case 128: _t->on_Plane_Orientation_Z_But_clicked(); break;
        case 129: _t->on_Plane_Show_But_clicked(); break;
        case 130: _t->on_Plane_Save_But_clicked(); break;
        case 131: _t->on_Plane_Close_But_clicked(); break;
        case 132: _t->on_actionCreatePlane_triggered(); break;
        case 133: _t->GetActualIterationNumber((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 134: _t->on_actionTetMesh_triggered(); break;
        case 135: _t->on_Save_As_triggered(); break;
        case 136: _t->on_actionMovingBelt_triggered(); break;
        case 137: _t->on_actionMBTopoSetDict_triggered(); break;
        case 138: _t->on_actionMBCreatePatch_triggered(); break;
        case 139: _t->on_RH_Show_F_MasterNode_clicked(); break;
        case 140: _t->on_RH_Show_R_MasterNode_clicked(); break;
        case 141: _t->on_RH_Set_Visible_clicked(); break;
        case 142: _t->on_RH_Set_All_clicked(); break;
        case 143: _t->on_RH_Close_clicked(); break;
        case 144: _t->on_actionRide_Height_triggered(); break;
        case 145: _t->on_actionSTLexport_triggered(); break;
        case 146: _t->on_actionImage_triggered(); break;
        case 147: _t->on_actionIdentify_triggered(); break;
        case 148: _t->on_actionShow_Part_Node_IDs_triggered(); break;
        case 149: _t->on_actionHide_Part_Node_IDs_triggered(); break;
        case 150: _t->on_actionMerge_Mesh_2_triggered(); break;
        case 151: _t->on_actionNastranexport_triggered(); break;
        case 152: _t->on_actionToCellZonePart_triggered(); break;
        case 153: _t->on_actionMergeVisibleParts_triggered(); break;
        case 154: _t->on_actionMapRideHeight_triggered(); break;
        case 155: _t->on_RideHeightMapAddSet_Button_clicked(); break;
        case 156: _t->on_RideHeightMapDelSet_Button_clicked(); break;
        case 157: _t->on_RideHeightMap_Close_Button_clicked(); break;
        case 158: _t->on_RideHeightMap_SetVisParts_Button_clicked(); break;
        case 159: _t->on_FrontMasterNode_MapShow_clicked(); break;
        case 160: _t->on_RearMasterNode_MapShow_clicked(); break;
        case 161: _t->on_RideHeightMap_SetAllParts_Button_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 65:
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
        if (_id < 162)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 162;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 162)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 162;
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
