#include "ecu_registry.h"
#include "ecu_bridge.h"
#include "Aerodynamics/Active Aero Lamborghini-style/ALA.h"
#include "Aerodynamics/Active Aerodynamics Porsche-style/PAA.h"
#include "Suspension/Active Anti-Roll/AAR.h"
#include "Suspension/Active Body Control/ABC.h"
#include "Aero_Platform/Active Bounce Suppression/ABS3.h"
#include "Aerodynamics/Active Brake Duct Control/ABD.h"
#include "Suspension/Active Camber Control/ACT.h"
#include "Aerodynamics/Active Diffuser Geometry/ADG.h"
#include "Suspension/Active Dive Suppression/ADS2.h"
#include "Aero_Platform/Active Downforce Split FR/ADS4.h"
#include "Aerodynamics/Active Drag Shaping/ADS3.h"
#include "Aero_Platform/Active Floor Clearance Control/AFC.h"
#include "Aerodynamics/Active Floor Throat Control/AFT.h"
#include "Drivetrain/Active Front Differential/AFD.h"
#include "Aerodynamics/Active Front Splitter Control/AFS2.h"
#include "Aerodynamics/Active Front Wing Angle/AFS.h"
#include "Engine/Active Fuel Map Auto Select/AFM.h"
#include "Suspension/Active Hydraulic Suspension/AHS.h"
#include "Engine/Active Intake Manifold/AIM.h"
#include "Suspension/Active Interconnected Suspension/AIS.h"
#include "Suspension/Active Kinetic Suspension/AKS.h"
#include "Aero_Platform/Active Pitch Correction/APC2.h"
#include "Suspension/Active Pneumatic Suspension/APS.h"
#include "Drivetrain/Active Rear Differential Full Auto/ARD.h"
#include "Aerodynamics/Active Rear Spoiler/ARS.h"
#include "Steering/Active Rear Steering/ARS3.h"
#include "Aero_Platform/Active Ride Height Front/ARH.h"
#include "Aero_Platform/Active Ride Height Rear/ARH2.h"
#include "Suspension/Active Roll Control/ARC.h"
#include "Suspension/Active Spring Stiffness Control/ASS.h"
#include "Suspension/Active Toe Control/ATC.h"
#include "Aerodynamics/Active Underbody Sealing/AUS.h"
#include "Engine/Active Valve Timing Full Control/AVT.h"
#include "Steering/Active Variable Steering Ratio/AVR.h"
#include "Suspension/Active Vehicle Squat Control/AVS.h"
#include "Aerodynamics/Active Wing Flap non-DRS/AWF.h"
#include "Stability/Active Yaw Control/AYC.h"
#include "Diagnostics/Actuator Fallback Logic/AFL.h"
#include "Suspension/Adaptive Damping System/ADS.h"
#include "Aero_Platform/Aero Balance Control/ABA.h"
#include "State_Estimation/Aero Load Estimation/ALE.h"
#include "Steering/All-Wheel Steering/AWS.h"
#include "Gearbox/Anti-Stall/AST.h"
#include "Braking/Anti-lock Braking System/ABS.h"
#include "Hybrid/Auto Kinetic Recovery/AKR.h"
#include "Braking/Automatic Brake Force Assist/ABF.h"
#include "Braking/Automatic Brake Pressure Modulation/ABP.h"
#include "Braking/Automatic Brake Regen Blend/ABR.h"
#include "Gearbox/Automatic Gear Protection/AGP.h"
#include "Gearbox/Automatic Gear Selection/AGS.h"
#include "Gearbox/Automatic Gear Shift Strategy/AGS2.h"
#include "Hybrid/Automatic Hybrid Boost Driver Aid/AHB.h"
#include "Drivetrain/Automatic Overtake Mode/OVR.h"
#include "Hybrid/Automatic Power Recovery/APR.h"
#include "Hybrid/Automatic Regen Switching/ARS2.h"
#include "Drivetrain/Automatic Rev-Matching/ARM.h"
#include "Thermal/Battery Thermal Management/BTM.h"
#include "Braking/Brake Migration Shaping/BMS.h"
#include "Braking/Brake Pedal Travel Mapping/BPM.h"
#include "Braking/Brake Steer Differential Braking/BSD.h"
#include "Thermal/Brake Temperature Management/BKT.h"
#include "Braking/Brake-by-Wire/BBW.h"
#include "Braking/Brake-to-Limit Device Pit Lane/BLD.h"
#include "Gearbox/Clutch Bite-Point Control/CBP.h"
#include "Engine/Compressor Surge Avoidance/CSA.h"
#include "Gearbox/Continuously Variable Transmission/CVT.h"
#include "Braking/Cornering Brake Control/CBC.h"
#include "Hybrid/Deployment Strategy Control/DVS.h"
#include "Drivetrain/Differential Map Control/DFM.h"
#include "Aerodynamics/Double Diffuser System/DDS.h"
#include "Gearbox/Downshift Protection/DSP.h"
#include "Aerodynamics/Drag Reduction System/DRS.h"
#include "Drivetrain/Drivetrain Torque Control Auto/DTC.h"
#include "Steering/Dual Axis Steering/DAS.h"
#include "Gearbox/Dual Clutch Transmission/DCT.h"
#include "Braking/Dynamic Brake Control/DBC.h"
#include "Stability/Dynamic Stability Control/DSC.h"
#include "Stability/Dynamic Yaw Control/DYC.h"
#include "Diagnostics/ERS Isolation Safety/EIS.h"
#include "Hybrid/Electric Torque Fill Auto/ETC2.h"
#include "Braking/Electronic Brakeforce Distribution/EBD.h"
#include "Traction/Electronic Differential Lock/EDL.h"
#include "Steering/Electronic Power Steering Auto/EPS.h"
#include "Stability/Electronic Stability Control/ESC.h"
#include "Engine/Electronic Throttle Control/ETC.h"
#include "Drivetrain/Electronic Torque Split/ETS.h"
#include "Braking/Emergency Brake Assist/EBA.h"
#include "Hybrid/Energy Recovery Braking/ERB.h"
#include "Drivetrain/Engine Brake Map/EBM.h"
#include "Thermal/Engine Coolant Thermal Mgmt/ECT.h"
#include "Drivetrain/Entry Diff Map/EDM.h"
#include "Aerodynamics/Exhaust Blown Diffuser/EBD2.h"
#include "Engine/Exhaust Gas Recirculation Active/EGR.h"
#include "Drivetrain/Exit Diff Map/XDM.h"
#include "Aerodynamics/F-Duct Driver-Operated Aero/FDW.h"
#include "Aerodynamics/Fan Car Suction System/FCS.h"
#include "Diagnostics/Fault Detection/FDT.h"
#include "Aero_Platform/Floor Stall Avoidance/FSA.h"
#include "Suspension/Front-Rear Interconnected Suspension/FRIC.h"
#include "Engine/Fuel Flow Limit Optimizer/FFL.h"
#include "Engine/Fuel Injection Control/FIC.h"
#include "Thermal/Gearbox Hydraulic Thermal/GBT.h"
#include "Aerodynamics/Ground Effect Active Sealing/GAS.h"
#include "Aerodynamics/Ground Effect Sliding Skirts/GES.h"
#include "Hybrid/Harvest Strategy Control/HVS.h"
#include "Aero_Platform/Heave Control/HVC.h"
#include "Engine/Homogeneous Charge Compression/HCR.h"
#include "Braking/Hydraulic Brake Assist/HBA.h"
#include "Suspension/Hydraulic Interconnected Suspension/HIS.h"
#include "Engine/Ignition Timing Control/ITC.h"
#include "State_Estimation/Inertial Measurement Unit Fusion/IMU.h"
#include "Thermal/Intercooler Charge Air Thermal/ICT.h"
#include "Engine/Knock Combustion Control/KNC.h"
#include "Hybrid/Lap Energy Optimization/LEO.h"
#include "Drivetrain/Launch Control/LC.h"
#include "Traction/Limited Slip Control Electronic/LSC.h"
#include "Diagnostics/Limp Mode Fallback Logic/LMP.h"
#include "Diagnostics/Live Telemetry System/TLM.h"
#include "Thermal/MGU Temperature Control/MGT.h"
#include "Hybrid/MGU-H Control/MGH.h"
#include "Hybrid/MGU-K Torque Blend Control/MGK.h"
#include "Suspension/Magnetorheological Suspension/MRS.h"
#include "Suspension/Mass Damper Tuned Mass/MDR.h"
#include "Drivetrain/Mid-Corner Diff Map/MDM.h"
#include "Aerodynamics/Off-Throttle Blown Diffuser/OWG.h"
#include "Thermal/Oil Thermal Management/OTM.h"
#include "Diagnostics/Onboard Data Logging/DLG.h"
#include "Gearbox/Optimal Gear Selection Auto/OGS.h"
#include "Stability/Oversteer Control Auto/OVC.h"
#include "Drivetrain/Pit Lane Speed Limiter/PLS.h"
#include "Aero_Platform/Pitch Control/PTC.h"
#include "Aero_Platform/Porpoising Suppression/PPS.h"
#include "Engine/Pre-Chamber Ignition Control/APC.h"
#include "Braking/Rear Brake Torque with Regen/RBT.h"
#include "Diagnostics/Redundancy Handling/RDH.h"
#include "Hybrid/Regenerative Brake Assist Auto/RBA.h"
#include "Hybrid/Regenerative Cornering Strategy Auto/RCS.h"
#include "Aero_Platform/Ride Height Control/RHC.h"
#include "State_Estimation/Ride Height Estimation/RHE.h"
#include "Aero_Platform/Roll Control/RLC.h"
#include "Diagnostics/Safety Shutdown Logic/SDL.h"
#include "Suspension/Self-Levelling Hydraulic Suspension/SHS.h"
#include "Diagnostics/Sensor Plausibility Checking/SPL.h"
#include "Gearbox/Shift Cut Control/SCC.h"
#include "State_Estimation/Sideslip Angle Estimation/SSE.h"
#include "Tyres/Slip Angle Target Control/SLA.h"
#include "Tyres/Slip Ratio Target Control/SLR.h"
#include "Hybrid/State of Charge Management/SOC.h"
#include "Steering/Steer-by-Wire/SBW.h"
#include "Tyres/Tire Carcass Temperature Model/TCT.h"
#include "Tyres/Tire Degradation Estimate/TDE.h"
#include "State_Estimation/Tire Friction Estimation/TFE.h"
#include "Tyres/Tire Grip Coefficient Estimate/TGE.h"
#include "Tyres/Tire State Estimation/TSE.h"
#include "Tyres/Tire Surface Temperature Model/TST.h"
#include "Engine/Torque Shaping/TQS.h"
#include "Traction/Torque Vectoring Full Auto/TQV.h"
#include "Stability/Torque Vectoring by Brakes/TVB.h"
#include "Drivetrain/Torque Vectoring by Electric Motor/TVE.h"
#include "Traction/Traction Control System/TCS.h"
#include "Engine/Turbo Wastegate Control/TWC.h"
#include "Tyres/Tyre Pressure Monitoring/TPM.h"
#include "Thermal/Tyre Temperature Management/TYT.h"
#include "Stability/Understeer Control Auto/USC.h"
#include "Gearbox/Upshift Torque Recovery/UTR.h"
#include "Engine/Variable Compression Ratio/VCR.h"
#include "Aerodynamics/Variable Downforce System/VDS.h"
#include "Aerodynamics/Variable Geometry Tunnels/VGT2.h"
#include "Engine/Variable Intake Geometry/VIG.h"
#include "Engine/Variable Turbine Geometry/VTG.h"
#include "Engine/Variable Valve Lift/VVL.h"
#include "Engine/Variable Valve Timing/VVT.h"
#include "Master/Vehicle Dynamics Controller/VDC.h"
#include "State_Estimation/Vehicle Speed Estimation/VSE.h"
#include "Stability/Vehicle Stability Control/VSC.h"
#include "State_Estimation/Wheel Load Estimation/WLE.h"
#include "Traction/Wheel Spin Detection Auto Correction/WSD.h"
#include "State_Estimation/Yaw Moment Demand/YMD.h"
#include "Stability/Yaw Rate Control/YRC.h"

