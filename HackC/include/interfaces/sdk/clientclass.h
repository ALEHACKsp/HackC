#pragma once

#include <Windows.h>

typedef enum {
	CAI_BASENPC = 0,
	CAK47,
	CBASEANIMATING,
	CBASEANIMATINGOVERLAY,
	CBASEATTRIBUTABLEITEM,
	CBASEBUTTON,
	CBASECOMBATCHARACTER,
	CBASECOMBATWEAPON,
	CBASECSGRENADE,
	CBASECSGRENADEPROJECTILE,
	CBASEDOOR,
	CBASEENTITY,
	CBASEFLEX,
	CBASEGRENADE,
	CBASEPARTICLEENTITY,
	CBASEPLAYER,
	CBASEPROPDOOR,
	CBASETEAMOBJECTIVERESOURCE,
	CBASETEMPENTITY,
	CBASETOGGLE,
	CBASETRIGGER,
	CBASEVIEWMODEL,
	CBASEVPHYSICSTRIGGER,
	CBASEWEAPONWORLDMODEL,
	CBEAM,
	CBEAMSPOTLIGHT,
	CBONEFOLLOWER,
	CBRC4TARGET,
	CBREACHCHARGE,
	CBREACHCHARGEPROJECTILE,
	CBREAKABLEPROP,
	CBREAKABLESURFACE,
	CBUMPMINE,
	CBUMPMINEPROJECTILE,
	CC4,
	CCASCADELIGHT,
	CCHICKEN,
	CCOLORCORRECTION,
	CCOLORCORRECTIONVOLUME,
	CCSGAMERULESPROXY,
	CCSPLAYER,
	CCSPLAYERRESOURCE,
	CCSRAGDOLL,
	CCSTEAM,
	CDANGERZONE,
	CDANGERZONECONTROLLER,
	CDEAGLE,
	CDECOYGRENADE,
	CDECOYPROJECTILE,
	CDRONE,
	CDRONEGUN,
	CDYNAMICLIGHT,
	CDYNAMICPROP,
	CECONENTITY,
	CECONWEARABLE,
	CEMBERS,
	CENTITYDISSOLVE,
	CENTITYFLAME,
	CENTITYFREEZING,
	CENTITYPARTICLETRAIL,
	CENVAMBIENTLIGHT,
	CENVDETAILCONTROLLER,
	CENVDOFCONTROLLER,
	CENVGASCANISTER,
	CENVPARTICLESCRIPT,
	CENVPROJECTEDTEXTURE,
	CENVQUADRATICBEAM,
	CENVSCREENEFFECT,
	CENVSCREENOVERLAY,
	CENVTONEMAPCONTROLLER,
	CENVWIND,
	CFEPLAYERDECAL,
	CFIRECRACKERBLAST,
	CFIRESMOKE,
	CFIRETRAIL,
	CFISH,
	CFISTS,
	CFLASHBANG,
	CFOGCONTROLLER,
	CFOOTSTEPCONTROL,
	CFUNC_DUST,
	CFUNC_LOD,
	CFUNCAREAPORTALWINDOW,
	CFUNCBRUSH,
	CFUNCCONVEYOR,
	CFUNCLADDER,
	CFUNCMONITOR,
	CFUNCMOVELINEAR,
	CFUNCOCCLUDER,
	CFUNCREFLECTIVEGLASS,
	CFUNCROTATING,
	CFUNCSMOKEVOLUME,
	CFUNCTRACKTRAIN,
	CGAMERULESPROXY,
	CGRASSBURN,
	CHANDLETEST,
	CHEGRENADE,
	CHOSTAGE,
	CHOSTAGECARRIABLEPROP,
	CINCENDIARYGRENADE,
	CINFERNO,
	CINFOLADDERDISMOUNT,
	CINFOMAPREGION,
	CINFOOVERLAYACCESSOR,
	CITEM_HEALTHSHOT,
	CITEMCASH,
	CITEMDOGTAGS,
	CKNIFE,
	CKNIFEGG,
	CLIGHTGLOW,
	CMATERIALMODIFYCONTROL,
	CMELEE,
	CMOLOTOVGRENADE,
	CMOLOTOVPROJECTILE,
	CMOVIEDISPLAY,
	CPARADROPCHOPPER,
	CPARTICLEFIRE,
	CPARTICLEPERFORMANCEMONITOR,
	CPARTICLESYSTEM,
	CPHYSBOX,
	CPHYSBOXMULTIPLAYER,
	CPHYSICSPROP,
	CPHYSICSPROPMULTIPLAYER,
	CPHYSMAGNET,
	CPHYSPROPAMMOBOX,
	CPHYSPROPLOOTCRATE,
	CPHYSPROPRADARJAMMER,
	CPHYSPROPWEAPONUPGRADE,
	CPLANTEDC4,
	CPLASMA,
	CPLAYERPING,
	CPLAYERRESOURCE,
	CPOINTCAMERA,
	CPOINTCOMMENTARYNODE,
	CPOINTWORLDTEXT,
	CPOSECONTROLLER,
	CPOSTPROCESSCONTROLLER,
	CPRECIPITATION,
	CPRECIPITATIONBLOCKER,
	CPREDICTEDVIEWMODEL,
	CPROP_HALLUCINATION,
	CPROPCOUNTER,
	CPROPDOORROTATING,
	CPROPJEEP,
	CPROPVEHICLEDRIVEABLE,
	CRAGDOLLMANAGER,
	CRAGDOLLPROP,
	CRAGDOLLPROPATTACHED,
	CROPEKEYFRAME,
	CSCAR17,
	CSCENEENTITY,
	CSENSORGRENADE,
	CSENSORGRENADEPROJECTILE,
	CSHADOWCONTROL,
	CSLIDESHOWDISPLAY,
	CSMOKEGRENADE,
	CSMOKEGRENADEPROJECTILE,
	CSMOKESTACK,
	CSNOWBALL,
	CSNOWBALLPILE,
	CSNOWBALLPROJECTILE,
	CSPATIALENTITY,
	CSPOTLIGHTEND,
	CSPRITE,
	CSPRITEORIENTED,
	CSPRITETRAIL,
	CSTATUEPROP,
	CSTEAMJET,
	CSUN,
	CSUNLIGHTSHADOWCONTROL,
	CSURVIVALSPAWNCHOPPER,
	CTABLET,
	CTEAM,
	CTEAMPLAYROUNDBASEDRULESPROXY,
	CTEARMORRICOCHET,
	CTEBASEBEAM,
	CTEBEAMENTPOINT,
	CTEBEAMENTS,
	CTEBEAMFOLLOW,
	CTEBEAMLASER,
	CTEBEAMPOINTS,
	CTEBEAMRING,
	CTEBEAMRINGPOINT,
	CTEBEAMSPLINE,
	CTEBLOODSPRITE,
	CTEBLOODSTREAM,
	CTEBREAKMODEL,
	CTEBSPDECAL,
	CTEBUBBLES,
	CTEBUBBLETRAIL,
	CTECLIENTPROJECTILE,
	CTEDECAL,
	CTEDUST,
	CTEDYNAMICLIGHT,
	CTEEFFECTDISPATCH,
	CTEENERGYSPLASH,
	CTEEXPLOSION,
	CTEFIREBULLETS,
	CTEFIZZ,
	CTEFOOTPRINTDECAL,
	CTEFOUNDRYHELPERS,
	CTEGAUSSEXPLOSION,
	CTEGLOWSPRITE,
	CTEIMPACT,
	CTEKILLPLAYERATTACHMENTS,
	CTELARGEFUNNEL,
	CTEMETALSPARKS,
	CTEMUZZLEFLASH,
	CTEPARTICLESYSTEM,
	CTEPHYSICSPROP,
	CTEPLANTBOMB,
	CTEPLAYERANIMEVENT,
	CTEPLAYERDECAL,
	CTEPROJECTEDDECAL,
	CTERADIOICON,
	CTESHATTERSURFACE,
	CTESHOWLINE,
	CTESLA,
	CTESMOKE,
	CTESPARKS,
	CTESPRITE,
	CTESPRITESPRAY,
	CTEST_PROXYTOGGLE_NETWORKABLE,
	CTESTTRACELINE,
	CTEWORLDDECAL,
	CTRIGGERPLAYERMOVEMENT,
	CTRIGGERSOUNDOPERATOR,
	CVGUISCREEN,
	CVOTECONTROLLER,
	CWATERBULLET,
	CWATERLODCONTROL,
	CWEAPONAUG,
	CWEAPONAWP,
	CWEAPONBASEITEM,
	CWEAPONBIZON,
	CWEAPONCSBASE,
	CWEAPONCSBASEGUN,
	CWEAPONCYCLER,
	CWEAPONELITE,
	CWEAPONFAMAS,
	CWEAPONFIVESEVEN,
	CWEAPONG3SG1,
	CWEAPONGALIL,
	CWEAPONGALILAR,
	CWEAPONGLOCK,
	CWEAPONHKP2000,
	CWEAPONM249,
	CWEAPONM3,
	CWEAPONM4A1,
	CWEAPONMAC10,
	CWEAPONMAG7,
	CWEAPONMP5NAVY,
	CWEAPONMP7,
	CWEAPONMP9,
	CWEAPONNEGEV,
	CWEAPONNOVA,
	CWEAPONP228,
	CWEAPONP250,
	CWEAPONP90,
	CWEAPONSAWEDOFF,
	CWEAPONSCAR20,
	CWEAPONSCOUT,
	CWEAPONSG550,
	CWEAPONSG552,
	CWEAPONSG556,
	CWEAPONSHIELD,
	CWEAPONSSG08,
	CWEAPONTASER,
	CWEAPONTEC9,
	CWEAPONTMP,
	CWEAPONUMP45,
	CWEAPONUSP,
	CWEAPONXM1014,
	CWORLD,
	CWORLDVGUITEXT,
	DUSTTRAIL,
	MOVIEEXPLOSION,
	PARTICLESMOKEGRENADE,
	ROCKETTRAIL,
	SMOKETRAIL,
	SPOREEXPLOSION,
	SPORETRAIL,
} class_ids;

struct client_class {
	void*(*create_function)(int, int);
	void* create_event_function;
	char* network_name;
	void* recv_table;
	struct client_class* next;
	class_ids class_id;
};