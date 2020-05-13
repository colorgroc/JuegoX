using UnrealBuildTool;

public class JuegoXTarget : TargetRules
{
	public JuegoXTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("JuegoX");
	}
}