void ecu_registry_init_all(void) {
    ALA_init(&ALA_default_config);
    PAA_init(&PAA_default_config);
    AAR_init(&AAR_default_config);
    ABC_init(&ABC_default_config);
    ABS3_init(&ABS3_default_config);
    ABD_init(&ABD_default_config);
    ACT_init(&ACT_default_config);
    ADG_init(&ADG_default_config);
    ADS2_init(&ADS2_default_config);
    ADS4_init(&ADS4_default_config);
    ADS3_init(&ADS3_default_config);
    AFC_init(&AFC_default_config);
    AFT_init(&AFT_default_config);
    AFD_init(&AFD_default_config);
    AFS2_init(&AFS2_default_config);
    AFS_init(&AFS_default_config);
    AFM_init(&AFM_default_config);
    AHS_init(&AHS_default_config);
    AIM_init(&AIM_default_config);
    AIS_init(&AIS_default_config);
    AKS_init(&AKS_default_config);
    APC2_init(&APC2_default_config);
    APS_init(&APS_default_config);
    ARD_init(&ARD_default_config);
    ARS_init(&ARS_default_config);
    ARS3_init(&ARS3_default_config);
    ARH_init(&ARH_default_config);
    ARH2_init(&ARH2_default_config);
    ARC_init(&ARC_default_config);
    ASS_init(&ASS_default_config);
    ATC_init(&ATC_default_config);
    AUS_init(&AUS_default_config);
    AVT_init(&AVT_default_config);
    AVR_init(&AVR_default_config);
    AVS_init(&AVS_default_config);
    AWF_init(&AWF_default_config);
    AYC_init(&AYC_default_config);
    AFL_init(&AFL_default_config);
    ADS_init(&ADS_default_config);
    ABA_init(&ABA_default_config);
    ALE_init(&ALE_default_config);
    AWS_init(&AWS_default_config);
    AST_init(&AST_default_config);
    ABS_init(&ABS_default_config);
    AKR_init(&AKR_default_config);
    ABF_init(&ABF_default_config);
    ABP_init(&ABP_default_config);
    ABR_init(&ABR_default_config);
    AGP_init(&AGP_default_config);
    AGS_init(&AGS_default_config);
    AGS2_init(&AGS2_default_config);
    AHB_init(&AHB_default_config);
    OVR_init(&OVR_default_config);
    APR_init(&APR_default_config);
    ARS2_init(&ARS2_default_config);
    ARM_init(&ARM_default_config);
    BTM_init(&BTM_default_config);
    BMS_init(&BMS_default_config);
    BPM_init(&BPM_default_config);
    BSD_init(&BSD_default_config);
    BKT_init(&BKT_default_config);
    BBW_init(&BBW_default_config);
    BLD_init(&BLD_default_config);
    CBP_init(&CBP_default_config);
    CSA_init(&CSA_default_config);
    CVT_init(&CVT_default_config);
    CBC_init(&CBC_default_config);
    DVS_init(&DVS_default_config);
    DFM_init(&DFM_default_config);
    DDS_init(&DDS_default_config);
    DSP_init(&DSP_default_config);
    DRS_init(&DRS_default_config);
    DTC_init(&DTC_default_config);
    DAS_init(&DAS_default_config);
    DCT_init(&DCT_default_config);
    DBC_init(&DBC_default_config);
    DSC_init(&DSC_default_config);
    DYC_init(&DYC_default_config);
    EIS_init(&EIS_default_config);
    ETC2_init(&ETC2_default_config);
    EBD_init(&EBD_default_config);
    EDL_init(&EDL_default_config);
    EPS_init(&EPS_default_config);
    ESC_init(&ESC_default_config);
    ETC_init(&ETC_default_config);
    ETS_init(&ETS_default_config);
    EBA_init(&EBA_default_config);
    ERB_init(&ERB_default_config);
    EBM_init(&EBM_default_config);
    ECT_init(&ECT_default_config);
    EDM_init(&EDM_default_config);
    EBD2_init(&EBD2_default_config);
    EGR_init(&EGR_default_config);
    XDM_init(&XDM_default_config);
    FDW_init(&FDW_default_config);
    FCS_init(&FCS_default_config);
    FDT_init(&FDT_default_config);
    FSA_init(&FSA_default_config);
    FRIC_init(&FRIC_default_config);
    FFL_init(&FFL_default_config);
    FIC_init(&FIC_default_config);
    GBT_init(&GBT_default_config);
    GAS_init(&GAS_default_config);
    GES_init(&GES_default_config);
    HVS_init(&HVS_default_config);
    HVC_init(&HVC_default_config);
    HCR_init(&HCR_default_config);
    HBA_init(&HBA_default_config);
    HIS_init(&HIS_default_config);
    ITC_init(&ITC_default_config);
    IMU_init(&IMU_default_config);
    ICT_init(&ICT_default_config);
    KNC_init(&KNC_default_config);
    LEO_init(&LEO_default_config);
    LC_init(&LC_default_config);
    LSC_init(&LSC_default_config);
    LMP_init(&LMP_default_config);
    TLM_init(&TLM_default_config);
    MGT_init(&MGT_default_config);
    MGH_init(&MGH_default_config);
    MGK_init(&MGK_default_config);
    MRS_init(&MRS_default_config);
    MDR_init(&MDR_default_config);
    MDM_init(&MDM_default_config);
    OWG_init(&OWG_default_config);
    OTM_init(&OTM_default_config);
    DLG_init(&DLG_default_config);
    OGS_init(&OGS_default_config);
    OVC_init(&OVC_default_config);
    PLS_init(&PLS_default_config);
    PTC_init(&PTC_default_config);
    PPS_init(&PPS_default_config);
    APC_init(&APC_default_config);
    RBT_init(&RBT_default_config);
    RDH_init(&RDH_default_config);
    RBA_init(&RBA_default_config);
    RCS_init(&RCS_default_config);
    RHC_init(&RHC_default_config);
    RHE_init(&RHE_default_config);
    RLC_init(&RLC_default_config);
    SDL_init(&SDL_default_config);
    SHS_init(&SHS_default_config);
    SPL_init(&SPL_default_config);
    SCC_init(&SCC_default_config);
    SSE_init(&SSE_default_config);
    SLA_init(&SLA_default_config);
    SLR_init(&SLR_default_config);
    SOC_init(&SOC_default_config);
    SBW_init(&SBW_default_config);
    TCT_init(&TCT_default_config);
    TDE_init(&TDE_default_config);
    TFE_init(&TFE_default_config);
    TGE_init(&TGE_default_config);
    TSE_init(&TSE_default_config);
    TST_init(&TST_default_config);
    TQS_init(&TQS_default_config);
    TQV_init(&TQV_default_config);
    TVB_init(&TVB_default_config);
    TVE_init(&TVE_default_config);
    TCS_init(&TCS_default_config);
    TWC_init(&TWC_default_config);
    TPM_init(&TPM_default_config);
    TYT_init(&TYT_default_config);
    USC_init(&USC_default_config);
    UTR_init(&UTR_default_config);
    VCR_init(&VCR_default_config);
    VDS_init(&VDS_default_config);
    VGT2_init(&VGT2_default_config);
    VIG_init(&VIG_default_config);
    VTG_init(&VTG_default_config);
    VVL_init(&VVL_default_config);
    VVT_init(&VVT_default_config);
    VDC_init(&VDC_default_config);
    VSE_init(&VSE_default_config);
    VSC_init(&VSC_default_config);
    WLE_init(&WLE_default_config);
    WSD_init(&WSD_default_config);
    YMD_init(&YMD_default_config);
    YRC_init(&YRC_default_config);
}

