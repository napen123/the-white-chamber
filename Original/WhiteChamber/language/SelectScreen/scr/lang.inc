method switchLocale()
{
    //Game.Log("sitchLocale(): activate chosen language");
	
	Game.LoadStringTable(LangFile,true);
	// changed by sychron: reload item captions
	Game.LoadItems("items\items.items", false);

	// Remap subtitles to TTF
	if (TTFFont == true)
	{
 		WinCaption.SetFont("secondaryttf.font");
	}

	// Switch on speech
	if (VoiceActing == true)
	{
		// changed by sychron: activate german speech if german language is selected
		if (GermanVoice){
		  Game.AddSpeechDir("german");
		  Game.SetGlobalSpeechVolume(85);

		} else {
		  Game.AddSpeechDir("english");
		}
	}
	else
	{
		// changed by sychron: activate german speech if german language is selected
		if (GermanVoice){
		  Game.RemoveSpeechDir("german");
		} else {
		  Game.RemoveSpeechDir("english");
		}
	}
}


