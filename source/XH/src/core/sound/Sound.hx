package core.sound;

import flash.events.Event;
import flash.media.SoundChannel;
import game.tnk.Game;
import motion.Actuate;
import openfl.Assets;


class Sound
{
	
	public inline static var MUSIC_BATTLE			= "ingame.mp3";
	public inline static var MUSIC_HOME		 		= "background.mp3";
	
	public inline static var STA_WIN		 		= "TABLE_win.wav";
	public inline static var STA_LOSE		 		= "TABLE_lose.wav";
	public inline static var STA_DRAW		 		= "TABLE_win.wav";
	public inline static var STA_DICONNET		 	= "TABLE_win.wav";
	public inline static var STA_HIGHSCORE		 	= "TABLE_trick.mp3";
	
	public inline static var SKILL_LASERS		 	= "skilllasers.mp3"; //v
	public inline static var SKILL_METEOR		 	= "skillmeterol.mp3"; //v
	public inline static var SKILL_MAGNET		 	= "skillmagnet.mp3"; //v
	public inline static var SKILL_BOOM		 		= "skillboom.mp3"; //v
	public inline static var SKILL_FINISH		 	= "skillfinish.mp3"; //v
	
	public inline static var GAME_FALL 				= "fall.mp3"; //v
	public inline static var GAME_CLEAR01		 	= "clear01.mp3"; //v
	public inline static var GAME_CLEAR02		 	= "clear01.mp3";
	public inline static var GAME_CLEAR03		 	= "clear01.mp3";
	public inline static var GAME_CLEAR04		 	= "clear01.mp3";
	public inline static var GAME_BEGIN  			= "defeat.mp3"; //v
	public inline static var GAME_TIMEOUT  			= "TABLE_lose.wav"; //v
	public inline static var GAME_TICTAC  			= "TABLE_timer.wav"; //v
	
	public inline static var CHOOSE_SKILL		 	= "chooseskill.mp3"; //v
	public inline static var BUTTON		 			= "click1.mp3"; //v
	
	private var channel:SoundChannel;
	private var position:Float;
	private var sound:flash.media.Sound;
	private var loop:Bool;
	private var soundName:String;
	
	public function new(soundName:String, loop:Bool = false)
	{
		this.loop = loop;
		if (!Game.data.playerData.dataGame.isSound)
			return;
		//soundName = soundName.split(".")[0] + ".mp3";
		sound = Assets.getSound ("img/sounds/" + soundName);
		//sound = new flash.media.Sound(new URLRequest(GameConfig.STATIC_SERVER  + soundName));
		
		this.soundName = soundName;
	}
	
	public static function GetSound(soundName:String, loop:Bool = false):Sound
	{
		return new Sound(soundName, loop);
	}
	
	public function Play(position:Int = 0, fadeIn:Float = 1.0)
	{
		this.position = position;
		if (sound != null)
		{
			channel = sound.play (position);
			channel.addEventListener (Event.SOUND_COMPLETE, channel_onSoundComplete);
		}
	}

	public function Pause(fadeOut:Float = 1.2):Void {
	
		if (channel != null) {			
			Actuate.transform (channel, fadeOut).sound (0, 0).onComplete (function () {
				position = channel.position;
				channel.removeEventListener (Event.SOUND_COMPLETE, channel_onSoundComplete);
				channel.stop ();
				channel = null;		
			});
		}
	}
	
	private function channel_onSoundComplete (event:Event):Void {	
	
		if (loop)
		{
			Play();
		}
		else
		{
			Pause ();
			position = 0;
		}
	
	}
	
}