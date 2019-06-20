// #include "scripts\music.inc"
// PlayAmbient(AMBIENT_SCARY, "BLACKCHAMBER");

method PlayAmbient(ambientType, roomName)
{
	// Switch ambient if the correct type is not playing
	if (ambientType != MusicPlayingAmbient)
	{
		switch(ambientType)
		{
			case AMBIENT_SILENCE:
				Game.StopMusicChannel(0);
				break;
			case AMBIENT_SCARY:
				Game.PlayMusicChannel(0, "audio\ambient\ambientmain(messedup).ogg", true);
				break;
			case AMBIENT_NORMAL:
				Game.PlayMusicChannel(0, "audio\ambient\ambientmain(normal).ogg", true);
				break;
		}
		MusicPlayingAmbient = ambientType;
	}

	// Switch the sub ambience channel to the current room
	switch(roomName)
	{
		case "NONE":
			Game.StopMusicChannel(1);
			break;
		case "BLACKCHAMBER":
			Game.PlayMusicChannel(1, "audio\ambient\ambientblackchamber.ogg", true);
			break;
		case "BEACH":
			Game.PlayMusicChannel(1, "audio\ambient\ambientbeach.ogg", true);
			break;
		case "COMPUTER":
			Game.PlayMusicChannel(1, "audio\ambient\ambientcomputerroom.ogg", true);
			break;
		case "COMPUTERBLOODY":
			Game.PlayMusicChannel(1, "audio\ambient\ambientcomputerroombloody.ogg", true);
			break;
		case "FANROOM":
			Game.PlayMusicChannel(1, "audio\ambient\ambientfanroom.ogg", true);
			break;
		case "LAB":
			Game.PlayMusicChannel(1, "audio\ambient\ambientlab.ogg", true);
			break;
		case "LIVINGROOM":
			Game.PlayMusicChannel(1, "audio\ambient\ambientlivingroom.ogg", true);
			break;
		case "SEQUENCE1":
			Game.PlayMusicChannel(1, "audio\ambient\ambientsequence1.ogg", true);
			break;
		case "SEQUENCE2":
			Game.PlayMusicChannel(1, "audio\ambient\ambientsequence2.ogg", true);
			break;
		case "SEQUENCE3":
			Game.PlayMusicChannel(1, "audio\ambient\ambientsequence3.ogg", true);
			break;
		case "SEQUENCE4":
			Game.PlayMusicChannel(1, "audio\ambient\ambientsequence4.ogg", true);
			break;
		case "SEQUENCE5":
			Game.PlayMusicChannel(1, "audio\ambient\ambientsequence5.ogg", true);
			break;
		case "SEQUENCE6":
			Game.PlayMusicChannel(1, "audio\ambient\ambientsequence6.ogg", true);
			break;
		case "SEQUENCE7":
			Game.PlayMusicChannel(1, "audio\ambient\ambientsequence7.ogg", true);
			break;
		case "MEDBAY":
			Game.PlayMusicChannel(1, "audio\ambient\ambientmedbay.ogg", true);
			break;
		case "NAVROOM":
			Game.PlayMusicChannel(1, "audio\ambient\ambientnavroom.ogg", true);
			break;
		case "NAVROOMBLEED":
			Game.PlayMusicChannel(1, "audio\ambient\ambientnavroombleeding.ogg", true);
			break;
		case "SLEEPING":
			Game.PlayMusicChannel(1, "audio\ambient\ambientsleepingquarters.ogg", true);
			break;
		case "STORE":
			Game.PlayMusicChannel(1, "audio\ambient\ambientstoreroom.ogg", true);
			break;
		case "WHITE":
			Game.PlayMusicChannel(1, "audio\ambient\ambientwhitechamber.ogg", true);
			break;
		case "FANNORMAL":
			Game.PlayMusicChannel(1, "audio\ambient\AmbientFanRoom(Normal).ogg", true);
			break;
		case "LIVINGFRIDGE":
			Game.PlayMusicChannel(1, "audio\ambient\AmbientLivingRoom(Fridge).ogg", true);
			break;
		case "FREEZERNORMAL":
			Game.PlayMusicChannel(1, "audio\ambient\AmbientFreezerRoom(Normal).ogg", true);
			break;
		case "FREEZERGORE":
			Game.PlayMusicChannel(1, "audio\ambient\AmbientFreezerRoom(Gore).ogg", true);
			break;
		case "MES":
			Game.PlayMusicChannel(1, "audio\ambient\ambientstoreroom(mes).ogg", true);
			break;
		case "COMEDY":
			Game.PlayMusicChannel(1, "audio\ambient\ambientcomedy.ogg", true);
			break;


	}
}