#include "DNA_sdna_type_ids.hh"

namespace blender {
namespace dna {

int sdna_struct_id_get_max() { return 992; }

}
struct IDPropertyUIData;
template<> int dna::sdna_struct_id_get<IDPropertyUIData>() { return 1; }
struct IDPropertyUIDataEnumItem;
template<> int dna::sdna_struct_id_get<IDPropertyUIDataEnumItem>() { return 2; }
struct IDPropertyUIDataInt;
template<> int dna::sdna_struct_id_get<IDPropertyUIDataInt>() { return 3; }
struct IDPropertyUIDataBool;
template<> int dna::sdna_struct_id_get<IDPropertyUIDataBool>() { return 4; }
struct IDPropertyUIDataFloat;
template<> int dna::sdna_struct_id_get<IDPropertyUIDataFloat>() { return 5; }
struct IDPropertyUIDataString;
template<> int dna::sdna_struct_id_get<IDPropertyUIDataString>() { return 6; }
struct IDPropertyUIDataID;
template<> int dna::sdna_struct_id_get<IDPropertyUIDataID>() { return 7; }
struct IDPropertyData;
template<> int dna::sdna_struct_id_get<IDPropertyData>() { return 8; }
struct IDProperty;
template<> int dna::sdna_struct_id_get<IDProperty>() { return 9; }
struct IDOverrideLibraryPropertyOperation;
template<> int dna::sdna_struct_id_get<IDOverrideLibraryPropertyOperation>() { return 10; }
struct IDOverrideLibraryProperty;
template<> int dna::sdna_struct_id_get<IDOverrideLibraryProperty>() { return 11; }
struct IDOverrideLibrary;
template<> int dna::sdna_struct_id_get<IDOverrideLibrary>() { return 12; }
struct IDHash;
template<> int dna::sdna_struct_id_get<IDHash>() { return 13; }
struct ID;
template<> int dna::sdna_struct_id_get<ID>() { return 14; }
struct Library;
template<> int dna::sdna_struct_id_get<Library>() { return 15; }
struct LibraryWeakReference;
template<> int dna::sdna_struct_id_get<LibraryWeakReference>() { return 16; }
struct PreviewImage;
template<> int dna::sdna_struct_id_get<PreviewImage>() { return 17; }
struct bMotionPathVert;
template<> int dna::sdna_struct_id_get<bMotionPathVert>() { return 18; }
struct bMotionPath;
template<> int dna::sdna_struct_id_get<bMotionPath>() { return 19; }
struct bAnimVizSettings;
template<> int dna::sdna_struct_id_get<bAnimVizSettings>() { return 20; }
struct bPoseChannel_BBoneSegmentBoundary;
template<> int dna::sdna_struct_id_get<bPoseChannel_BBoneSegmentBoundary>() { return 21; }
struct bPoseChannel_Runtime;
template<> int dna::sdna_struct_id_get<bPoseChannel_Runtime>() { return 22; }
struct bPoseChannel;
template<> int dna::sdna_struct_id_get<bPoseChannel>() { return 23; }
struct bPose;
template<> int dna::sdna_struct_id_get<bPose>() { return 24; }
struct bIKParam;
template<> int dna::sdna_struct_id_get<bIKParam>() { return 25; }
struct bItasc;
template<> int dna::sdna_struct_id_get<bItasc>() { return 26; }
struct bActionGroup;
template<> int dna::sdna_struct_id_get<bActionGroup>() { return 27; }
struct bAction;
template<> int dna::sdna_struct_id_get<bAction>() { return 28; }
struct bDopeSheet;
template<> int dna::sdna_struct_id_get<bDopeSheet>() { return 29; }
struct SpaceAction_Runtime;
template<> int dna::sdna_struct_id_get<SpaceAction_Runtime>() { return 30; }
struct SpaceActionOverlays;
template<> int dna::sdna_struct_id_get<SpaceActionOverlays>() { return 31; }
struct SpaceAction;
template<> int dna::sdna_struct_id_get<SpaceAction>() { return 32; }
struct ActionLayer;
template<> int dna::sdna_struct_id_get<ActionLayer>() { return 33; }
struct ActionSlot;
template<> int dna::sdna_struct_id_get<ActionSlot>() { return 34; }
struct ActionStrip;
template<> int dna::sdna_struct_id_get<ActionStrip>() { return 35; }
struct ActionStripKeyframeData;
template<> int dna::sdna_struct_id_get<ActionStripKeyframeData>() { return 36; }
struct ActionChannelbag;
template<> int dna::sdna_struct_id_get<ActionChannelbag>() { return 37; }
struct FModifier;
template<> int dna::sdna_struct_id_get<FModifier>() { return 38; }
struct FMod_Generator;
template<> int dna::sdna_struct_id_get<FMod_Generator>() { return 39; }
struct FMod_FunctionGenerator;
template<> int dna::sdna_struct_id_get<FMod_FunctionGenerator>() { return 40; }
struct FCM_EnvelopeData;
template<> int dna::sdna_struct_id_get<FCM_EnvelopeData>() { return 41; }
struct FMod_Envelope;
template<> int dna::sdna_struct_id_get<FMod_Envelope>() { return 42; }
struct FMod_Cycles;
template<> int dna::sdna_struct_id_get<FMod_Cycles>() { return 43; }
struct FMod_Limits;
template<> int dna::sdna_struct_id_get<FMod_Limits>() { return 44; }
struct FMod_Noise;
template<> int dna::sdna_struct_id_get<FMod_Noise>() { return 45; }
struct FMod_Stepped;
template<> int dna::sdna_struct_id_get<FMod_Stepped>() { return 46; }
struct FMod_Smooth;
template<> int dna::sdna_struct_id_get<FMod_Smooth>() { return 47; }
struct DriverTarget;
template<> int dna::sdna_struct_id_get<DriverTarget>() { return 48; }
struct DriverVar;
template<> int dna::sdna_struct_id_get<DriverVar>() { return 49; }
struct ChannelDriver;
template<> int dna::sdna_struct_id_get<ChannelDriver>() { return 50; }
struct FPoint;
template<> int dna::sdna_struct_id_get<FPoint>() { return 51; }
struct FCurve;
template<> int dna::sdna_struct_id_get<FCurve>() { return 52; }
struct NlaStrip;
template<> int dna::sdna_struct_id_get<NlaStrip>() { return 53; }
struct NlaTrack;
template<> int dna::sdna_struct_id_get<NlaTrack>() { return 54; }
struct KS_Path;
template<> int dna::sdna_struct_id_get<KS_Path>() { return 55; }
struct KeyingSet;
template<> int dna::sdna_struct_id_get<KeyingSet>() { return 56; }
struct AnimOverride;
template<> int dna::sdna_struct_id_get<AnimOverride>() { return 57; }
struct AnimData;
template<> int dna::sdna_struct_id_get<AnimData>() { return 58; }
struct IdAdtTemplate;
template<> int dna::sdna_struct_id_get<IdAdtTemplate>() { return 59; }
struct BoneColor;
template<> int dna::sdna_struct_id_get<BoneColor>() { return 60; }
struct Bone_Runtime;
template<> int dna::sdna_struct_id_get<Bone_Runtime>() { return 61; }
struct Bone;
template<> int dna::sdna_struct_id_get<Bone>() { return 62; }
struct bArmature;
template<> int dna::sdna_struct_id_get<bArmature>() { return 63; }
struct BoneCollection;
template<> int dna::sdna_struct_id_get<BoneCollection>() { return 64; }
struct BoneCollectionMember;
template<> int dna::sdna_struct_id_get<BoneCollectionMember>() { return 65; }
struct BoneCollectionReference;
template<> int dna::sdna_struct_id_get<BoneCollectionReference>() { return 66; }
struct AssetTag;
template<> int dna::sdna_struct_id_get<AssetTag>() { return 67; }
struct AssetMetaData;
template<> int dna::sdna_struct_id_get<AssetMetaData>() { return 68; }
struct AssetLibraryReference;
template<> int dna::sdna_struct_id_get<AssetLibraryReference>() { return 69; }
struct AssetWeakReference;
template<> int dna::sdna_struct_id_get<AssetWeakReference>() { return 70; }
struct AssetCatalogPathLink;
template<> int dna::sdna_struct_id_get<AssetCatalogPathLink>() { return 71; }
struct AttributeArray;
template<> int dna::sdna_struct_id_get<AttributeArray>() { return 72; }
struct AttributeSingle;
template<> int dna::sdna_struct_id_get<AttributeSingle>() { return 73; }
struct Attribute;
template<> int dna::sdna_struct_id_get<Attribute>() { return 74; }
struct AttributeStorage;
template<> int dna::sdna_struct_id_get<AttributeStorage>() { return 75; }
struct BoidRule;
template<> int dna::sdna_struct_id_get<BoidRule>() { return 76; }
struct BoidRuleGoalAvoid;
template<> int dna::sdna_struct_id_get<BoidRuleGoalAvoid>() { return 77; }
struct BoidRuleAvoidCollision;
template<> int dna::sdna_struct_id_get<BoidRuleAvoidCollision>() { return 78; }
struct BoidRuleFollowLeader;
template<> int dna::sdna_struct_id_get<BoidRuleFollowLeader>() { return 79; }
struct BoidRuleAverageSpeed;
template<> int dna::sdna_struct_id_get<BoidRuleAverageSpeed>() { return 80; }
struct BoidRuleFight;
template<> int dna::sdna_struct_id_get<BoidRuleFight>() { return 81; }
struct BoidData;
template<> int dna::sdna_struct_id_get<BoidData>() { return 82; }
struct BoidState;
template<> int dna::sdna_struct_id_get<BoidState>() { return 83; }
struct BoidSettings;
template<> int dna::sdna_struct_id_get<BoidSettings>() { return 84; }
struct BrushGpencilSettings;
template<> int dna::sdna_struct_id_get<BrushGpencilSettings>() { return 85; }
struct BrushCurvesSculptSettings;
template<> int dna::sdna_struct_id_get<BrushCurvesSculptSettings>() { return 86; }
struct Brush;
template<> int dna::sdna_struct_id_get<Brush>() { return 87; }
struct PaletteColor;
template<> int dna::sdna_struct_id_get<PaletteColor>() { return 88; }
struct Palette;
template<> int dna::sdna_struct_id_get<Palette>() { return 89; }
struct PaintCurvePoint;
template<> int dna::sdna_struct_id_get<PaintCurvePoint>() { return 90; }
struct PaintCurve;
template<> int dna::sdna_struct_id_get<PaintCurve>() { return 91; }
struct CacheObjectPath;
template<> int dna::sdna_struct_id_get<CacheObjectPath>() { return 92; }
struct CacheFileLayer;
template<> int dna::sdna_struct_id_get<CacheFileLayer>() { return 93; }
struct CacheFile;
template<> int dna::sdna_struct_id_get<CacheFile>() { return 94; }
struct CameraStereoSettings;
template<> int dna::sdna_struct_id_get<CameraStereoSettings>() { return 95; }
struct CameraBGImage;
template<> int dna::sdna_struct_id_get<CameraBGImage>() { return 96; }
struct CameraDOFSettings;
template<> int dna::sdna_struct_id_get<CameraDOFSettings>() { return 97; }
struct Camera_Runtime;
template<> int dna::sdna_struct_id_get<Camera_Runtime>() { return 98; }
struct Camera;
template<> int dna::sdna_struct_id_get<Camera>() { return 99; }
struct ClothSimSettings;
template<> int dna::sdna_struct_id_get<ClothSimSettings>() { return 100; }
struct ClothCollSettings;
template<> int dna::sdna_struct_id_get<ClothCollSettings>() { return 101; }
struct CollectionLightLinking;
template<> int dna::sdna_struct_id_get<CollectionLightLinking>() { return 102; }
struct CollectionObject;
template<> int dna::sdna_struct_id_get<CollectionObject>() { return 103; }
struct CollectionChild;
template<> int dna::sdna_struct_id_get<CollectionChild>() { return 104; }
struct CollectionImport;
template<> int dna::sdna_struct_id_get<CollectionImport>() { return 105; }
struct CollectionExport;
template<> int dna::sdna_struct_id_get<CollectionExport>() { return 106; }
struct Collection;
template<> int dna::sdna_struct_id_get<Collection>() { return 107; }
struct CurveMapPoint;
template<> int dna::sdna_struct_id_get<CurveMapPoint>() { return 108; }
struct CurveMap;
template<> int dna::sdna_struct_id_get<CurveMap>() { return 109; }
struct CurveMapping;
template<> int dna::sdna_struct_id_get<CurveMapping>() { return 110; }
struct Histogram;
template<> int dna::sdna_struct_id_get<Histogram>() { return 111; }
struct Scopes;
template<> int dna::sdna_struct_id_get<Scopes>() { return 112; }
struct ColorManagedViewSettings;
template<> int dna::sdna_struct_id_get<ColorManagedViewSettings>() { return 113; }
struct ColorManagedDisplaySettings;
template<> int dna::sdna_struct_id_get<ColorManagedDisplaySettings>() { return 114; }
struct ColorManagedColorspaceSettings;
template<> int dna::sdna_struct_id_get<ColorManagedColorspaceSettings>() { return 115; }
struct CBData;
template<> int dna::sdna_struct_id_get<CBData>() { return 116; }
struct ColorBand;
template<> int dna::sdna_struct_id_get<ColorBand>() { return 117; }
struct bConstraint;
template<> int dna::sdna_struct_id_get<bConstraint>() { return 118; }
struct bConstraintTarget;
template<> int dna::sdna_struct_id_get<bConstraintTarget>() { return 119; }
struct bKinematicConstraint;
template<> int dna::sdna_struct_id_get<bKinematicConstraint>() { return 120; }
struct bSplineIKConstraint;
template<> int dna::sdna_struct_id_get<bSplineIKConstraint>() { return 121; }
struct bArmatureConstraint;
template<> int dna::sdna_struct_id_get<bArmatureConstraint>() { return 122; }
struct bTrackToConstraint;
template<> int dna::sdna_struct_id_get<bTrackToConstraint>() { return 123; }
struct bRotateLikeConstraint;
template<> int dna::sdna_struct_id_get<bRotateLikeConstraint>() { return 124; }
struct bLocateLikeConstraint;
template<> int dna::sdna_struct_id_get<bLocateLikeConstraint>() { return 125; }
struct bSizeLikeConstraint;
template<> int dna::sdna_struct_id_get<bSizeLikeConstraint>() { return 126; }
struct bSameVolumeConstraint;
template<> int dna::sdna_struct_id_get<bSameVolumeConstraint>() { return 127; }
struct bTransLikeConstraint;
template<> int dna::sdna_struct_id_get<bTransLikeConstraint>() { return 128; }
struct bMinMaxConstraint;
template<> int dna::sdna_struct_id_get<bMinMaxConstraint>() { return 129; }
struct bActionConstraint;
template<> int dna::sdna_struct_id_get<bActionConstraint>() { return 130; }
struct bLockTrackConstraint;
template<> int dna::sdna_struct_id_get<bLockTrackConstraint>() { return 131; }
struct bDampTrackConstraint;
template<> int dna::sdna_struct_id_get<bDampTrackConstraint>() { return 132; }
struct bFollowPathConstraint;
template<> int dna::sdna_struct_id_get<bFollowPathConstraint>() { return 133; }
struct bStretchToConstraint;
template<> int dna::sdna_struct_id_get<bStretchToConstraint>() { return 134; }
struct bRigidBodyJointConstraint;
template<> int dna::sdna_struct_id_get<bRigidBodyJointConstraint>() { return 135; }
struct bClampToConstraint;
template<> int dna::sdna_struct_id_get<bClampToConstraint>() { return 136; }
struct bChildOfConstraint;
template<> int dna::sdna_struct_id_get<bChildOfConstraint>() { return 137; }
struct bTransformConstraint;
template<> int dna::sdna_struct_id_get<bTransformConstraint>() { return 138; }
struct bPivotConstraint;
template<> int dna::sdna_struct_id_get<bPivotConstraint>() { return 139; }
struct bLocLimitConstraint;
template<> int dna::sdna_struct_id_get<bLocLimitConstraint>() { return 140; }
struct bRotLimitConstraint;
template<> int dna::sdna_struct_id_get<bRotLimitConstraint>() { return 141; }
struct bSizeLimitConstraint;
template<> int dna::sdna_struct_id_get<bSizeLimitConstraint>() { return 142; }
struct bDistLimitConstraint;
template<> int dna::sdna_struct_id_get<bDistLimitConstraint>() { return 143; }
struct bShrinkwrapConstraint;
template<> int dna::sdna_struct_id_get<bShrinkwrapConstraint>() { return 144; }
struct bFollowTrackConstraint;
template<> int dna::sdna_struct_id_get<bFollowTrackConstraint>() { return 145; }
struct bCameraSolverConstraint;
template<> int dna::sdna_struct_id_get<bCameraSolverConstraint>() { return 146; }
struct bObjectSolverConstraint;
template<> int dna::sdna_struct_id_get<bObjectSolverConstraint>() { return 147; }
struct bTransformCacheConstraint;
template<> int dna::sdna_struct_id_get<bTransformCacheConstraint>() { return 148; }
struct bGeometryAttributeConstraint;
template<> int dna::sdna_struct_id_get<bGeometryAttributeConstraint>() { return 149; }
struct BezTriple;
template<> int dna::sdna_struct_id_get<BezTriple>() { return 150; }
struct BPoint;
template<> int dna::sdna_struct_id_get<BPoint>() { return 151; }
struct Nurb;
template<> int dna::sdna_struct_id_get<Nurb>() { return 152; }
struct CharInfo;
template<> int dna::sdna_struct_id_get<CharInfo>() { return 153; }
struct TextBox;
template<> int dna::sdna_struct_id_get<TextBox>() { return 154; }
struct Curve;
template<> int dna::sdna_struct_id_get<Curve>() { return 155; }
struct CurveProfilePoint;
template<> int dna::sdna_struct_id_get<CurveProfilePoint>() { return 156; }
struct CurveProfile;
template<> int dna::sdna_struct_id_get<CurveProfile>() { return 157; }
struct CurvesGeometry;
template<> int dna::sdna_struct_id_get<CurvesGeometry>() { return 158; }
struct Curves;
template<> int dna::sdna_struct_id_get<Curves>() { return 159; }
struct CustomDataLayer;
template<> int dna::sdna_struct_id_get<CustomDataLayer>() { return 160; }
struct CustomDataExternal;
template<> int dna::sdna_struct_id_get<CustomDataExternal>() { return 161; }
struct CustomData;
template<> int dna::sdna_struct_id_get<CustomData>() { return 162; }
struct CustomData_MeshMasks;
template<> int dna::sdna_struct_id_get<CustomData_MeshMasks>() { return 163; }
struct DynamicPaintSurface;
template<> int dna::sdna_struct_id_get<DynamicPaintSurface>() { return 164; }
struct DynamicPaintCanvasSettings;
template<> int dna::sdna_struct_id_get<DynamicPaintCanvasSettings>() { return 165; }
struct DynamicPaintBrushSettings;
template<> int dna::sdna_struct_id_get<DynamicPaintBrushSettings>() { return 166; }
struct Effect;
template<> int dna::sdna_struct_id_get<Effect>() { return 167; }
struct BuildEff;
template<> int dna::sdna_struct_id_get<BuildEff>() { return 168; }
struct PartEff;
template<> int dna::sdna_struct_id_get<PartEff>() { return 169; }
struct WaveEff;
template<> int dna::sdna_struct_id_get<WaveEff>() { return 170; }
struct FileGlobal;
template<> int dna::sdna_struct_id_get<FileGlobal>() { return 171; }
struct FluidDomainSettings;
template<> int dna::sdna_struct_id_get<FluidDomainSettings>() { return 172; }
struct FluidFlowSettings;
template<> int dna::sdna_struct_id_get<FluidFlowSettings>() { return 173; }
struct FluidEffectorSettings;
template<> int dna::sdna_struct_id_get<FluidEffectorSettings>() { return 174; }
struct FreestyleLineSet;
template<> int dna::sdna_struct_id_get<FreestyleLineSet>() { return 175; }
struct FreestyleModuleConfig;
template<> int dna::sdna_struct_id_get<FreestyleModuleConfig>() { return 176; }
struct FreestyleConfig;
template<> int dna::sdna_struct_id_get<FreestyleConfig>() { return 177; }
struct bGPDspoint;
template<> int dna::sdna_struct_id_get<bGPDspoint>() { return 178; }
struct bGPDtriangle;
template<> int dna::sdna_struct_id_get<bGPDtriangle>() { return 179; }
struct bGPDpalettecolor;
template<> int dna::sdna_struct_id_get<bGPDpalettecolor>() { return 180; }
struct bGPDpalette;
template<> int dna::sdna_struct_id_get<bGPDpalette>() { return 181; }
struct bGPDcurve_point;
template<> int dna::sdna_struct_id_get<bGPDcurve_point>() { return 182; }
struct bGPDcurve;
template<> int dna::sdna_struct_id_get<bGPDcurve>() { return 183; }
struct bGPDstroke_Runtime;
template<> int dna::sdna_struct_id_get<bGPDstroke_Runtime>() { return 184; }
struct bGPDstroke;
template<> int dna::sdna_struct_id_get<bGPDstroke>() { return 185; }
struct bGPDframe_Runtime;
template<> int dna::sdna_struct_id_get<bGPDframe_Runtime>() { return 186; }
struct bGPDframe;
template<> int dna::sdna_struct_id_get<bGPDframe>() { return 187; }
struct bGPDlayer_Mask;
template<> int dna::sdna_struct_id_get<bGPDlayer_Mask>() { return 188; }
struct bGPDlayer_Runtime;
template<> int dna::sdna_struct_id_get<bGPDlayer_Runtime>() { return 189; }
struct bGPDlayer;
template<> int dna::sdna_struct_id_get<bGPDlayer>() { return 190; }
struct bGPdata_Runtime;
template<> int dna::sdna_struct_id_get<bGPdata_Runtime>() { return 191; }
struct bGPgrid;
template<> int dna::sdna_struct_id_get<bGPgrid>() { return 192; }
struct bGPdata;
template<> int dna::sdna_struct_id_get<bGPdata>() { return 193; }
struct GpencilModifierData;
template<> int dna::sdna_struct_id_get<GpencilModifierData>() { return 194; }
struct NoiseGpencilModifierData;
template<> int dna::sdna_struct_id_get<NoiseGpencilModifierData>() { return 195; }
struct SubdivGpencilModifierData;
template<> int dna::sdna_struct_id_get<SubdivGpencilModifierData>() { return 196; }
struct ThickGpencilModifierData;
template<> int dna::sdna_struct_id_get<ThickGpencilModifierData>() { return 197; }
struct TimeGpencilModifierSegment;
template<> int dna::sdna_struct_id_get<TimeGpencilModifierSegment>() { return 198; }
struct TimeGpencilModifierData;
template<> int dna::sdna_struct_id_get<TimeGpencilModifierData>() { return 199; }
struct ColorGpencilModifierData;
template<> int dna::sdna_struct_id_get<ColorGpencilModifierData>() { return 200; }
struct OpacityGpencilModifierData;
template<> int dna::sdna_struct_id_get<OpacityGpencilModifierData>() { return 201; }
struct OutlineGpencilModifierData;
template<> int dna::sdna_struct_id_get<OutlineGpencilModifierData>() { return 202; }
struct ArrayGpencilModifierData;
template<> int dna::sdna_struct_id_get<ArrayGpencilModifierData>() { return 203; }
struct BuildGpencilModifierData;
template<> int dna::sdna_struct_id_get<BuildGpencilModifierData>() { return 204; }
struct LatticeGpencilModifierData;
template<> int dna::sdna_struct_id_get<LatticeGpencilModifierData>() { return 205; }
struct LengthGpencilModifierData;
template<> int dna::sdna_struct_id_get<LengthGpencilModifierData>() { return 206; }
struct DashGpencilModifierSegment;
template<> int dna::sdna_struct_id_get<DashGpencilModifierSegment>() { return 207; }
struct DashGpencilModifierData;
template<> int dna::sdna_struct_id_get<DashGpencilModifierData>() { return 208; }
struct MirrorGpencilModifierData;
template<> int dna::sdna_struct_id_get<MirrorGpencilModifierData>() { return 209; }
struct HookGpencilModifierData;
template<> int dna::sdna_struct_id_get<HookGpencilModifierData>() { return 210; }
struct SimplifyGpencilModifierData;
template<> int dna::sdna_struct_id_get<SimplifyGpencilModifierData>() { return 211; }
struct OffsetGpencilModifierData;
template<> int dna::sdna_struct_id_get<OffsetGpencilModifierData>() { return 212; }
struct SmoothGpencilModifierData;
template<> int dna::sdna_struct_id_get<SmoothGpencilModifierData>() { return 213; }
struct ArmatureGpencilModifierData;
template<> int dna::sdna_struct_id_get<ArmatureGpencilModifierData>() { return 214; }
struct MultiplyGpencilModifierData;
template<> int dna::sdna_struct_id_get<MultiplyGpencilModifierData>() { return 215; }
struct TintGpencilModifierData;
template<> int dna::sdna_struct_id_get<TintGpencilModifierData>() { return 216; }
struct TextureGpencilModifierData;
template<> int dna::sdna_struct_id_get<TextureGpencilModifierData>() { return 217; }
struct WeightProxGpencilModifierData;
template<> int dna::sdna_struct_id_get<WeightProxGpencilModifierData>() { return 218; }
struct WeightAngleGpencilModifierData;
template<> int dna::sdna_struct_id_get<WeightAngleGpencilModifierData>() { return 219; }
struct LineartGpencilModifierData;
template<> int dna::sdna_struct_id_get<LineartGpencilModifierData>() { return 220; }
struct ShrinkwrapGpencilModifierData;
template<> int dna::sdna_struct_id_get<ShrinkwrapGpencilModifierData>() { return 221; }
struct EnvelopeGpencilModifierData;
template<> int dna::sdna_struct_id_get<EnvelopeGpencilModifierData>() { return 222; }
struct GPUDOFSettings;
template<> int dna::sdna_struct_id_get<GPUDOFSettings>() { return 223; }
struct GreasePencilDrawingBase;
template<> int dna::sdna_struct_id_get<GreasePencilDrawingBase>() { return 224; }
struct GreasePencilDrawing;
template<> int dna::sdna_struct_id_get<GreasePencilDrawing>() { return 225; }
struct GreasePencilDrawingReference;
template<> int dna::sdna_struct_id_get<GreasePencilDrawingReference>() { return 226; }
struct GreasePencilFrame;
template<> int dna::sdna_struct_id_get<GreasePencilFrame>() { return 227; }
struct GreasePencilLayerFramesMapStorage;
template<> int dna::sdna_struct_id_get<GreasePencilLayerFramesMapStorage>() { return 228; }
struct GreasePencilLayerMask;
template<> int dna::sdna_struct_id_get<GreasePencilLayerMask>() { return 229; }
struct GreasePencilLayerTreeNode;
template<> int dna::sdna_struct_id_get<GreasePencilLayerTreeNode>() { return 230; }
struct GreasePencilLayer;
template<> int dna::sdna_struct_id_get<GreasePencilLayer>() { return 231; }
struct GreasePencilLayerTreeGroup;
template<> int dna::sdna_struct_id_get<GreasePencilLayerTreeGroup>() { return 232; }
struct GreasePencilOnionSkinningSettings;
template<> int dna::sdna_struct_id_get<GreasePencilOnionSkinningSettings>() { return 233; }
struct GreasePencil;
template<> int dna::sdna_struct_id_get<GreasePencil>() { return 234; }
struct ImageUser;
template<> int dna::sdna_struct_id_get<ImageUser>() { return 235; }
struct ImageAnim;
template<> int dna::sdna_struct_id_get<ImageAnim>() { return 236; }
struct ImageView;
template<> int dna::sdna_struct_id_get<ImageView>() { return 237; }
struct ImagePackedFile;
template<> int dna::sdna_struct_id_get<ImagePackedFile>() { return 238; }
struct RenderSlot;
template<> int dna::sdna_struct_id_get<RenderSlot>() { return 239; }
struct ImageTile_Runtime;
template<> int dna::sdna_struct_id_get<ImageTile_Runtime>() { return 240; }
struct ImageTile;
template<> int dna::sdna_struct_id_get<ImageTile>() { return 241; }
struct Image;
template<> int dna::sdna_struct_id_get<Image>() { return 242; }
struct KeyBlock;
template<> int dna::sdna_struct_id_get<KeyBlock>() { return 243; }
struct Key;
template<> int dna::sdna_struct_id_get<Key>() { return 244; }
struct Lattice;
template<> int dna::sdna_struct_id_get<Lattice>() { return 245; }
struct Base;
template<> int dna::sdna_struct_id_get<Base>() { return 246; }
struct LayerCollection;
template<> int dna::sdna_struct_id_get<LayerCollection>() { return 247; }
struct ViewLayerEEVEE;
template<> int dna::sdna_struct_id_get<ViewLayerEEVEE>() { return 248; }
struct ViewLayerAOV;
template<> int dna::sdna_struct_id_get<ViewLayerAOV>() { return 249; }
struct ViewLayerLightgroup;
template<> int dna::sdna_struct_id_get<ViewLayerLightgroup>() { return 250; }
struct LightgroupMembership;
template<> int dna::sdna_struct_id_get<LightgroupMembership>() { return 251; }
struct ViewLayer;
template<> int dna::sdna_struct_id_get<ViewLayer>() { return 252; }
struct Light;
template<> int dna::sdna_struct_id_get<Light>() { return 253; }
struct LightProbe;
template<> int dna::sdna_struct_id_get<LightProbe>() { return 254; }
struct LightProbeCache;
template<> int dna::sdna_struct_id_get<LightProbeCache>() { return 255; }
struct LightGridCache;
template<> int dna::sdna_struct_id_get<LightGridCache>() { return 256; }
struct LightCacheTexture;
template<> int dna::sdna_struct_id_get<LightCacheTexture>() { return 257; }
struct LightCache;
template<> int dna::sdna_struct_id_get<LightCache>() { return 258; }
struct LightProbeBakingData;
template<> int dna::sdna_struct_id_get<LightProbeBakingData>() { return 259; }
struct LightProbeIrradianceData;
template<> int dna::sdna_struct_id_get<LightProbeIrradianceData>() { return 260; }
struct LightProbeVisibilityData;
template<> int dna::sdna_struct_id_get<LightProbeVisibilityData>() { return 261; }
struct LightProbeConnectivityData;
template<> int dna::sdna_struct_id_get<LightProbeConnectivityData>() { return 262; }
struct LightProbeBlockData;
template<> int dna::sdna_struct_id_get<LightProbeBlockData>() { return 263; }
struct LightProbeGridCacheFrame;
template<> int dna::sdna_struct_id_get<LightProbeGridCacheFrame>() { return 264; }
struct LightProbeObjectCache;
template<> int dna::sdna_struct_id_get<LightProbeObjectCache>() { return 265; }
struct LineStyleModifier;
template<> int dna::sdna_struct_id_get<LineStyleModifier>() { return 266; }
struct LineStyleColorModifier_AlongStroke;
template<> int dna::sdna_struct_id_get<LineStyleColorModifier_AlongStroke>() { return 267; }
struct LineStyleAlphaModifier_AlongStroke;
template<> int dna::sdna_struct_id_get<LineStyleAlphaModifier_AlongStroke>() { return 268; }
struct LineStyleThicknessModifier_AlongStroke;
template<> int dna::sdna_struct_id_get<LineStyleThicknessModifier_AlongStroke>() { return 269; }
struct LineStyleColorModifier_DistanceFromCamera;
template<> int dna::sdna_struct_id_get<LineStyleColorModifier_DistanceFromCamera>() { return 270; }
struct LineStyleAlphaModifier_DistanceFromCamera;
template<> int dna::sdna_struct_id_get<LineStyleAlphaModifier_DistanceFromCamera>() { return 271; }
struct LineStyleThicknessModifier_DistanceFromCamera;
template<> int dna::sdna_struct_id_get<LineStyleThicknessModifier_DistanceFromCamera>() { return 272; }
struct LineStyleColorModifier_DistanceFromObject;
template<> int dna::sdna_struct_id_get<LineStyleColorModifier_DistanceFromObject>() { return 273; }
struct LineStyleAlphaModifier_DistanceFromObject;
template<> int dna::sdna_struct_id_get<LineStyleAlphaModifier_DistanceFromObject>() { return 274; }
struct LineStyleThicknessModifier_DistanceFromObject;
template<> int dna::sdna_struct_id_get<LineStyleThicknessModifier_DistanceFromObject>() { return 275; }
struct LineStyleColorModifier_Curvature_3D;
template<> int dna::sdna_struct_id_get<LineStyleColorModifier_Curvature_3D>() { return 276; }
struct LineStyleAlphaModifier_Curvature_3D;
template<> int dna::sdna_struct_id_get<LineStyleAlphaModifier_Curvature_3D>() { return 277; }
struct LineStyleThicknessModifier_Curvature_3D;
template<> int dna::sdna_struct_id_get<LineStyleThicknessModifier_Curvature_3D>() { return 278; }
struct LineStyleColorModifier_Noise;
template<> int dna::sdna_struct_id_get<LineStyleColorModifier_Noise>() { return 279; }
struct LineStyleAlphaModifier_Noise;
template<> int dna::sdna_struct_id_get<LineStyleAlphaModifier_Noise>() { return 280; }
struct LineStyleThicknessModifier_Noise;
template<> int dna::sdna_struct_id_get<LineStyleThicknessModifier_Noise>() { return 281; }
struct LineStyleColorModifier_CreaseAngle;
template<> int dna::sdna_struct_id_get<LineStyleColorModifier_CreaseAngle>() { return 282; }
struct LineStyleAlphaModifier_CreaseAngle;
template<> int dna::sdna_struct_id_get<LineStyleAlphaModifier_CreaseAngle>() { return 283; }
struct LineStyleThicknessModifier_CreaseAngle;
template<> int dna::sdna_struct_id_get<LineStyleThicknessModifier_CreaseAngle>() { return 284; }
struct LineStyleColorModifier_Tangent;
template<> int dna::sdna_struct_id_get<LineStyleColorModifier_Tangent>() { return 285; }
struct LineStyleAlphaModifier_Tangent;
template<> int dna::sdna_struct_id_get<LineStyleAlphaModifier_Tangent>() { return 286; }
struct LineStyleThicknessModifier_Tangent;
template<> int dna::sdna_struct_id_get<LineStyleThicknessModifier_Tangent>() { return 287; }
struct LineStyleColorModifier_Material;
template<> int dna::sdna_struct_id_get<LineStyleColorModifier_Material>() { return 288; }
struct LineStyleAlphaModifier_Material;
template<> int dna::sdna_struct_id_get<LineStyleAlphaModifier_Material>() { return 289; }
struct LineStyleThicknessModifier_Material;
template<> int dna::sdna_struct_id_get<LineStyleThicknessModifier_Material>() { return 290; }
struct LineStyleGeometryModifier_Sampling;
template<> int dna::sdna_struct_id_get<LineStyleGeometryModifier_Sampling>() { return 291; }
struct LineStyleGeometryModifier_BezierCurve;
template<> int dna::sdna_struct_id_get<LineStyleGeometryModifier_BezierCurve>() { return 292; }
struct LineStyleGeometryModifier_SinusDisplacement;
template<> int dna::sdna_struct_id_get<LineStyleGeometryModifier_SinusDisplacement>() { return 293; }
struct LineStyleGeometryModifier_SpatialNoise;
template<> int dna::sdna_struct_id_get<LineStyleGeometryModifier_SpatialNoise>() { return 294; }
struct LineStyleGeometryModifier_PerlinNoise1D;
template<> int dna::sdna_struct_id_get<LineStyleGeometryModifier_PerlinNoise1D>() { return 295; }
struct LineStyleGeometryModifier_PerlinNoise2D;
template<> int dna::sdna_struct_id_get<LineStyleGeometryModifier_PerlinNoise2D>() { return 296; }
struct LineStyleGeometryModifier_BackboneStretcher;
template<> int dna::sdna_struct_id_get<LineStyleGeometryModifier_BackboneStretcher>() { return 297; }
struct LineStyleGeometryModifier_TipRemover;
template<> int dna::sdna_struct_id_get<LineStyleGeometryModifier_TipRemover>() { return 298; }
struct LineStyleGeometryModifier_Polygonalization;
template<> int dna::sdna_struct_id_get<LineStyleGeometryModifier_Polygonalization>() { return 299; }
struct LineStyleGeometryModifier_GuidingLines;
template<> int dna::sdna_struct_id_get<LineStyleGeometryModifier_GuidingLines>() { return 300; }
struct LineStyleGeometryModifier_Blueprint;
template<> int dna::sdna_struct_id_get<LineStyleGeometryModifier_Blueprint>() { return 301; }
struct LineStyleGeometryModifier_2DOffset;
template<> int dna::sdna_struct_id_get<LineStyleGeometryModifier_2DOffset>() { return 302; }
struct LineStyleGeometryModifier_2DTransform;
template<> int dna::sdna_struct_id_get<LineStyleGeometryModifier_2DTransform>() { return 303; }
struct LineStyleGeometryModifier_Simplification;
template<> int dna::sdna_struct_id_get<LineStyleGeometryModifier_Simplification>() { return 304; }
struct LineStyleThicknessModifier_Calligraphy;
template<> int dna::sdna_struct_id_get<LineStyleThicknessModifier_Calligraphy>() { return 305; }
struct FreestyleLineStyle;
template<> int dna::sdna_struct_id_get<FreestyleLineStyle>() { return 306; }
struct Link;
template<> int dna::sdna_struct_id_get<Link>() { return 307; }
struct LinkData;
template<> int dna::sdna_struct_id_get<LinkData>() { return 308; }
struct ListBase;
template<> int dna::sdna_struct_id_get<ListBase>() { return 309; }
struct Mask_Runtime;
template<> int dna::sdna_struct_id_get<Mask_Runtime>() { return 310; }
struct Mask;
template<> int dna::sdna_struct_id_get<Mask>() { return 311; }
struct MaskParent;
template<> int dna::sdna_struct_id_get<MaskParent>() { return 312; }
struct MaskSplinePointUW;
template<> int dna::sdna_struct_id_get<MaskSplinePointUW>() { return 313; }
struct MaskSplinePoint;
template<> int dna::sdna_struct_id_get<MaskSplinePoint>() { return 314; }
struct MaskSpline;
template<> int dna::sdna_struct_id_get<MaskSpline>() { return 315; }
struct MaskLayerShape;
template<> int dna::sdna_struct_id_get<MaskLayerShape>() { return 316; }
struct MaskLayer;
template<> int dna::sdna_struct_id_get<MaskLayer>() { return 317; }
struct TexPaintSlot;
template<> int dna::sdna_struct_id_get<TexPaintSlot>() { return 318; }
struct MaterialGPencilStyle;
template<> int dna::sdna_struct_id_get<MaterialGPencilStyle>() { return 319; }
struct MaterialLineArt;
template<> int dna::sdna_struct_id_get<MaterialLineArt>() { return 320; }
struct Material;
template<> int dna::sdna_struct_id_get<Material>() { return 321; }
struct Mesh;
template<> int dna::sdna_struct_id_get<Mesh>() { return 322; }
struct TFace;
template<> int dna::sdna_struct_id_get<TFace>() { return 323; }
struct MSelect;
template<> int dna::sdna_struct_id_get<MSelect>() { return 324; }
struct MFloatProperty;
template<> int dna::sdna_struct_id_get<MFloatProperty>() { return 325; }
struct MIntProperty;
template<> int dna::sdna_struct_id_get<MIntProperty>() { return 326; }
struct MStringProperty;
template<> int dna::sdna_struct_id_get<MStringProperty>() { return 327; }
struct MBoolProperty;
template<> int dna::sdna_struct_id_get<MBoolProperty>() { return 328; }
struct MInt8Property;
template<> int dna::sdna_struct_id_get<MInt8Property>() { return 329; }
struct MDeformWeight;
template<> int dna::sdna_struct_id_get<MDeformWeight>() { return 330; }
struct MDeformVert;
template<> int dna::sdna_struct_id_get<MDeformVert>() { return 331; }
struct MVertSkin;
template<> int dna::sdna_struct_id_get<MVertSkin>() { return 332; }
struct MLoopCol;
template<> int dna::sdna_struct_id_get<MLoopCol>() { return 333; }
struct MPropCol;
template<> int dna::sdna_struct_id_get<MPropCol>() { return 334; }
struct MDisps;
template<> int dna::sdna_struct_id_get<MDisps>() { return 335; }
struct GridPaintMask;
template<> int dna::sdna_struct_id_get<GridPaintMask>() { return 336; }
struct FreestyleEdge;
template<> int dna::sdna_struct_id_get<FreestyleEdge>() { return 337; }
struct FreestyleFace;
template<> int dna::sdna_struct_id_get<FreestyleFace>() { return 338; }
struct MEdge;
template<> int dna::sdna_struct_id_get<MEdge>() { return 339; }
struct MPoly;
template<> int dna::sdna_struct_id_get<MPoly>() { return 340; }
struct MLoopUV;
template<> int dna::sdna_struct_id_get<MLoopUV>() { return 341; }
struct MVert;
template<> int dna::sdna_struct_id_get<MVert>() { return 342; }
struct MLoop;
template<> int dna::sdna_struct_id_get<MLoop>() { return 343; }
struct MFace;
template<> int dna::sdna_struct_id_get<MFace>() { return 344; }
struct MTFace;
template<> int dna::sdna_struct_id_get<MTFace>() { return 345; }
struct MCol;
template<> int dna::sdna_struct_id_get<MCol>() { return 346; }
struct MRecast;
template<> int dna::sdna_struct_id_get<MRecast>() { return 347; }
struct MetaElem;
template<> int dna::sdna_struct_id_get<MetaElem>() { return 348; }
struct MetaBall;
template<> int dna::sdna_struct_id_get<MetaBall>() { return 349; }
struct ModifierData;
template<> int dna::sdna_struct_id_get<ModifierData>() { return 350; }
struct MappingInfoModifierData;
template<> int dna::sdna_struct_id_get<MappingInfoModifierData>() { return 351; }
struct SubsurfModifierData;
template<> int dna::sdna_struct_id_get<SubsurfModifierData>() { return 352; }
struct LatticeModifierData;
template<> int dna::sdna_struct_id_get<LatticeModifierData>() { return 353; }
struct CurveModifierData;
template<> int dna::sdna_struct_id_get<CurveModifierData>() { return 354; }
struct BuildModifierData;
template<> int dna::sdna_struct_id_get<BuildModifierData>() { return 355; }
struct MaskModifierData;
template<> int dna::sdna_struct_id_get<MaskModifierData>() { return 356; }
struct ArrayModifierData;
template<> int dna::sdna_struct_id_get<ArrayModifierData>() { return 357; }
struct MirrorModifierData;
template<> int dna::sdna_struct_id_get<MirrorModifierData>() { return 358; }
struct EdgeSplitModifierData;
template<> int dna::sdna_struct_id_get<EdgeSplitModifierData>() { return 359; }
struct BevelModifierData;
template<> int dna::sdna_struct_id_get<BevelModifierData>() { return 360; }
struct FluidModifierData;
template<> int dna::sdna_struct_id_get<FluidModifierData>() { return 361; }
struct DisplaceModifierData;
template<> int dna::sdna_struct_id_get<DisplaceModifierData>() { return 362; }
struct UVProjectModifierData;
template<> int dna::sdna_struct_id_get<UVProjectModifierData>() { return 363; }
struct DecimateModifierData;
template<> int dna::sdna_struct_id_get<DecimateModifierData>() { return 364; }
struct SmoothModifierData;
template<> int dna::sdna_struct_id_get<SmoothModifierData>() { return 365; }
struct CastModifierData;
template<> int dna::sdna_struct_id_get<CastModifierData>() { return 366; }
struct WaveModifierData;
template<> int dna::sdna_struct_id_get<WaveModifierData>() { return 367; }
struct ArmatureModifierData;
template<> int dna::sdna_struct_id_get<ArmatureModifierData>() { return 368; }
struct HookModifierData;
template<> int dna::sdna_struct_id_get<HookModifierData>() { return 369; }
struct SoftbodyModifierData;
template<> int dna::sdna_struct_id_get<SoftbodyModifierData>() { return 370; }
struct ClothModifierData;
template<> int dna::sdna_struct_id_get<ClothModifierData>() { return 371; }
struct CollisionModifierData;
template<> int dna::sdna_struct_id_get<CollisionModifierData>() { return 372; }
struct SurfaceModifierData_Runtime;
template<> int dna::sdna_struct_id_get<SurfaceModifierData_Runtime>() { return 373; }
struct SurfaceModifierData;
template<> int dna::sdna_struct_id_get<SurfaceModifierData>() { return 374; }
struct BooleanModifierData;
template<> int dna::sdna_struct_id_get<BooleanModifierData>() { return 375; }
struct MDefInfluence;
template<> int dna::sdna_struct_id_get<MDefInfluence>() { return 376; }
struct MDefCell;
template<> int dna::sdna_struct_id_get<MDefCell>() { return 377; }
struct MeshDeformModifierData;
template<> int dna::sdna_struct_id_get<MeshDeformModifierData>() { return 378; }
struct ParticleSystemModifierData;
template<> int dna::sdna_struct_id_get<ParticleSystemModifierData>() { return 379; }
struct ParticleInstanceModifierData;
template<> int dna::sdna_struct_id_get<ParticleInstanceModifierData>() { return 380; }
struct ExplodeModifierData;
template<> int dna::sdna_struct_id_get<ExplodeModifierData>() { return 381; }
struct MultiresModifierData;
template<> int dna::sdna_struct_id_get<MultiresModifierData>() { return 382; }
struct FluidsimModifierData;
template<> int dna::sdna_struct_id_get<FluidsimModifierData>() { return 383; }
struct SmokeModifierData;
template<> int dna::sdna_struct_id_get<SmokeModifierData>() { return 384; }
struct ShrinkwrapModifierData;
template<> int dna::sdna_struct_id_get<ShrinkwrapModifierData>() { return 385; }
struct SimpleDeformModifierData;
template<> int dna::sdna_struct_id_get<SimpleDeformModifierData>() { return 386; }
struct ShapeKeyModifierData;
template<> int dna::sdna_struct_id_get<ShapeKeyModifierData>() { return 387; }
struct SolidifyModifierData;
template<> int dna::sdna_struct_id_get<SolidifyModifierData>() { return 388; }
struct ScrewModifierData;
template<> int dna::sdna_struct_id_get<ScrewModifierData>() { return 389; }
struct OceanModifierData;
template<> int dna::sdna_struct_id_get<OceanModifierData>() { return 390; }
struct WarpModifierData;
template<> int dna::sdna_struct_id_get<WarpModifierData>() { return 391; }
struct WeightVGEditModifierData;
template<> int dna::sdna_struct_id_get<WeightVGEditModifierData>() { return 392; }
struct WeightVGMixModifierData;
template<> int dna::sdna_struct_id_get<WeightVGMixModifierData>() { return 393; }
struct WeightVGProximityModifierData;
template<> int dna::sdna_struct_id_get<WeightVGProximityModifierData>() { return 394; }
struct DynamicPaintModifierData;
template<> int dna::sdna_struct_id_get<DynamicPaintModifierData>() { return 395; }
struct RemeshModifierData;
template<> int dna::sdna_struct_id_get<RemeshModifierData>() { return 396; }
struct SkinModifierData;
template<> int dna::sdna_struct_id_get<SkinModifierData>() { return 397; }
struct TriangulateModifierData;
template<> int dna::sdna_struct_id_get<TriangulateModifierData>() { return 398; }
struct LaplacianSmoothModifierData;
template<> int dna::sdna_struct_id_get<LaplacianSmoothModifierData>() { return 399; }
struct CorrectiveSmoothDeltaCache;
template<> int dna::sdna_struct_id_get<CorrectiveSmoothDeltaCache>() { return 400; }
struct CorrectiveSmoothModifierData;
template<> int dna::sdna_struct_id_get<CorrectiveSmoothModifierData>() { return 401; }
struct UVWarpModifierData;
template<> int dna::sdna_struct_id_get<UVWarpModifierData>() { return 402; }
struct MeshCacheModifierData;
template<> int dna::sdna_struct_id_get<MeshCacheModifierData>() { return 403; }
struct LaplacianDeformModifierData;
template<> int dna::sdna_struct_id_get<LaplacianDeformModifierData>() { return 404; }
struct WireframeModifierData;
template<> int dna::sdna_struct_id_get<WireframeModifierData>() { return 405; }
struct WeldModifierData;
template<> int dna::sdna_struct_id_get<WeldModifierData>() { return 406; }
struct DataTransferModifierData;
template<> int dna::sdna_struct_id_get<DataTransferModifierData>() { return 407; }
struct NormalEditModifierData;
template<> int dna::sdna_struct_id_get<NormalEditModifierData>() { return 408; }
struct MeshSeqCacheModifierData;
template<> int dna::sdna_struct_id_get<MeshSeqCacheModifierData>() { return 409; }
struct SDefBind;
template<> int dna::sdna_struct_id_get<SDefBind>() { return 410; }
struct SDefVert;
template<> int dna::sdna_struct_id_get<SDefVert>() { return 411; }
struct SurfaceDeformModifierData;
template<> int dna::sdna_struct_id_get<SurfaceDeformModifierData>() { return 412; }
struct WeightedNormalModifierData;
template<> int dna::sdna_struct_id_get<WeightedNormalModifierData>() { return 413; }
struct NodesModifierSettings;
template<> int dna::sdna_struct_id_get<NodesModifierSettings>() { return 414; }
struct NodesModifierDataBlock;
template<> int dna::sdna_struct_id_get<NodesModifierDataBlock>() { return 415; }
struct NodesModifierBakeFile;
template<> int dna::sdna_struct_id_get<NodesModifierBakeFile>() { return 416; }
struct NodesModifierPackedBake;
template<> int dna::sdna_struct_id_get<NodesModifierPackedBake>() { return 417; }
struct NodesModifierBake;
template<> int dna::sdna_struct_id_get<NodesModifierBake>() { return 418; }
struct NodesModifierData;
template<> int dna::sdna_struct_id_get<NodesModifierData>() { return 419; }
struct MeshToVolumeModifierData;
template<> int dna::sdna_struct_id_get<MeshToVolumeModifierData>() { return 420; }
struct VolumeDisplaceModifierData;
template<> int dna::sdna_struct_id_get<VolumeDisplaceModifierData>() { return 421; }
struct VolumeToMeshModifierData;
template<> int dna::sdna_struct_id_get<VolumeToMeshModifierData>() { return 422; }
struct GreasePencilModifierInfluenceData;
template<> int dna::sdna_struct_id_get<GreasePencilModifierInfluenceData>() { return 423; }
struct GreasePencilOpacityModifierData;
template<> int dna::sdna_struct_id_get<GreasePencilOpacityModifierData>() { return 424; }
struct GreasePencilSubdivModifierData;
template<> int dna::sdna_struct_id_get<GreasePencilSubdivModifierData>() { return 425; }
struct GreasePencilColorModifierData;
template<> int dna::sdna_struct_id_get<GreasePencilColorModifierData>() { return 426; }
struct GreasePencilTintModifierData;
template<> int dna::sdna_struct_id_get<GreasePencilTintModifierData>() { return 427; }
struct GreasePencilSmoothModifierData;
template<> int dna::sdna_struct_id_get<GreasePencilSmoothModifierData>() { return 428; }
struct GreasePencilOffsetModifierData;
template<> int dna::sdna_struct_id_get<GreasePencilOffsetModifierData>() { return 429; }
struct GreasePencilNoiseModifierData;
template<> int dna::sdna_struct_id_get<GreasePencilNoiseModifierData>() { return 430; }
struct GreasePencilMirrorModifierData;
template<> int dna::sdna_struct_id_get<GreasePencilMirrorModifierData>() { return 431; }
struct GreasePencilThickModifierData;
template<> int dna::sdna_struct_id_get<GreasePencilThickModifierData>() { return 432; }
struct GreasePencilLatticeModifierData;
template<> int dna::sdna_struct_id_get<GreasePencilLatticeModifierData>() { return 433; }
struct GreasePencilDashModifierSegment;
template<> int dna::sdna_struct_id_get<GreasePencilDashModifierSegment>() { return 434; }
struct GreasePencilDashModifierData;
template<> int dna::sdna_struct_id_get<GreasePencilDashModifierData>() { return 435; }
struct GreasePencilMultiModifierData;
template<> int dna::sdna_struct_id_get<GreasePencilMultiModifierData>() { return 436; }
struct GreasePencilLengthModifierData;
template<> int dna::sdna_struct_id_get<GreasePencilLengthModifierData>() { return 437; }
struct GreasePencilWeightAngleModifierData;
template<> int dna::sdna_struct_id_get<GreasePencilWeightAngleModifierData>() { return 438; }
struct GreasePencilArrayModifierData;
template<> int dna::sdna_struct_id_get<GreasePencilArrayModifierData>() { return 439; }
struct GreasePencilWeightProximityModifierData;
template<> int dna::sdna_struct_id_get<GreasePencilWeightProximityModifierData>() { return 440; }
struct GreasePencilHookModifierData;
template<> int dna::sdna_struct_id_get<GreasePencilHookModifierData>() { return 441; }
struct GreasePencilLineartModifierData;
template<> int dna::sdna_struct_id_get<GreasePencilLineartModifierData>() { return 442; }
struct GreasePencilArmatureModifierData;
template<> int dna::sdna_struct_id_get<GreasePencilArmatureModifierData>() { return 443; }
struct GreasePencilTimeModifierSegment;
template<> int dna::sdna_struct_id_get<GreasePencilTimeModifierSegment>() { return 444; }
struct GreasePencilTimeModifierData;
template<> int dna::sdna_struct_id_get<GreasePencilTimeModifierData>() { return 445; }
struct GreasePencilEnvelopeModifierData;
template<> int dna::sdna_struct_id_get<GreasePencilEnvelopeModifierData>() { return 446; }
struct GreasePencilOutlineModifierData;
template<> int dna::sdna_struct_id_get<GreasePencilOutlineModifierData>() { return 447; }
struct GreasePencilShrinkwrapModifierData;
template<> int dna::sdna_struct_id_get<GreasePencilShrinkwrapModifierData>() { return 448; }
struct GreasePencilBuildModifierData;
template<> int dna::sdna_struct_id_get<GreasePencilBuildModifierData>() { return 449; }
struct GreasePencilSimplifyModifierData;
template<> int dna::sdna_struct_id_get<GreasePencilSimplifyModifierData>() { return 450; }
struct GreasePencilTextureModifierData;
template<> int dna::sdna_struct_id_get<GreasePencilTextureModifierData>() { return 451; }
struct MovieClipUser;
template<> int dna::sdna_struct_id_get<MovieClipUser>() { return 452; }
struct MovieClipProxy;
template<> int dna::sdna_struct_id_get<MovieClipProxy>() { return 453; }
struct MovieClip_RuntimeGPUTexture;
template<> int dna::sdna_struct_id_get<MovieClip_RuntimeGPUTexture>() { return 454; }
struct MovieClip_Runtime;
template<> int dna::sdna_struct_id_get<MovieClip_Runtime>() { return 455; }
struct MovieClip;
template<> int dna::sdna_struct_id_get<MovieClip>() { return 456; }
struct MovieClipScopes;
template<> int dna::sdna_struct_id_get<MovieClipScopes>() { return 457; }
struct bActionModifier;
template<> int dna::sdna_struct_id_get<bActionModifier>() { return 458; }
struct bActionStrip;
template<> int dna::sdna_struct_id_get<bActionStrip>() { return 459; }
struct bNodeTreeInterfaceItem;
template<> int dna::sdna_struct_id_get<bNodeTreeInterfaceItem>() { return 460; }
struct bNodeTreeInterfaceSocket;
template<> int dna::sdna_struct_id_get<bNodeTreeInterfaceSocket>() { return 461; }
struct bNodeTreeInterfacePanel;
template<> int dna::sdna_struct_id_get<bNodeTreeInterfacePanel>() { return 462; }
struct bNodeTreeInterface;
template<> int dna::sdna_struct_id_get<bNodeTreeInterface>() { return 463; }
struct bNodeStack;
template<> int dna::sdna_struct_id_get<bNodeStack>() { return 464; }
struct bNodeSocket;
template<> int dna::sdna_struct_id_get<bNodeSocket>() { return 465; }
struct bNodePanelState;
template<> int dna::sdna_struct_id_get<bNodePanelState>() { return 466; }
struct bNode;
template<> int dna::sdna_struct_id_get<bNode>() { return 467; }
struct bNodeInstanceKey;
template<> int dna::sdna_struct_id_get<bNodeInstanceKey>() { return 468; }
struct bNodeLink;
template<> int dna::sdna_struct_id_get<bNodeLink>() { return 469; }
struct bNestedNodePath;
template<> int dna::sdna_struct_id_get<bNestedNodePath>() { return 470; }
struct bNestedNodeRef;
template<> int dna::sdna_struct_id_get<bNestedNodeRef>() { return 471; }
struct bNodeTree;
template<> int dna::sdna_struct_id_get<bNodeTree>() { return 472; }
struct bNodeSocketValueInt;
template<> int dna::sdna_struct_id_get<bNodeSocketValueInt>() { return 473; }
struct bNodeSocketValueFloat;
template<> int dna::sdna_struct_id_get<bNodeSocketValueFloat>() { return 474; }
struct bNodeSocketValueBoolean;
template<> int dna::sdna_struct_id_get<bNodeSocketValueBoolean>() { return 475; }
struct bNodeSocketValueVector;
template<> int dna::sdna_struct_id_get<bNodeSocketValueVector>() { return 476; }
struct bNodeSocketValueIntVector;
template<> int dna::sdna_struct_id_get<bNodeSocketValueIntVector>() { return 477; }
struct bNodeSocketValueRotation;
template<> int dna::sdna_struct_id_get<bNodeSocketValueRotation>() { return 478; }
struct bNodeSocketValueRGBA;
template<> int dna::sdna_struct_id_get<bNodeSocketValueRGBA>() { return 479; }
struct bNodeSocketValueString;
template<> int dna::sdna_struct_id_get<bNodeSocketValueString>() { return 480; }
struct bNodeSocketValueObject;
template<> int dna::sdna_struct_id_get<bNodeSocketValueObject>() { return 481; }
struct bNodeSocketValueImage;
template<> int dna::sdna_struct_id_get<bNodeSocketValueImage>() { return 482; }
struct bNodeSocketValueCollection;
template<> int dna::sdna_struct_id_get<bNodeSocketValueCollection>() { return 483; }
struct bNodeSocketValueTexture;
template<> int dna::sdna_struct_id_get<bNodeSocketValueTexture>() { return 484; }
struct bNodeSocketValueMaterial;
template<> int dna::sdna_struct_id_get<bNodeSocketValueMaterial>() { return 485; }
struct bNodeSocketValueFont;
template<> int dna::sdna_struct_id_get<bNodeSocketValueFont>() { return 486; }
struct bNodeSocketValueScene;
template<> int dna::sdna_struct_id_get<bNodeSocketValueScene>() { return 487; }
struct bNodeSocketValueText;
template<> int dna::sdna_struct_id_get<bNodeSocketValueText>() { return 488; }
struct bNodeSocketValueMask;
template<> int dna::sdna_struct_id_get<bNodeSocketValueMask>() { return 489; }
struct bNodeSocketValueSound;
template<> int dna::sdna_struct_id_get<bNodeSocketValueSound>() { return 490; }
struct bNodeSocketValueMenu;
template<> int dna::sdna_struct_id_get<bNodeSocketValueMenu>() { return 491; }
struct GeometryNodeAssetTraits;
template<> int dna::sdna_struct_id_get<GeometryNodeAssetTraits>() { return 492; }
struct CompositorNodeAssetTraits;
template<> int dna::sdna_struct_id_get<CompositorNodeAssetTraits>() { return 493; }
struct NodeFrame;
template<> int dna::sdna_struct_id_get<NodeFrame>() { return 494; }
struct NodeReroute;
template<> int dna::sdna_struct_id_get<NodeReroute>() { return 495; }
struct NodeImplicitConversion;
template<> int dna::sdna_struct_id_get<NodeImplicitConversion>() { return 496; }
struct NodeImageAnim;
template<> int dna::sdna_struct_id_get<NodeImageAnim>() { return 497; }
struct ColorCorrectionData;
template<> int dna::sdna_struct_id_get<ColorCorrectionData>() { return 498; }
struct NodeColorCorrection;
template<> int dna::sdna_struct_id_get<NodeColorCorrection>() { return 499; }
struct NodeBokehImage;
template<> int dna::sdna_struct_id_get<NodeBokehImage>() { return 500; }
struct NodeBoxMask;
template<> int dna::sdna_struct_id_get<NodeBoxMask>() { return 501; }
struct NodeEllipseMask;
template<> int dna::sdna_struct_id_get<NodeEllipseMask>() { return 502; }
struct NodeImageLayer;
template<> int dna::sdna_struct_id_get<NodeImageLayer>() { return 503; }
struct NodeBlurData;
template<> int dna::sdna_struct_id_get<NodeBlurData>() { return 504; }
struct NodeDBlurData;
template<> int dna::sdna_struct_id_get<NodeDBlurData>() { return 505; }
struct NodeBilateralBlurData;
template<> int dna::sdna_struct_id_get<NodeBilateralBlurData>() { return 506; }
struct NodeKuwaharaData;
template<> int dna::sdna_struct_id_get<NodeKuwaharaData>() { return 507; }
struct NodeAntiAliasingData;
template<> int dna::sdna_struct_id_get<NodeAntiAliasingData>() { return 508; }
struct NodeHueSat;
template<> int dna::sdna_struct_id_get<NodeHueSat>() { return 509; }
struct NodeImageFile;
template<> int dna::sdna_struct_id_get<NodeImageFile>() { return 510; }
struct NodeCompositorFileOutputItem;
template<> int dna::sdna_struct_id_get<NodeCompositorFileOutputItem>() { return 511; }
struct NodeCompositorFileOutput;
template<> int dna::sdna_struct_id_get<NodeCompositorFileOutput>() { return 512; }
struct NodeImageMultiFileSocket;
template<> int dna::sdna_struct_id_get<NodeImageMultiFileSocket>() { return 513; }
struct NodeChroma;
template<> int dna::sdna_struct_id_get<NodeChroma>() { return 514; }
struct NodeTwoXYs;
template<> int dna::sdna_struct_id_get<NodeTwoXYs>() { return 515; }
struct NodeTwoFloats;
template<> int dna::sdna_struct_id_get<NodeTwoFloats>() { return 516; }
struct NodeVertexCol;
template<> int dna::sdna_struct_id_get<NodeVertexCol>() { return 517; }
struct NodeCMPCombSepColor;
template<> int dna::sdna_struct_id_get<NodeCMPCombSepColor>() { return 518; }
struct NodeDefocus;
template<> int dna::sdna_struct_id_get<NodeDefocus>() { return 519; }
struct NodeScriptDict;
template<> int dna::sdna_struct_id_get<NodeScriptDict>() { return 520; }
struct NodeGlare;
template<> int dna::sdna_struct_id_get<NodeGlare>() { return 521; }
struct NodeTonemap;
template<> int dna::sdna_struct_id_get<NodeTonemap>() { return 522; }
struct NodeLensDist;
template<> int dna::sdna_struct_id_get<NodeLensDist>() { return 523; }
struct NodeColorBalance;
template<> int dna::sdna_struct_id_get<NodeColorBalance>() { return 524; }
struct NodeColorspill;
template<> int dna::sdna_struct_id_get<NodeColorspill>() { return 525; }
struct NodeConvertColorSpace;
template<> int dna::sdna_struct_id_get<NodeConvertColorSpace>() { return 526; }
struct NodeConvertToDisplay;
template<> int dna::sdna_struct_id_get<NodeConvertToDisplay>() { return 527; }
struct NodeDilateErode;
template<> int dna::sdna_struct_id_get<NodeDilateErode>() { return 528; }
struct NodeMask;
template<> int dna::sdna_struct_id_get<NodeMask>() { return 529; }
struct NodeSetAlpha;
template<> int dna::sdna_struct_id_get<NodeSetAlpha>() { return 530; }
struct NodeTexBase;
template<> int dna::sdna_struct_id_get<NodeTexBase>() { return 531; }
struct NodeTexSky;
template<> int dna::sdna_struct_id_get<NodeTexSky>() { return 532; }
struct NodeTexImage;
template<> int dna::sdna_struct_id_get<NodeTexImage>() { return 533; }
struct NodeTexChecker;
template<> int dna::sdna_struct_id_get<NodeTexChecker>() { return 534; }
struct NodeTexBrick;
template<> int dna::sdna_struct_id_get<NodeTexBrick>() { return 535; }
struct NodeTexEnvironment;
template<> int dna::sdna_struct_id_get<NodeTexEnvironment>() { return 536; }
struct NodeTexGabor;
template<> int dna::sdna_struct_id_get<NodeTexGabor>() { return 537; }
struct NodeTexGradient;
template<> int dna::sdna_struct_id_get<NodeTexGradient>() { return 538; }
struct NodeTexNoise;
template<> int dna::sdna_struct_id_get<NodeTexNoise>() { return 539; }
struct NodeTexVoronoi;
template<> int dna::sdna_struct_id_get<NodeTexVoronoi>() { return 540; }
struct NodeTexMusgrave;
template<> int dna::sdna_struct_id_get<NodeTexMusgrave>() { return 541; }
struct NodeTexWave;
template<> int dna::sdna_struct_id_get<NodeTexWave>() { return 542; }
struct NodeTexMagic;
template<> int dna::sdna_struct_id_get<NodeTexMagic>() { return 543; }
struct NodeShaderAttribute;
template<> int dna::sdna_struct_id_get<NodeShaderAttribute>() { return 544; }
struct NodeShaderVectTransform;
template<> int dna::sdna_struct_id_get<NodeShaderVectTransform>() { return 545; }
struct NodeShaderPrincipled;
template<> int dna::sdna_struct_id_get<NodeShaderPrincipled>() { return 546; }
struct NodeShaderHairPrincipled;
template<> int dna::sdna_struct_id_get<NodeShaderHairPrincipled>() { return 547; }
struct TexNodeOutput;
template<> int dna::sdna_struct_id_get<TexNodeOutput>() { return 548; }
struct NodeKeyingScreenData;
template<> int dna::sdna_struct_id_get<NodeKeyingScreenData>() { return 549; }
struct NodeKeyingData;
template<> int dna::sdna_struct_id_get<NodeKeyingData>() { return 550; }
struct NodeTrackPosData;
template<> int dna::sdna_struct_id_get<NodeTrackPosData>() { return 551; }
struct NodeTransformData;
template<> int dna::sdna_struct_id_get<NodeTransformData>() { return 552; }
struct NodeTranslateData;
template<> int dna::sdna_struct_id_get<NodeTranslateData>() { return 553; }
struct NodeRotateData;
template<> int dna::sdna_struct_id_get<NodeRotateData>() { return 554; }
struct NodeScaleData;
template<> int dna::sdna_struct_id_get<NodeScaleData>() { return 555; }
struct NodeCornerPinData;
template<> int dna::sdna_struct_id_get<NodeCornerPinData>() { return 556; }
struct NodeDisplaceData;
template<> int dna::sdna_struct_id_get<NodeDisplaceData>() { return 557; }
struct NodeMapUVData;
template<> int dna::sdna_struct_id_get<NodeMapUVData>() { return 558; }
struct NodePlaneTrackDeformData;
template<> int dna::sdna_struct_id_get<NodePlaneTrackDeformData>() { return 559; }
struct NodeShaderScript;
template<> int dna::sdna_struct_id_get<NodeShaderScript>() { return 560; }
struct NodeShaderTangent;
template<> int dna::sdna_struct_id_get<NodeShaderTangent>() { return 561; }
struct NodeShaderNormalMap;
template<> int dna::sdna_struct_id_get<NodeShaderNormalMap>() { return 562; }
struct NodeRadialTiling;
template<> int dna::sdna_struct_id_get<NodeRadialTiling>() { return 563; }
struct NodeShaderUVMap;
template<> int dna::sdna_struct_id_get<NodeShaderUVMap>() { return 564; }
struct NodeShaderVertexColor;
template<> int dna::sdna_struct_id_get<NodeShaderVertexColor>() { return 565; }
struct NodeShaderTexIES;
template<> int dna::sdna_struct_id_get<NodeShaderTexIES>() { return 566; }
struct NodeShaderOutputAOV;
template<> int dna::sdna_struct_id_get<NodeShaderOutputAOV>() { return 567; }
struct NodeSunBeams;
template<> int dna::sdna_struct_id_get<NodeSunBeams>() { return 568; }
struct CryptomatteEntry;
template<> int dna::sdna_struct_id_get<CryptomatteEntry>() { return 569; }
struct CryptomatteLayer;
template<> int dna::sdna_struct_id_get<CryptomatteLayer>() { return 570; }
struct NodeCryptomatte_Runtime;
template<> int dna::sdna_struct_id_get<NodeCryptomatte_Runtime>() { return 571; }
struct NodeCryptomatte;
template<> int dna::sdna_struct_id_get<NodeCryptomatte>() { return 572; }
struct NodeDenoise;
template<> int dna::sdna_struct_id_get<NodeDenoise>() { return 573; }
struct NodeMapRange;
template<> int dna::sdna_struct_id_get<NodeMapRange>() { return 574; }
struct NodeRandomValue;
template<> int dna::sdna_struct_id_get<NodeRandomValue>() { return 575; }
struct NodeAccumulateField;
template<> int dna::sdna_struct_id_get<NodeAccumulateField>() { return 576; }
struct NodeInputBool;
template<> int dna::sdna_struct_id_get<NodeInputBool>() { return 577; }
struct NodeInputInt;
template<> int dna::sdna_struct_id_get<NodeInputInt>() { return 578; }
struct NodeInputMenu;
template<> int dna::sdna_struct_id_get<NodeInputMenu>() { return 579; }
struct NodeInputRotation;
template<> int dna::sdna_struct_id_get<NodeInputRotation>() { return 580; }
struct NodeInputVector;
template<> int dna::sdna_struct_id_get<NodeInputVector>() { return 581; }
struct NodeInputIntVector;
template<> int dna::sdna_struct_id_get<NodeInputIntVector>() { return 582; }
struct NodeInputColor;
template<> int dna::sdna_struct_id_get<NodeInputColor>() { return 583; }
struct NodeInputString;
template<> int dna::sdna_struct_id_get<NodeInputString>() { return 584; }
struct NodeGeometryExtrudeMesh;
template<> int dna::sdna_struct_id_get<NodeGeometryExtrudeMesh>() { return 585; }
struct NodeGeometryObjectInfo;
template<> int dna::sdna_struct_id_get<NodeGeometryObjectInfo>() { return 586; }
struct NodeGeometryPointsToVolume;
template<> int dna::sdna_struct_id_get<NodeGeometryPointsToVolume>() { return 587; }
struct NodeGeometryCollectionInfo;
template<> int dna::sdna_struct_id_get<NodeGeometryCollectionInfo>() { return 588; }
struct NodeGeometryProximity;
template<> int dna::sdna_struct_id_get<NodeGeometryProximity>() { return 589; }
struct NodeGeometryVolumeToMesh;
template<> int dna::sdna_struct_id_get<NodeGeometryVolumeToMesh>() { return 590; }
struct NodeGeometryMeshToVolume;
template<> int dna::sdna_struct_id_get<NodeGeometryMeshToVolume>() { return 591; }
struct NodeGeometrySubdivisionSurface;
template<> int dna::sdna_struct_id_get<NodeGeometrySubdivisionSurface>() { return 592; }
struct NodeGeometryMeshCircle;
template<> int dna::sdna_struct_id_get<NodeGeometryMeshCircle>() { return 593; }
struct NodeGeometryMeshCylinder;
template<> int dna::sdna_struct_id_get<NodeGeometryMeshCylinder>() { return 594; }
struct NodeGeometryMeshCone;
template<> int dna::sdna_struct_id_get<NodeGeometryMeshCone>() { return 595; }
struct NodeGeometryMergeByDistance;
template<> int dna::sdna_struct_id_get<NodeGeometryMergeByDistance>() { return 596; }
struct NodeGeometryMeshLine;
template<> int dna::sdna_struct_id_get<NodeGeometryMeshLine>() { return 597; }
struct NodeSwitch;
template<> int dna::sdna_struct_id_get<NodeSwitch>() { return 598; }
struct NodeEnumItem;
template<> int dna::sdna_struct_id_get<NodeEnumItem>() { return 599; }
struct NodeEnumDefinition;
template<> int dna::sdna_struct_id_get<NodeEnumDefinition>() { return 600; }
struct NodeMenuSwitch;
template<> int dna::sdna_struct_id_get<NodeMenuSwitch>() { return 601; }
struct NodeGeometryCurveSplineType;
template<> int dna::sdna_struct_id_get<NodeGeometryCurveSplineType>() { return 602; }
struct NodeGeometrySetCurveHandlePositions;
template<> int dna::sdna_struct_id_get<NodeGeometrySetCurveHandlePositions>() { return 603; }
struct NodeGeometryCurveSetHandles;
template<> int dna::sdna_struct_id_get<NodeGeometryCurveSetHandles>() { return 604; }
struct NodeGeometryCurveSelectHandles;
template<> int dna::sdna_struct_id_get<NodeGeometryCurveSelectHandles>() { return 605; }
struct NodeGeometryCurvePrimitiveArc;
template<> int dna::sdna_struct_id_get<NodeGeometryCurvePrimitiveArc>() { return 606; }
struct NodeGeometryCurvePrimitiveLine;
template<> int dna::sdna_struct_id_get<NodeGeometryCurvePrimitiveLine>() { return 607; }
struct NodeGeometryCurvePrimitiveBezierSegment;
template<> int dna::sdna_struct_id_get<NodeGeometryCurvePrimitiveBezierSegment>() { return 608; }
struct NodeGeometryCurvePrimitiveCircle;
template<> int dna::sdna_struct_id_get<NodeGeometryCurvePrimitiveCircle>() { return 609; }
struct NodeGeometryCurvePrimitiveQuad;
template<> int dna::sdna_struct_id_get<NodeGeometryCurvePrimitiveQuad>() { return 610; }
struct NodeGeometryCurveResample;
template<> int dna::sdna_struct_id_get<NodeGeometryCurveResample>() { return 611; }
struct NodeGeometryCurveFillet;
template<> int dna::sdna_struct_id_get<NodeGeometryCurveFillet>() { return 612; }
struct NodeGeometryCurveTrim;
template<> int dna::sdna_struct_id_get<NodeGeometryCurveTrim>() { return 613; }
struct NodeGeometryCurveToPoints;
template<> int dna::sdna_struct_id_get<NodeGeometryCurveToPoints>() { return 614; }
struct NodeGeometryCurveSample;
template<> int dna::sdna_struct_id_get<NodeGeometryCurveSample>() { return 615; }
struct NodeGeometryTransferAttribute;
template<> int dna::sdna_struct_id_get<NodeGeometryTransferAttribute>() { return 616; }
struct NodeGeometrySampleIndex;
template<> int dna::sdna_struct_id_get<NodeGeometrySampleIndex>() { return 617; }
struct NodeRaycastSampleAttributeItem;
template<> int dna::sdna_struct_id_get<NodeRaycastSampleAttributeItem>() { return 618; }
struct NodeGeometryRaycast;
template<> int dna::sdna_struct_id_get<NodeGeometryRaycast>() { return 619; }
struct NodeShaderRaycast;
template<> int dna::sdna_struct_id_get<NodeShaderRaycast>() { return 620; }
struct NodeGeometryCurveFill;
template<> int dna::sdna_struct_id_get<NodeGeometryCurveFill>() { return 621; }
struct NodeGeometryMeshToPoints;
template<> int dna::sdna_struct_id_get<NodeGeometryMeshToPoints>() { return 622; }
struct NodeGeometryAttributeCaptureItem;
template<> int dna::sdna_struct_id_get<NodeGeometryAttributeCaptureItem>() { return 623; }
struct NodeGeometryAttributeCapture;
template<> int dna::sdna_struct_id_get<NodeGeometryAttributeCapture>() { return 624; }
struct NodeGeometryStoreNamedAttribute;
template<> int dna::sdna_struct_id_get<NodeGeometryStoreNamedAttribute>() { return 625; }
struct NodeGeometryInputNamedAttribute;
template<> int dna::sdna_struct_id_get<NodeGeometryInputNamedAttribute>() { return 626; }
struct NodeGeometryStringToCurves;
template<> int dna::sdna_struct_id_get<NodeGeometryStringToCurves>() { return 627; }
struct NodeGeometryDeleteGeometry;
template<> int dna::sdna_struct_id_get<NodeGeometryDeleteGeometry>() { return 628; }
struct NodeGeometryDuplicateElements;
template<> int dna::sdna_struct_id_get<NodeGeometryDuplicateElements>() { return 629; }
struct NodeGeometryMergeLayers;
template<> int dna::sdna_struct_id_get<NodeGeometryMergeLayers>() { return 630; }
struct NodeGeometrySeparateGeometry;
template<> int dna::sdna_struct_id_get<NodeGeometrySeparateGeometry>() { return 631; }
struct NodeGeometryImageTexture;
template<> int dna::sdna_struct_id_get<NodeGeometryImageTexture>() { return 632; }
struct NodeGeometryViewerItem;
template<> int dna::sdna_struct_id_get<NodeGeometryViewerItem>() { return 633; }
struct NodeGeometryViewer;
template<> int dna::sdna_struct_id_get<NodeGeometryViewer>() { return 634; }
struct NodeGeometryUVUnwrap;
template<> int dna::sdna_struct_id_get<NodeGeometryUVUnwrap>() { return 635; }
struct NodeSimulationItem;
template<> int dna::sdna_struct_id_get<NodeSimulationItem>() { return 636; }
struct NodeGeometrySimulationInput;
template<> int dna::sdna_struct_id_get<NodeGeometrySimulationInput>() { return 637; }
struct NodeGeometrySimulationOutput;
template<> int dna::sdna_struct_id_get<NodeGeometrySimulationOutput>() { return 638; }
struct NodeRepeatItem;
template<> int dna::sdna_struct_id_get<NodeRepeatItem>() { return 639; }
struct NodeGeometryRepeatInput;
template<> int dna::sdna_struct_id_get<NodeGeometryRepeatInput>() { return 640; }
struct NodeGeometryRepeatOutput;
template<> int dna::sdna_struct_id_get<NodeGeometryRepeatOutput>() { return 641; }
struct NodeGeometryForeachGeometryElementInput;
template<> int dna::sdna_struct_id_get<NodeGeometryForeachGeometryElementInput>() { return 642; }
struct NodeForeachGeometryElementInputItem;
template<> int dna::sdna_struct_id_get<NodeForeachGeometryElementInputItem>() { return 643; }
struct NodeForeachGeometryElementMainItem;
template<> int dna::sdna_struct_id_get<NodeForeachGeometryElementMainItem>() { return 644; }
struct NodeForeachGeometryElementGenerationItem;
template<> int dna::sdna_struct_id_get<NodeForeachGeometryElementGenerationItem>() { return 645; }
struct NodeForeachGeometryElementInputItems;
template<> int dna::sdna_struct_id_get<NodeForeachGeometryElementInputItems>() { return 646; }
struct NodeForeachGeometryElementMainItems;
template<> int dna::sdna_struct_id_get<NodeForeachGeometryElementMainItems>() { return 647; }
struct NodeForeachGeometryElementGenerationItems;
template<> int dna::sdna_struct_id_get<NodeForeachGeometryElementGenerationItems>() { return 648; }
struct NodeGeometryForeachGeometryElementOutput;
template<> int dna::sdna_struct_id_get<NodeGeometryForeachGeometryElementOutput>() { return 649; }
struct NodeClosureInput;
template<> int dna::sdna_struct_id_get<NodeClosureInput>() { return 650; }
struct NodeClosureInputItem;
template<> int dna::sdna_struct_id_get<NodeClosureInputItem>() { return 651; }
struct NodeClosureOutputItem;
template<> int dna::sdna_struct_id_get<NodeClosureOutputItem>() { return 652; }
struct NodeClosureInputItems;
template<> int dna::sdna_struct_id_get<NodeClosureInputItems>() { return 653; }
struct NodeClosureOutputItems;
template<> int dna::sdna_struct_id_get<NodeClosureOutputItems>() { return 654; }
struct NodeClosureOutput;
template<> int dna::sdna_struct_id_get<NodeClosureOutput>() { return 655; }
struct NodeEvaluateClosureInputItem;
template<> int dna::sdna_struct_id_get<NodeEvaluateClosureInputItem>() { return 656; }
struct NodeEvaluateClosureOutputItem;
template<> int dna::sdna_struct_id_get<NodeEvaluateClosureOutputItem>() { return 657; }
struct NodeEvaluateClosureInputItems;
template<> int dna::sdna_struct_id_get<NodeEvaluateClosureInputItems>() { return 658; }
struct NodeEvaluateClosureOutputItems;
template<> int dna::sdna_struct_id_get<NodeEvaluateClosureOutputItems>() { return 659; }
struct NodeEvaluateClosure;
template<> int dna::sdna_struct_id_get<NodeEvaluateClosure>() { return 660; }
struct IndexSwitchItem;
template<> int dna::sdna_struct_id_get<IndexSwitchItem>() { return 661; }
struct NodeIndexSwitch;
template<> int dna::sdna_struct_id_get<NodeIndexSwitch>() { return 662; }
struct GeometryNodeFieldToGridItem;
template<> int dna::sdna_struct_id_get<GeometryNodeFieldToGridItem>() { return 663; }
struct GeometryNodeFieldToGrid;
template<> int dna::sdna_struct_id_get<GeometryNodeFieldToGrid>() { return 664; }
struct GeometryNodeFieldToListItem;
template<> int dna::sdna_struct_id_get<GeometryNodeFieldToListItem>() { return 665; }
struct GeometryNodeFieldToList;
template<> int dna::sdna_struct_id_get<GeometryNodeFieldToList>() { return 666; }
struct GeometryNodeClosureToListItem;
template<> int dna::sdna_struct_id_get<GeometryNodeClosureToListItem>() { return 667; }
struct GeometryNodeClosureToList;
template<> int dna::sdna_struct_id_get<GeometryNodeClosureToList>() { return 668; }
struct NodeGeometryDistributePointsInVolume;
template<> int dna::sdna_struct_id_get<NodeGeometryDistributePointsInVolume>() { return 669; }
struct NodeFunctionCompare;
template<> int dna::sdna_struct_id_get<NodeFunctionCompare>() { return 670; }
struct NodeCombSepColor;
template<> int dna::sdna_struct_id_get<NodeCombSepColor>() { return 671; }
struct NodeShaderMix;
template<> int dna::sdna_struct_id_get<NodeShaderMix>() { return 672; }
struct NodeGeometryLinearGizmo;
template<> int dna::sdna_struct_id_get<NodeGeometryLinearGizmo>() { return 673; }
struct NodeGeometryDialGizmo;
template<> int dna::sdna_struct_id_get<NodeGeometryDialGizmo>() { return 674; }
struct NodeGeometryTransformGizmo;
template<> int dna::sdna_struct_id_get<NodeGeometryTransformGizmo>() { return 675; }
struct NodeGeometryBakeItem;
template<> int dna::sdna_struct_id_get<NodeGeometryBakeItem>() { return 676; }
struct NodeGeometryBake;
template<> int dna::sdna_struct_id_get<NodeGeometryBake>() { return 677; }
struct NodeCombineBundleItem;
template<> int dna::sdna_struct_id_get<NodeCombineBundleItem>() { return 678; }
struct NodeCombineBundle;
template<> int dna::sdna_struct_id_get<NodeCombineBundle>() { return 679; }
struct NodeSeparateBundleItem;
template<> int dna::sdna_struct_id_get<NodeSeparateBundleItem>() { return 680; }
struct NodeSeparateBundle;
template<> int dna::sdna_struct_id_get<NodeSeparateBundle>() { return 681; }
struct NodeFunctionFormatStringItem;
template<> int dna::sdna_struct_id_get<NodeFunctionFormatStringItem>() { return 682; }
struct NodeFunctionFormatString;
template<> int dna::sdna_struct_id_get<NodeFunctionFormatString>() { return 683; }
struct NodeGeometryListGetItem;
template<> int dna::sdna_struct_id_get<NodeGeometryListGetItem>() { return 684; }
struct NodeGetBundleItem;
template<> int dna::sdna_struct_id_get<NodeGetBundleItem>() { return 685; }
struct NodeStoreBundleItem;
template<> int dna::sdna_struct_id_get<NodeStoreBundleItem>() { return 686; }
struct FluidVertexVelocity;
template<> int dna::sdna_struct_id_get<FluidVertexVelocity>() { return 687; }
struct FluidsimSettings;
template<> int dna::sdna_struct_id_get<FluidsimSettings>() { return 688; }
struct PartDeflect;
template<> int dna::sdna_struct_id_get<PartDeflect>() { return 689; }
struct EffectorWeights;
template<> int dna::sdna_struct_id_get<EffectorWeights>() { return 690; }
struct SBVertex;
template<> int dna::sdna_struct_id_get<SBVertex>() { return 691; }
struct SoftBody_Shared;
template<> int dna::sdna_struct_id_get<SoftBody_Shared>() { return 692; }
struct SoftBody;
template<> int dna::sdna_struct_id_get<SoftBody>() { return 693; }
struct bDeformGroup;
template<> int dna::sdna_struct_id_get<bDeformGroup>() { return 694; }
struct bFaceMap;
template<> int dna::sdna_struct_id_get<bFaceMap>() { return 695; }
struct BoundBox;
template<> int dna::sdna_struct_id_get<BoundBox>() { return 696; }
struct ObjectLineArt;
template<> int dna::sdna_struct_id_get<ObjectLineArt>() { return 697; }
struct LightLinkingRuntime;
template<> int dna::sdna_struct_id_get<LightLinkingRuntime>() { return 698; }
struct LightLinking;
template<> int dna::sdna_struct_id_get<LightLinking>() { return 699; }
struct Object;
template<> int dna::sdna_struct_id_get<Object>() { return 700; }
struct ObHook;
template<> int dna::sdna_struct_id_get<ObHook>() { return 701; }
struct TreeStoreElem;
template<> int dna::sdna_struct_id_get<TreeStoreElem>() { return 702; }
struct TreeStore;
template<> int dna::sdna_struct_id_get<TreeStore>() { return 703; }
struct PackedFile;
template<> int dna::sdna_struct_id_get<PackedFile>() { return 704; }
struct HairKey;
template<> int dna::sdna_struct_id_get<HairKey>() { return 705; }
struct ParticleKey;
template<> int dna::sdna_struct_id_get<ParticleKey>() { return 706; }
struct BoidParticle;
template<> int dna::sdna_struct_id_get<BoidParticle>() { return 707; }
struct ParticleSpring;
template<> int dna::sdna_struct_id_get<ParticleSpring>() { return 708; }
struct ChildParticle;
template<> int dna::sdna_struct_id_get<ChildParticle>() { return 709; }
struct ParticleTarget;
template<> int dna::sdna_struct_id_get<ParticleTarget>() { return 710; }
struct ParticleDupliWeight;
template<> int dna::sdna_struct_id_get<ParticleDupliWeight>() { return 711; }
struct ParticleData;
template<> int dna::sdna_struct_id_get<ParticleData>() { return 712; }
struct SPHFluidSettings;
template<> int dna::sdna_struct_id_get<SPHFluidSettings>() { return 713; }
struct ParticleSettings;
template<> int dna::sdna_struct_id_get<ParticleSettings>() { return 714; }
struct ParticleSystem;
template<> int dna::sdna_struct_id_get<ParticleSystem>() { return 715; }
struct PTCacheExtra;
template<> int dna::sdna_struct_id_get<PTCacheExtra>() { return 716; }
struct PTCacheMem;
template<> int dna::sdna_struct_id_get<PTCacheMem>() { return 717; }
struct PointCache;
template<> int dna::sdna_struct_id_get<PointCache>() { return 718; }
struct PointCloud;
template<> int dna::sdna_struct_id_get<PointCloud>() { return 719; }
struct RigidBodyWorld_Shared;
template<> int dna::sdna_struct_id_get<RigidBodyWorld_Shared>() { return 720; }
struct RigidBodyWorld;
template<> int dna::sdna_struct_id_get<RigidBodyWorld>() { return 721; }
struct RigidBodyOb;
template<> int dna::sdna_struct_id_get<RigidBodyOb>() { return 722; }
struct RigidBodyCon;
template<> int dna::sdna_struct_id_get<RigidBodyCon>() { return 723; }
struct FFMpegCodecData;
template<> int dna::sdna_struct_id_get<FFMpegCodecData>() { return 724; }
struct AudioData;
template<> int dna::sdna_struct_id_get<AudioData>() { return 725; }
struct SceneRenderLayer;
template<> int dna::sdna_struct_id_get<SceneRenderLayer>() { return 726; }
struct SceneRenderView;
template<> int dna::sdna_struct_id_get<SceneRenderView>() { return 727; }
struct Stereo3dFormat;
template<> int dna::sdna_struct_id_get<Stereo3dFormat>() { return 728; }
struct ImageFormatData;
template<> int dna::sdna_struct_id_get<ImageFormatData>() { return 729; }
struct BakeData;
template<> int dna::sdna_struct_id_get<BakeData>() { return 730; }
struct RenderData;
template<> int dna::sdna_struct_id_get<RenderData>() { return 731; }
struct TimeMarker;
template<> int dna::sdna_struct_id_get<TimeMarker>() { return 732; }
struct UnifiedPaintSettings;
template<> int dna::sdna_struct_id_get<UnifiedPaintSettings>() { return 733; }
struct NamedBrushAssetReference;
template<> int dna::sdna_struct_id_get<NamedBrushAssetReference>() { return 734; }
struct ToolSystemBrushBindings;
template<> int dna::sdna_struct_id_get<ToolSystemBrushBindings>() { return 735; }
struct MeshAutomaskingSettings;
template<> int dna::sdna_struct_id_get<MeshAutomaskingSettings>() { return 736; }
struct Paint;
template<> int dna::sdna_struct_id_get<Paint>() { return 737; }
struct ImagePaintSettings;
template<> int dna::sdna_struct_id_get<ImagePaintSettings>() { return 738; }
struct PaintModeSettings;
template<> int dna::sdna_struct_id_get<PaintModeSettings>() { return 739; }
struct ParticleBrushData;
template<> int dna::sdna_struct_id_get<ParticleBrushData>() { return 740; }
struct ParticleEditSettings;
template<> int dna::sdna_struct_id_get<ParticleEditSettings>() { return 741; }
struct Sculpt;
template<> int dna::sdna_struct_id_get<Sculpt>() { return 742; }
struct CurvesSculpt;
template<> int dna::sdna_struct_id_get<CurvesSculpt>() { return 743; }
struct UvSculpt;
template<> int dna::sdna_struct_id_get<UvSculpt>() { return 744; }
struct GpPaint;
template<> int dna::sdna_struct_id_get<GpPaint>() { return 745; }
struct GpVertexPaint;
template<> int dna::sdna_struct_id_get<GpVertexPaint>() { return 746; }
struct GpSculptPaint;
template<> int dna::sdna_struct_id_get<GpSculptPaint>() { return 747; }
struct GpWeightPaint;
template<> int dna::sdna_struct_id_get<GpWeightPaint>() { return 748; }
struct VPaint;
template<> int dna::sdna_struct_id_get<VPaint>() { return 749; }
struct GP_Sculpt_Guide;
template<> int dna::sdna_struct_id_get<GP_Sculpt_Guide>() { return 750; }
struct GP_Sculpt_Settings;
template<> int dna::sdna_struct_id_get<GP_Sculpt_Settings>() { return 751; }
struct GP_Interpolate_Settings;
template<> int dna::sdna_struct_id_get<GP_Interpolate_Settings>() { return 752; }
struct CurvePaintSettings;
template<> int dna::sdna_struct_id_get<CurvePaintSettings>() { return 753; }
struct MeshStatVis;
template<> int dna::sdna_struct_id_get<MeshStatVis>() { return 754; }
struct SequencerToolSettings;
template<> int dna::sdna_struct_id_get<SequencerToolSettings>() { return 755; }
struct ToolSettings;
template<> int dna::sdna_struct_id_get<ToolSettings>() { return 756; }
struct UnitSettings;
template<> int dna::sdna_struct_id_get<UnitSettings>() { return 757; }
struct PhysicsSettings;
template<> int dna::sdna_struct_id_get<PhysicsSettings>() { return 758; }
struct DisplaySafeAreas;
template<> int dna::sdna_struct_id_get<DisplaySafeAreas>() { return 759; }
struct SceneDisplay;
template<> int dna::sdna_struct_id_get<SceneDisplay>() { return 760; }
struct RaytraceEEVEE;
template<> int dna::sdna_struct_id_get<RaytraceEEVEE>() { return 761; }
struct SceneEEVEE;
template<> int dna::sdna_struct_id_get<SceneEEVEE>() { return 762; }
struct SceneGpencil;
template<> int dna::sdna_struct_id_get<SceneGpencil>() { return 763; }
struct SceneHydra;
template<> int dna::sdna_struct_id_get<SceneHydra>() { return 764; }
struct TransformOrientationSlot;
template<> int dna::sdna_struct_id_get<TransformOrientationSlot>() { return 765; }
struct Scene;
template<> int dna::sdna_struct_id_get<Scene>() { return 766; }
struct bScreen;
template<> int dna::sdna_struct_id_get<bScreen>() { return 767; }
struct ScrVert;
template<> int dna::sdna_struct_id_get<ScrVert>() { return 768; }
struct ScrEdge;
template<> int dna::sdna_struct_id_get<ScrEdge>() { return 769; }
struct ScrAreaMap;
template<> int dna::sdna_struct_id_get<ScrAreaMap>() { return 770; }
struct LayoutPanelState;
template<> int dna::sdna_struct_id_get<LayoutPanelState>() { return 771; }
struct Panel;
template<> int dna::sdna_struct_id_get<Panel>() { return 772; }
struct PanelCategoryStack;
template<> int dna::sdna_struct_id_get<PanelCategoryStack>() { return 773; }
struct uiList;
template<> int dna::sdna_struct_id_get<uiList>() { return 774; }
struct uiViewState;
template<> int dna::sdna_struct_id_get<uiViewState>() { return 775; }
struct uiViewStateLink;
template<> int dna::sdna_struct_id_get<uiViewStateLink>() { return 776; }
struct TransformOrientation;
template<> int dna::sdna_struct_id_get<TransformOrientation>() { return 777; }
struct uiPreview;
template<> int dna::sdna_struct_id_get<uiPreview>() { return 778; }
struct TextboxState;
template<> int dna::sdna_struct_id_get<TextboxState>() { return 779; }
struct uiTextboxStateLink;
template<> int dna::sdna_struct_id_get<uiTextboxStateLink>() { return 780; }
struct ScrGlobalAreaData;
template<> int dna::sdna_struct_id_get<ScrGlobalAreaData>() { return 781; }
struct ScrArea_Runtime;
template<> int dna::sdna_struct_id_get<ScrArea_Runtime>() { return 782; }
struct ScrArea;
template<> int dna::sdna_struct_id_get<ScrArea>() { return 783; }
struct ARegion;
template<> int dna::sdna_struct_id_get<ARegion>() { return 784; }
struct AssetShelfSettings;
template<> int dna::sdna_struct_id_get<AssetShelfSettings>() { return 785; }
struct AssetShelf;
template<> int dna::sdna_struct_id_get<AssetShelf>() { return 786; }
struct RegionAssetShelf;
template<> int dna::sdna_struct_id_get<RegionAssetShelf>() { return 787; }
struct FileHandler;
template<> int dna::sdna_struct_id_get<FileHandler>() { return 788; }
struct StripElem;
template<> int dna::sdna_struct_id_get<StripElem>() { return 789; }
struct StripCrop;
template<> int dna::sdna_struct_id_get<StripCrop>() { return 790; }
struct StripTransform;
template<> int dna::sdna_struct_id_get<StripTransform>() { return 791; }
struct StripColorBalance;
template<> int dna::sdna_struct_id_get<StripColorBalance>() { return 792; }
struct StripProxy;
template<> int dna::sdna_struct_id_get<StripProxy>() { return 793; }
struct StripData;
template<> int dna::sdna_struct_id_get<StripData>() { return 794; }
struct SeqRetimingKey;
template<> int dna::sdna_struct_id_get<SeqRetimingKey>() { return 795; }
struct Strip;
template<> int dna::sdna_struct_id_get<Strip>() { return 796; }
struct MetaStack;
template<> int dna::sdna_struct_id_get<MetaStack>() { return 797; }
struct SeqTimelineChannel;
template<> int dna::sdna_struct_id_get<SeqTimelineChannel>() { return 798; }
struct StripConnection;
template<> int dna::sdna_struct_id_get<StripConnection>() { return 799; }
struct Editing;
template<> int dna::sdna_struct_id_get<Editing>() { return 800; }
struct WipeVars;
template<> int dna::sdna_struct_id_get<WipeVars>() { return 801; }
struct GlowVars;
template<> int dna::sdna_struct_id_get<GlowVars>() { return 802; }
struct TransformVarsLegacy;
template<> int dna::sdna_struct_id_get<TransformVarsLegacy>() { return 803; }
struct SolidColorVars;
template<> int dna::sdna_struct_id_get<SolidColorVars>() { return 804; }
struct SpeedControlVars;
template<> int dna::sdna_struct_id_get<SpeedControlVars>() { return 805; }
struct GaussianBlurVars;
template<> int dna::sdna_struct_id_get<GaussianBlurVars>() { return 806; }
struct TextVars;
template<> int dna::sdna_struct_id_get<TextVars>() { return 807; }
struct ColorMixVars;
template<> int dna::sdna_struct_id_get<ColorMixVars>() { return 808; }
struct CompositorEffectVars;
template<> int dna::sdna_struct_id_get<CompositorEffectVars>() { return 809; }
struct StripModifierData;
template<> int dna::sdna_struct_id_get<StripModifierData>() { return 810; }
struct ColorBalanceModifierData;
template<> int dna::sdna_struct_id_get<ColorBalanceModifierData>() { return 811; }
struct CurvesModifierData;
template<> int dna::sdna_struct_id_get<CurvesModifierData>() { return 812; }
struct HueCorrectModifierData;
template<> int dna::sdna_struct_id_get<HueCorrectModifierData>() { return 813; }
struct BrightContrastModifierData;
template<> int dna::sdna_struct_id_get<BrightContrastModifierData>() { return 814; }
struct SequencerMaskModifierData;
template<> int dna::sdna_struct_id_get<SequencerMaskModifierData>() { return 815; }
struct WhiteBalanceModifierData;
template<> int dna::sdna_struct_id_get<WhiteBalanceModifierData>() { return 816; }
struct SequencerTonemapModifierData;
template<> int dna::sdna_struct_id_get<SequencerTonemapModifierData>() { return 817; }
struct SequencerCompositorModifierData;
template<> int dna::sdna_struct_id_get<SequencerCompositorModifierData>() { return 818; }
struct EQCurveMappingData;
template<> int dna::sdna_struct_id_get<EQCurveMappingData>() { return 819; }
struct SoundEqualizerModifierData;
template<> int dna::sdna_struct_id_get<SoundEqualizerModifierData>() { return 820; }
struct PitchModifierData;
template<> int dna::sdna_struct_id_get<PitchModifierData>() { return 821; }
struct EchoModifierData;
template<> int dna::sdna_struct_id_get<EchoModifierData>() { return 822; }
struct SessionUID;
template<> int dna::sdna_struct_id_get<SessionUID>() { return 823; }
struct ShaderFxData;
template<> int dna::sdna_struct_id_get<ShaderFxData>() { return 824; }
struct ShaderFxData_Runtime;
template<> int dna::sdna_struct_id_get<ShaderFxData_Runtime>() { return 825; }
struct BlurShaderFxData;
template<> int dna::sdna_struct_id_get<BlurShaderFxData>() { return 826; }
struct ColorizeShaderFxData;
template<> int dna::sdna_struct_id_get<ColorizeShaderFxData>() { return 827; }
struct FlipShaderFxData;
template<> int dna::sdna_struct_id_get<FlipShaderFxData>() { return 828; }
struct GlowShaderFxData;
template<> int dna::sdna_struct_id_get<GlowShaderFxData>() { return 829; }
struct PixelShaderFxData;
template<> int dna::sdna_struct_id_get<PixelShaderFxData>() { return 830; }
struct RimShaderFxData;
template<> int dna::sdna_struct_id_get<RimShaderFxData>() { return 831; }
struct ShadowShaderFxData;
template<> int dna::sdna_struct_id_get<ShadowShaderFxData>() { return 832; }
struct SwirlShaderFxData;
template<> int dna::sdna_struct_id_get<SwirlShaderFxData>() { return 833; }
struct WaveShaderFxData;
template<> int dna::sdna_struct_id_get<WaveShaderFxData>() { return 834; }
struct bSound;
template<> int dna::sdna_struct_id_get<bSound>() { return 835; }
struct SpaceLink;
template<> int dna::sdna_struct_id_get<SpaceLink>() { return 836; }
struct SpaceInfo;
template<> int dna::sdna_struct_id_get<SpaceInfo>() { return 837; }
struct SpaceProperties;
template<> int dna::sdna_struct_id_get<SpaceProperties>() { return 838; }
struct SpaceOutliner;
template<> int dna::sdna_struct_id_get<SpaceOutliner>() { return 839; }
struct SpaceGraph_Runtime;
template<> int dna::sdna_struct_id_get<SpaceGraph_Runtime>() { return 840; }
struct SpaceGraph;
template<> int dna::sdna_struct_id_get<SpaceGraph>() { return 841; }
struct SpaceNla;
template<> int dna::sdna_struct_id_get<SpaceNla>() { return 842; }
struct SequencerPreviewOverlay;
template<> int dna::sdna_struct_id_get<SequencerPreviewOverlay>() { return 843; }
struct SequencerTimelineOverlay;
template<> int dna::sdna_struct_id_get<SequencerTimelineOverlay>() { return 844; }
struct SequencerCacheOverlay;
template<> int dna::sdna_struct_id_get<SequencerCacheOverlay>() { return 845; }
struct SpaceSeq;
template<> int dna::sdna_struct_id_get<SpaceSeq>() { return 846; }
struct MaskSpaceInfo;
template<> int dna::sdna_struct_id_get<MaskSpaceInfo>() { return 847; }
struct FileSelectParams;
template<> int dna::sdna_struct_id_get<FileSelectParams>() { return 848; }
struct FileAssetSelectParams;
template<> int dna::sdna_struct_id_get<FileAssetSelectParams>() { return 849; }
struct FileFolderHistory;
template<> int dna::sdna_struct_id_get<FileFolderHistory>() { return 850; }
struct SpaceFile;
template<> int dna::sdna_struct_id_get<SpaceFile>() { return 851; }
struct SpaceImageOverlay;
template<> int dna::sdna_struct_id_get<SpaceImageOverlay>() { return 852; }
struct SpaceImage;
template<> int dna::sdna_struct_id_get<SpaceImage>() { return 853; }
struct SpaceText;
template<> int dna::sdna_struct_id_get<SpaceText>() { return 854; }
struct Script;
template<> int dna::sdna_struct_id_get<Script>() { return 855; }
struct SpaceScript;
template<> int dna::sdna_struct_id_get<SpaceScript>() { return 856; }
struct bNodeTreePath;
template<> int dna::sdna_struct_id_get<bNodeTreePath>() { return 857; }
struct SpaceNodeOverlay;
template<> int dna::sdna_struct_id_get<SpaceNodeOverlay>() { return 858; }
struct SpaceNode;
template<> int dna::sdna_struct_id_get<SpaceNode>() { return 859; }
struct ConsoleLine;
template<> int dna::sdna_struct_id_get<ConsoleLine>() { return 860; }
struct SpaceConsole;
template<> int dna::sdna_struct_id_get<SpaceConsole>() { return 861; }
struct SpaceUserPref;
template<> int dna::sdna_struct_id_get<SpaceUserPref>() { return 862; }
struct SpaceClipOverlay;
template<> int dna::sdna_struct_id_get<SpaceClipOverlay>() { return 863; }
struct SpaceClip;
template<> int dna::sdna_struct_id_get<SpaceClip>() { return 864; }
struct SpaceTopBar;
template<> int dna::sdna_struct_id_get<SpaceTopBar>() { return 865; }
struct SpaceStatusBar;
template<> int dna::sdna_struct_id_get<SpaceStatusBar>() { return 866; }
struct SpreadsheetColumnID;
template<> int dna::sdna_struct_id_get<SpreadsheetColumnID>() { return 867; }
struct SpreadsheetColumn;
template<> int dna::sdna_struct_id_get<SpreadsheetColumn>() { return 868; }
struct SpreadsheetInstanceID;
template<> int dna::sdna_struct_id_get<SpreadsheetInstanceID>() { return 869; }
struct SpreadsheetTableID;
template<> int dna::sdna_struct_id_get<SpreadsheetTableID>() { return 870; }
struct SpreadsheetBundlePathElem;
template<> int dna::sdna_struct_id_get<SpreadsheetBundlePathElem>() { return 871; }
struct SpreadsheetBundleTreeViewPath;
template<> int dna::sdna_struct_id_get<SpreadsheetBundleTreeViewPath>() { return 872; }
struct SpreadsheetTableIDGeometry;
template<> int dna::sdna_struct_id_get<SpreadsheetTableIDGeometry>() { return 873; }
struct SpreadsheetTable;
template<> int dna::sdna_struct_id_get<SpreadsheetTable>() { return 874; }
struct SpaceSpreadsheet;
template<> int dna::sdna_struct_id_get<SpaceSpreadsheet>() { return 875; }
struct SpreadsheetRowFilter;
template<> int dna::sdna_struct_id_get<SpreadsheetRowFilter>() { return 876; }
struct SpaceProject;
template<> int dna::sdna_struct_id_get<SpaceProject>() { return 877; }
struct Speaker;
template<> int dna::sdna_struct_id_get<Speaker>() { return 878; }
struct TextLine;
template<> int dna::sdna_struct_id_get<TextLine>() { return 879; }
struct Text;
template<> int dna::sdna_struct_id_get<Text>() { return 880; }
struct MTex;
template<> int dna::sdna_struct_id_get<MTex>() { return 881; }
struct Tex_Runtime;
template<> int dna::sdna_struct_id_get<Tex_Runtime>() { return 882; }
struct Tex;
template<> int dna::sdna_struct_id_get<Tex>() { return 883; }
struct TexMapping;
template<> int dna::sdna_struct_id_get<TexMapping>() { return 884; }
struct ColorMapping;
template<> int dna::sdna_struct_id_get<ColorMapping>() { return 885; }
struct uiFontStyle;
template<> int dna::sdna_struct_id_get<uiFontStyle>() { return 886; }
struct uiStyle;
template<> int dna::sdna_struct_id_get<uiStyle>() { return 887; }
struct ThemeRegionsAssetShelf;
template<> int dna::sdna_struct_id_get<ThemeRegionsAssetShelf>() { return 888; }
struct ThemeRegionsChannels;
template<> int dna::sdna_struct_id_get<ThemeRegionsChannels>() { return 889; }
struct ThemeRegionsScrubbing;
template<> int dna::sdna_struct_id_get<ThemeRegionsScrubbing>() { return 890; }
struct ThemeRegionsSidebars;
template<> int dna::sdna_struct_id_get<ThemeRegionsSidebars>() { return 891; }
struct ThemeRegions;
template<> int dna::sdna_struct_id_get<ThemeRegions>() { return 892; }
struct ThemeCommonAnim;
template<> int dna::sdna_struct_id_get<ThemeCommonAnim>() { return 893; }
struct ThemeCommonCurves;
template<> int dna::sdna_struct_id_get<ThemeCommonCurves>() { return 894; }
struct ThemeCommon;
template<> int dna::sdna_struct_id_get<ThemeCommon>() { return 895; }
struct uiWidgetColors;
template<> int dna::sdna_struct_id_get<uiWidgetColors>() { return 896; }
struct uiWidgetStateColors;
template<> int dna::sdna_struct_id_get<uiWidgetStateColors>() { return 897; }
struct ThemeUI;
template<> int dna::sdna_struct_id_get<ThemeUI>() { return 898; }
struct ThemeSpace;
template<> int dna::sdna_struct_id_get<ThemeSpace>() { return 899; }
struct ThemeWireColor;
template<> int dna::sdna_struct_id_get<ThemeWireColor>() { return 900; }
struct ThemeCollectionColor;
template<> int dna::sdna_struct_id_get<ThemeCollectionColor>() { return 901; }
struct ThemeStripColor;
template<> int dna::sdna_struct_id_get<ThemeStripColor>() { return 902; }
struct bTheme;
template<> int dna::sdna_struct_id_get<bTheme>() { return 903; }
struct MovieReconstructedCamera;
template<> int dna::sdna_struct_id_get<MovieReconstructedCamera>() { return 904; }
struct MovieTrackingCamera;
template<> int dna::sdna_struct_id_get<MovieTrackingCamera>() { return 905; }
struct MovieTrackingMarker;
template<> int dna::sdna_struct_id_get<MovieTrackingMarker>() { return 906; }
struct MovieTrackingTrack;
template<> int dna::sdna_struct_id_get<MovieTrackingTrack>() { return 907; }
struct MovieTrackingPlaneMarker;
template<> int dna::sdna_struct_id_get<MovieTrackingPlaneMarker>() { return 908; }
struct MovieTrackingPlaneTrack;
template<> int dna::sdna_struct_id_get<MovieTrackingPlaneTrack>() { return 909; }
struct MovieTrackingSettings;
template<> int dna::sdna_struct_id_get<MovieTrackingSettings>() { return 910; }
struct MovieTrackingStabilization;
template<> int dna::sdna_struct_id_get<MovieTrackingStabilization>() { return 911; }
struct MovieTrackingReconstruction;
template<> int dna::sdna_struct_id_get<MovieTrackingReconstruction>() { return 912; }
struct MovieTrackingObject;
template<> int dna::sdna_struct_id_get<MovieTrackingObject>() { return 913; }
struct MovieTrackingStats;
template<> int dna::sdna_struct_id_get<MovieTrackingStats>() { return 914; }
struct MovieTrackingDopesheetChannel;
template<> int dna::sdna_struct_id_get<MovieTrackingDopesheetChannel>() { return 915; }
struct MovieTrackingDopesheetCoverageSegment;
template<> int dna::sdna_struct_id_get<MovieTrackingDopesheetCoverageSegment>() { return 916; }
struct MovieTrackingDopesheet;
template<> int dna::sdna_struct_id_get<MovieTrackingDopesheet>() { return 917; }
struct MovieTracking;
template<> int dna::sdna_struct_id_get<MovieTracking>() { return 918; }
struct bAddon;
template<> int dna::sdna_struct_id_get<bAddon>() { return 919; }
struct bPathCompare;
template<> int dna::sdna_struct_id_get<bPathCompare>() { return 920; }
struct bUserMenu;
template<> int dna::sdna_struct_id_get<bUserMenu>() { return 921; }
struct bUserMenuItem;
template<> int dna::sdna_struct_id_get<bUserMenuItem>() { return 922; }
struct bUserMenuItem_Op;
template<> int dna::sdna_struct_id_get<bUserMenuItem_Op>() { return 923; }
struct bUserMenuItem_Menu;
template<> int dna::sdna_struct_id_get<bUserMenuItem_Menu>() { return 924; }
struct bUserMenuItem_Prop;
template<> int dna::sdna_struct_id_get<bUserMenuItem_Prop>() { return 925; }
struct bUserAssetLibrary;
template<> int dna::sdna_struct_id_get<bUserAssetLibrary>() { return 926; }
struct bUserExtensionRepo;
template<> int dna::sdna_struct_id_get<bUserExtensionRepo>() { return 927; }
struct SolidLight;
template<> int dna::sdna_struct_id_get<SolidLight>() { return 928; }
struct WalkNavigation;
template<> int dna::sdna_struct_id_get<WalkNavigation>() { return 929; }
struct XrNavigation;
template<> int dna::sdna_struct_id_get<XrNavigation>() { return 930; }
struct UserDef_Runtime;
template<> int dna::sdna_struct_id_get<UserDef_Runtime>() { return 931; }
struct UserDef_SpaceData;
template<> int dna::sdna_struct_id_get<UserDef_SpaceData>() { return 932; }
struct UserDef_FileSpaceData;
template<> int dna::sdna_struct_id_get<UserDef_FileSpaceData>() { return 933; }
struct UserDef_TempWinBounds;
template<> int dna::sdna_struct_id_get<UserDef_TempWinBounds>() { return 934; }
struct UserDef_Experimental;
template<> int dna::sdna_struct_id_get<UserDef_Experimental>() { return 935; }
struct bUserScriptDirectory;
template<> int dna::sdna_struct_id_get<bUserScriptDirectory>() { return 936; }
struct bUserAssetShelfSettings;
template<> int dna::sdna_struct_id_get<bUserAssetShelfSettings>() { return 937; }
struct UserDef;
template<> int dna::sdna_struct_id_get<UserDef>() { return 938; }
struct bUUID;
template<> int dna::sdna_struct_id_get<bUUID>() { return 939; }
struct vec2s;
template<> int dna::sdna_struct_id_get<vec2s>() { return 940; }
struct vec2f;
template<> int dna::sdna_struct_id_get<vec2f>() { return 941; }
struct vec2i;
template<> int dna::sdna_struct_id_get<vec2i>() { return 942; }
struct vec3i;
template<> int dna::sdna_struct_id_get<vec3i>() { return 943; }
struct vec3f;
template<> int dna::sdna_struct_id_get<vec3f>() { return 944; }
struct vec4f;
template<> int dna::sdna_struct_id_get<vec4f>() { return 945; }
struct mat4x4f;
template<> int dna::sdna_struct_id_get<mat4x4f>() { return 946; }
struct rcti;
template<> int dna::sdna_struct_id_get<rcti>() { return 947; }
struct rctf;
template<> int dna::sdna_struct_id_get<rctf>() { return 948; }
struct DualQuat;
template<> int dna::sdna_struct_id_get<DualQuat>() { return 949; }
struct VFont;
template<> int dna::sdna_struct_id_get<VFont>() { return 950; }
struct View2D;
template<> int dna::sdna_struct_id_get<View2D>() { return 951; }
struct RegionView3D;
template<> int dna::sdna_struct_id_get<RegionView3D>() { return 952; }
struct View3DCursor;
template<> int dna::sdna_struct_id_get<View3DCursor>() { return 953; }
struct View3DShading;
template<> int dna::sdna_struct_id_get<View3DShading>() { return 954; }
struct View3DOverlay;
template<> int dna::sdna_struct_id_get<View3DOverlay>() { return 955; }
struct View3D_Runtime;
template<> int dna::sdna_struct_id_get<View3D_Runtime>() { return 956; }
struct View3D;
template<> int dna::sdna_struct_id_get<View3D>() { return 957; }
struct ViewerPathElem;
template<> int dna::sdna_struct_id_get<ViewerPathElem>() { return 958; }
struct IDViewerPathElem;
template<> int dna::sdna_struct_id_get<IDViewerPathElem>() { return 959; }
struct ModifierViewerPathElem;
template<> int dna::sdna_struct_id_get<ModifierViewerPathElem>() { return 960; }
struct GroupNodeViewerPathElem;
template<> int dna::sdna_struct_id_get<GroupNodeViewerPathElem>() { return 961; }
struct SimulationZoneViewerPathElem;
template<> int dna::sdna_struct_id_get<SimulationZoneViewerPathElem>() { return 962; }
struct RepeatZoneViewerPathElem;
template<> int dna::sdna_struct_id_get<RepeatZoneViewerPathElem>() { return 963; }
struct ForeachGeometryElementZoneViewerPathElem;
template<> int dna::sdna_struct_id_get<ForeachGeometryElementZoneViewerPathElem>() { return 964; }
struct ViewerNodeViewerPathElem;
template<> int dna::sdna_struct_id_get<ViewerNodeViewerPathElem>() { return 965; }
struct EvaluateClosureNodeViewerPathElem;
template<> int dna::sdna_struct_id_get<EvaluateClosureNodeViewerPathElem>() { return 966; }
struct ViewerPath;
template<> int dna::sdna_struct_id_get<ViewerPath>() { return 967; }
struct VolumeDisplay;
template<> int dna::sdna_struct_id_get<VolumeDisplay>() { return 968; }
struct VolumeRender;
template<> int dna::sdna_struct_id_get<VolumeRender>() { return 969; }
struct Volume;
template<> int dna::sdna_struct_id_get<Volume>() { return 970; }
struct wmXrData;
template<> int dna::sdna_struct_id_get<wmXrData>() { return 971; }
struct wmWindowManager;
template<> int dna::sdna_struct_id_get<wmWindowManager>() { return 972; }
struct wmWindow;
template<> int dna::sdna_struct_id_get<wmWindow>() { return 973; }
struct wmKeyMapItem;
template<> int dna::sdna_struct_id_get<wmKeyMapItem>() { return 974; }
struct wmKeyMapDiffItem;
template<> int dna::sdna_struct_id_get<wmKeyMapDiffItem>() { return 975; }
struct wmKeyMap;
template<> int dna::sdna_struct_id_get<wmKeyMap>() { return 976; }
struct wmKeyConfigPref;
template<> int dna::sdna_struct_id_get<wmKeyConfigPref>() { return 977; }
struct wmKeyConfig;
template<> int dna::sdna_struct_id_get<wmKeyConfig>() { return 978; }
struct wmOperator;
template<> int dna::sdna_struct_id_get<wmOperator>() { return 979; }
struct bToolRef;
template<> int dna::sdna_struct_id_get<bToolRef>() { return 980; }
struct WorkSpaceLayout;
template<> int dna::sdna_struct_id_get<WorkSpaceLayout>() { return 981; }
struct wmOwnerID;
template<> int dna::sdna_struct_id_get<wmOwnerID>() { return 982; }
struct WorkSpace;
template<> int dna::sdna_struct_id_get<WorkSpace>() { return 983; }
struct WorkSpaceDataRelation;
template<> int dna::sdna_struct_id_get<WorkSpaceDataRelation>() { return 984; }
struct WorkSpaceInstanceHook;
template<> int dna::sdna_struct_id_get<WorkSpaceInstanceHook>() { return 985; }
struct World;
template<> int dna::sdna_struct_id_get<World>() { return 986; }
struct XrSessionSettings;
template<> int dna::sdna_struct_id_get<XrSessionSettings>() { return 987; }
struct XrComponentPath;
template<> int dna::sdna_struct_id_get<XrComponentPath>() { return 988; }
struct XrActionMapBinding;
template<> int dna::sdna_struct_id_get<XrActionMapBinding>() { return 989; }
struct XrUserPath;
template<> int dna::sdna_struct_id_get<XrUserPath>() { return 990; }
struct XrActionMapItem;
template<> int dna::sdna_struct_id_get<XrActionMapItem>() { return 991; }
struct XrActionMap;
template<> int dna::sdna_struct_id_get<XrActionMap>() { return 992; }

}