void ecu_registry_update_all(float dt_ms, const VehicleState* vs, ActuatorCommands* out) {
    const ECU_BridgeState* bridge = ecu_bridge_get_state_readonly();
    (void)vs;
    ALA_integration_update(dt_ms, bridge, out);
    PAA_integration_update(dt_ms, bridge, out);
    AAR_integration_update(dt_ms, bridge, out);
    ABC_integration_update(dt_ms, bridge, out);
    ABS3_integration_update(dt_ms, bridge, out);
    ABD_integration_update(dt_ms, bridge, out);
    ACT_integration_update(dt_ms, bridge, out);
    ADG_integration_update(dt_ms, bridge, out);
    ADS2_integration_update(dt_ms, bridge, out);
    ADS4_integration_update(dt_ms, bridge, out);
    ADS3_integration_update(dt_ms, bridge, out);
    AFC_integration_update(dt_ms, bridge, out);
    AFT_integration_update(dt_ms, bridge, out);
    AFD_integration_update(dt_ms, bridge, out);
    AFS2_integration_update(dt_ms, bridge, out);
    AFS_integration_update(dt_ms, bridge, out);
    AFM_integration_update(dt_ms, bridge, out);
    AHS_integration_update(dt_ms, bridge, out);
    AIM_integration_update(dt_ms, bridge, out);
    AIS_integration_update(dt_ms, bridge, out);
    AKS_integration_update(dt_ms, bridge, out);
    APC2_integration_update(dt_ms, bridge, out);
    APS_integration_update(dt_ms, bridge, out);
    ARD_integration_update(dt_ms, bridge, out);
    ARS_integration_update(dt_ms, bridge, out);
    ARS3_integration_update(dt_ms, bridge, out);
    ARH_integration_update(dt_ms, bridge, out);
    ARH2_integration_update(dt_ms, bridge, out);
    ARC_integration_update(dt_ms, bridge, out);
    ASS_integration_update(dt_ms, bridge, out);
    ATC_integration_update(dt_ms, bridge, out);
    AUS_integration_update(dt_ms, bridge, out);
    AVT_integration_update(dt_ms, bridge, out);
    AVR_integration_update(dt_ms, bridge, out);
    AVS_integration_update(dt_ms, bridge, out);
    AWF_integration_update(dt_ms, bridge, out);
    AYC_integration_update(dt_ms, bridge, out);
    AFL_integration_update(dt_ms, bridge, out);
    ADS_integration_update(dt_ms, bridge, out);
    ABA_integration_update(dt_ms, bridge, out);
    ALE_integration_update(dt_ms, bridge, out);
    AWS_integration_update(dt_ms, bridge, out);
    AST_integration_update(dt_ms, bridge, out);
    ABS_integration_update(dt_ms, bridge, out);
    AKR_integration_update(dt_ms, bridge, out);
    ABF_integration_update(dt_ms, bridge, out);
    ABP_integration_update(dt_ms, bridge, out);
    ABR_integration_update(dt_ms, bridge, out);
    AGP_integration_update(dt_ms, bridge, out);
    AGS_integration_update(dt_ms, bridge, out);
    AGS2_integration_update(dt_ms, bridge, out);
    AHB_integration_update(dt_ms, bridge, out);
    OVR_integration_update(dt_ms, bridge, out);
    APR_integration_update(dt_ms, bridge, out);
    ARS2_integration_update(dt_ms, bridge, out);
    ARM_integration_update(dt_ms, bridge, out);
    BTM_integration_update(dt_ms, bridge, out);
    BMS_integration_update(dt_ms, bridge, out);
    BPM_integration_update(dt_ms, bridge, out);
    BSD_integration_update(dt_ms, bridge, out);
    BKT_integration_update(dt_ms, bridge, out);
    BBW_integration_update(dt_ms, bridge, out);
    BLD_integration_update(dt_ms, bridge, out);
    CBP_integration_update(dt_ms, bridge, out);
    CSA_integration_update(dt_ms, bridge, out);
    CVT_integration_update(dt_ms, bridge, out);
    CBC_integration_update(dt_ms, bridge, out);
    DVS_integration_update(dt_ms, bridge, out);
    DFM_integration_update(dt_ms, bridge, out);
    DDS_integration_update(dt_ms, bridge, out);
    DSP_integration_update(dt_ms, bridge, out);
    DRS_integration_update(dt_ms, bridge, out);
    DTC_integration_update(dt_ms, bridge, out);
    DAS_integration_update(dt_ms, bridge, out);
    DCT_integration_update(dt_ms, bridge, out);
    DBC_integration_update(dt_ms, bridge, out);
    DSC_integration_update(dt_ms, bridge, out);
    DYC_integration_update(dt_ms, bridge, out);
    EIS_integration_update(dt_ms, bridge, out);
    ETC2_integration_update(dt_ms, bridge, out);
    EBD_integration_update(dt_ms, bridge, out);
    EDL_integration_update(dt_ms, bridge, out);
    EPS_integration_update(dt_ms, bridge, out);
    ESC_integration_update(dt_ms, bridge, out);
    ETC_integration_update(dt_ms, bridge, out);
    ETS_integration_update(dt_ms, bridge, out);
    EBA_integration_update(dt_ms, bridge, out);
    ERB_integration_update(dt_ms, bridge, out);
    EBM_integration_update(dt_ms, bridge, out);
    ECT_integration_update(dt_ms, bridge, out);
    EDM_integration_update(dt_ms, bridge, out);
    EBD2_integration_update(dt_ms, bridge, out);
    EGR_integration_update(dt_ms, bridge, out);
    XDM_integration_update(dt_ms, bridge, out);
    FDW_integration_update(dt_ms, bridge, out);
    FCS_integration_update(dt_ms, bridge, out);
    FDT_integration_update(dt_ms, bridge, out);
    FSA_integration_update(dt_ms, bridge, out);
    FRIC_integration_update(dt_ms, bridge, out);
    FFL_integration_update(dt_ms, bridge, out);
    FIC_integration_update(dt_ms, bridge, out);
    GBT_integration_update(dt_ms, bridge, out);
    GAS_integration_update(dt_ms, bridge, out);
    GES_integration_update(dt_ms, bridge, out);
    HVS_integration_update(dt_ms, bridge, out);
    HVC_integration_update(dt_ms, bridge, out);
    HCR_integration_update(dt_ms, bridge, out);
    HBA_integration_update(dt_ms, bridge, out);
    HIS_integration_update(dt_ms, bridge, out);
    ITC_integration_update(dt_ms, bridge, out);
    IMU_integration_update(dt_ms, bridge, out);
    ICT_integration_update(dt_ms, bridge, out);
    KNC_integration_update(dt_ms, bridge, out);
    LEO_integration_update(dt_ms, bridge, out);
    LC_integration_update(dt_ms, bridge, out);
    LSC_integration_update(dt_ms, bridge, out);
    LMP_integration_update(dt_ms, bridge, out);
    TLM_integration_update(dt_ms, bridge, out);
    MGT_integration_update(dt_ms, bridge, out);
    MGH_integration_update(dt_ms, bridge, out);
    MGK_integration_update(dt_ms, bridge, out);
    MRS_integration_update(dt_ms, bridge, out);
    MDR_integration_update(dt_ms, bridge, out);
    MDM_integration_update(dt_ms, bridge, out);
    OWG_integration_update(dt_ms, bridge, out);
    OTM_integration_update(dt_ms, bridge, out);
    DLG_integration_update(dt_ms, bridge, out);
    OGS_integration_update(dt_ms, bridge, out);
    OVC_integration_update(dt_ms, bridge, out);
    PLS_integration_update(dt_ms, bridge, out);
    PTC_integration_update(dt_ms, bridge, out);
    PPS_integration_update(dt_ms, bridge, out);
    APC_integration_update(dt_ms, bridge, out);
    RBT_integration_update(dt_ms, bridge, out);
    RDH_integration_update(dt_ms, bridge, out);
    RBA_integration_update(dt_ms, bridge, out);
    RCS_integration_update(dt_ms, bridge, out);
    RHC_integration_update(dt_ms, bridge, out);
    RHE_integration_update(dt_ms, bridge, out);
    RLC_integration_update(dt_ms, bridge, out);
    SDL_integration_update(dt_ms, bridge, out);
    SHS_integration_update(dt_ms, bridge, out);
    SPL_integration_update(dt_ms, bridge, out);
    SCC_integration_update(dt_ms, bridge, out);
    SSE_integration_update(dt_ms, bridge, out);
    SLA_integration_update(dt_ms, bridge, out);
    SLR_integration_update(dt_ms, bridge, out);
    SOC_integration_update(dt_ms, bridge, out);
    SBW_integration_update(dt_ms, bridge, out);
    TCT_integration_update(dt_ms, bridge, out);
    TDE_integration_update(dt_ms, bridge, out);
    TFE_integration_update(dt_ms, bridge, out);
    TGE_integration_update(dt_ms, bridge, out);
    TSE_integration_update(dt_ms, bridge, out);
    TST_integration_update(dt_ms, bridge, out);
    TQS_integration_update(dt_ms, bridge, out);
    TQV_integration_update(dt_ms, bridge, out);
    TVB_integration_update(dt_ms, bridge, out);
    TVE_integration_update(dt_ms, bridge, out);
    TCS_integration_update(dt_ms, bridge, out);
    TWC_integration_update(dt_ms, bridge, out);
    TPM_integration_update(dt_ms, bridge, out);
    TYT_integration_update(dt_ms, bridge, out);
    USC_integration_update(dt_ms, bridge, out);
    UTR_integration_update(dt_ms, bridge, out);
    VCR_integration_update(dt_ms, bridge, out);
    VDS_integration_update(dt_ms, bridge, out);
    VGT2_integration_update(dt_ms, bridge, out);
    VIG_integration_update(dt_ms, bridge, out);
    VTG_integration_update(dt_ms, bridge, out);
    VVL_integration_update(dt_ms, bridge, out);
    VVT_integration_update(dt_ms, bridge, out);
    VDC_integration_update(dt_ms, bridge, out);
    VSE_integration_update(dt_ms, bridge, out);
    VSC_integration_update(dt_ms, bridge, out);
    WLE_integration_update(dt_ms, bridge, out);
    WSD_integration_update(dt_ms, bridge, out);
    YMD_integration_update(dt_ms, bridge, out);
    YRC_integration_update(dt_ms, bridge, out);
}

