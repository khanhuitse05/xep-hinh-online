package game.gameobject.gameplay;

import core.display.ex.ExSprite;
import game.data.gameplay.InfoBlock;
import game.gameobject.board.VirtualBlock;
import game.tnk.Game;
import openfl.display.Sprite;
import openfl.events.Event;

/**
 * ...
 * @author KhanhTN
 */
class OneTouch extends Sprite
{
	private var mList:Array<VirtualBlock>;
	public function new() 
	{
		super();
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
		removeCase();
		if (_list != null) 
		{
			for (item in _list) 
			{
				var _block1 = new VirtualBlock(item.mType, item.mDirect);
				_block1.setGrid(item.mColumn, item.mRow);
				this.addChild(_block1);
				mList.push(_block1);
			}
		}else 
		{
			
		}
		Game.data.playerData.mDTingame.isSetCase = false;
		Game.data.playerData.mDTingame.isRemoveCase = false;
	}
	public function removeCase()
	{
		if (mList != null) 
		{
			for (i in 0...mList.length) 
			{
				var _block:VirtualBlock = mList[0];
				mList.remove(mList[0]);
				removeChild(_block);
				_block.dispose();
				_block = null;
				
			}
		}	
		mList = new Array<VirtualBlock>();
	}
	public function onEnter()
	{
		this.addEventListener(Event.ENTER_FRAME, gameLoop);		
		mList = new Array<VirtualBlock>();
	}
	public function onExit()
	{
		this.removeEventListener(Event.ENTER_FRAME, gameLoop);
		removeCase();
	}
}