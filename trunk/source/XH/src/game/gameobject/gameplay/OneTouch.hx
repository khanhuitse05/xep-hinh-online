package game.gameobject.gameplay;

import core.display.ex.ExSprite;
import game.data.gameplay.InfoBlock;
import game.gameobject.board.VirtualBlock;
import game.tnk.Game;
import openfl.events.Event;

/**
 * ...
 * @author KhanhTN
 */
class OneTouch extends ExSprite
{

	public function new() 
	{
		super();
		this.addEventListener(Event.ENTER_FRAME, gameLoop);
	}
	public function gameLoop(e:Event)
	{
		if (Game.data.playerData.mDTingame.isRemoveCase == true) 
		{
			setCase();
		}
		if (Game.data.playerData.mDTingame.isSetCase == true) 
		{
			setCase(Game.data.playerData.mDTingame.listCase);
		}
	}
	public function setCase(_list:Array<InfoBlock> = null):Void
	{
		this.removeAllAndDelChild();
		if (_list != null) 
		{
			for (item in _list) 
			{
				var _block1 = new VirtualBlock(item.mType, item.mDirect);
				_block1.setGrid(item.mColumn, item.mRow);
				this.addChildForDel(_block1);
			}
		}else 
		{
			
		}
		Game.data.playerData.mDTingame.isSetCase = false;
		Game.data.playerData.mDTingame.isRemoveCase = false;
	}
	public function onExit()
	{
		this.removeEventListener(Event.ENTER_FRAME, gameLoop);
	}
}