void ecu_registry_shutdown_all(void) {
    ALA_shutdown();
    PAA_shutdown();
    AAR_shutdown();
    ABC_shutdown();
    ABS3_shutdown();
    ABD_shutdown();
    ACT_shutdown();
    ADG_shutdown();
    ADS2_shutdown();
    ADS4_shutdown();
    ADS3_shutdown();
    AFC_shutdown();
    AFT_shutdown();
    AFD_shutdown();
    AFS2_shutdown();
    AFS_shutdown();
    AFM_shutdown();
    AHS_shutdown();
    AIM_shutdown();
    AIS_shutdown();
    AKS_shutdown();
    APC2_shutdown();
    APS_shutdown();
    ARD_shutdown();
    ARS_shutdown();
    ARS3_shutdown();
    ARH_shutdown();
    ARH2_shutdown();
    ARC_shutdown();
    ASS_shutdown();
    ATC_shutdown();
    AUS_shutdown();
    AVT_shutdown();
    AVR_shutdown();
    AVS_shutdown();
    AWF_shutdown();
    AYC_shutdown();
    AFL_shutdown();
    ADS_shutdown();
    ABA_shutdown();
    ALE_shutdown();
    AWS_shutdown();
    AST_shutdown();
    ABS_shutdown();
    AKR_shutdown();
    ABF_shutdown();
    ABP_shutdown();
    ABR_shutdown();
    AGP_shutdown();
    AGS_shutdown();
    AGS2_shutdown();
    AHB_shutdown();
    OVR_shutdown();
    APR_shutdown();
    ARS2_shutdown();
    ARM_shutdown();
    BTM_shutdown();
    BMS_shutdown();
    BPM_shutdown();
    BSD_shutdown();
    BKT_shutdown();
    BBW_shutdown();
    BLD_shutdown();
    CBP_shutdown();
    CSA_shutdown();
    CVT_shutdown();
    CBC_shutdown();
    DVS_shutdown();
    DFM_shutdown();
    DDS_shutdown();
    DSP_shutdown();
    DRS_shutdown();
    DTC_shutdown();
    DAS_shutdown();
    DCT_shutdown();
    DBC_shutdown();
    DSC_shutdown();
    DYC_shutdown();
    EIS_shutdown();
    ETC2_shutdown();
    EBD_shutdown();
    EDL_shutdown();
    EPS_shutdown();
    ESC_shutdown();
    ETC_shutdown();
    ETS_shutdown();
    EBA_shutdown();
    ERB_shutdown();
    EBM_shutdown();
    ECT_shutdown();
    EDM_shutdown();
    EBD2_shutdown();
    EGR_shutdown();
    XDM_shutdown();
    FDW_shutdown();
    FCS_shutdown();
    FDT_shutdown();
    FSA_shutdown();
    FRIC_shutdown();
    FFL_shutdown();
    FIC_shutdown();
    GBT_shutdown();
    GAS_shutdown();
    GES_shutdown();
    HVS_shutdown();
    HVC_shutdown();
    HCR_shutdown();
    HBA_shutdown();
    HIS_shutdown();
    ITC_shutdown();
    IMU_shutdown();
    ICT_shutdown();
    KNC_shutdown();
    LEO_shutdown();
    LC_shutdown();
    LSC_shutdown();
    LMP_shutdown();
    TLM_shutdown();
    MGT_shutdown();
    MGH_shutdown();
    MGK_shutdown();
    MRS_shutdown();
    MDR_shutdown();
    MDM_shutdown();
    OWG_shutdown();
    OTM_shutdown();
    DLG_shutdown();
    OGS_shutdown();
    OVC_shutdown();
    PLS_shutdown();
    PTC_shutdown();
    PPS_shutdown();
    APC_shutdown();
    RBT_shutdown();
    RDH_shutdown();
    RBA_shutdown();
    RCS_shutdown();
    RHC_shutdown();
    RHE_shutdown();
    RLC_shutdown();
    SDL_shutdown();
    SHS_shutdown();
    SPL_shutdown();
    SCC_shutdown();
    SSE_shutdown();
    SLA_shutdown();
    SLR_shutdown();
    SOC_shutdown();
    SBW_shutdown();
    TCT_shutdown();
    TDE_shutdown();
    TFE_shutdown();
    TGE_shutdown();
    TSE_shutdown();
    TST_shutdown();
    TQS_shutdown();
    TQV_shutdown();
    TVB_shutdown();
    TVE_shutdown();
    TCS_shutdown();
    TWC_shutdown();
    TPM_shutdown();
    TYT_shutdown();
    USC_shutdown();
    UTR_shutdown();
    VCR_shutdown();
    VDS_shutdown();
    VGT2_shutdown();
    VIG_shutdown();
    VTG_shutdown();
    VVL_shutdown();
    VVT_shutdown();
    VDC_shutdown();
    VSE_shutdown();
    VSC_shutdown();
    WLE_shutdown();
    WSD_shutdown();
    YMD_shutdown();
    YRC_shutdown();
}
