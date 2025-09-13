// SayanNandi

using UnrealBuildTool;
using System.Collections.Generic;

public class MagicAndMonsterTarget : TargetRules
{
	public MagicAndMonsterTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "MagicAndMonster" } );
	}
}
