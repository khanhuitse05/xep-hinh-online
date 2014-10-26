#include <hxcpp.h>

#include <sys/net/Socket.h>
#include <sys/net/_Socket/SocketOutput.h>
#include <sys/net/_Socket/SocketInput.h>
#include <sys/net/Host.h>
#include <openfl/utils/Endian.h>
#include <openfl/text/TextFieldType.h>
#include <openfl/text/TextFieldAutoSize.h>
#include <openfl/text/GridFitType.h>
#include <openfl/text/AntiAliasType.h>
#include <openfl/system/SecurityDomain.h>
#include <openfl/system/LoaderContext.h>
#include <openfl/system/ApplicationDomain.h>
#include <openfl/net/URLVariables.h>
#include <openfl/net/URLRequestHeader.h>
#include <openfl/net/URLLoaderDataFormat.h>
#include <openfl/net/Socket.h>
#include <openfl/media/SoundTransform.h>
#include <openfl/media/SoundLoaderContext.h>
#include <openfl/media/ID3Info.h>
#include <openfl/geom/Vector3D.h>
#include <openfl/geom/Orientation3D.h>
#include <openfl/geom/Matrix3D.h>
#include <openfl/events/UncaughtErrorEvents.h>
#include <openfl/events/UncaughtErrorEvent.h>
#include <openfl/events/SecurityErrorEvent.h>
#include <openfl/events/SampleDataEvent.h>
#include <openfl/events/ProgressEvent.h>
#include <openfl/events/JoystickEvent.h>
#include <openfl/events/IOErrorEvent.h>
#include <openfl/events/FocusEvent.h>
#include <openfl/events/EventPhase.h>
#include <openfl/events/ErrorEvent.h>
#include <openfl/events/TextEvent.h>
#include <openfl/errors/SecurityError.h>
#include <openfl/errors/RangeError.h>
#include <openfl/errors/IOError.h>
#include <openfl/errors/EOFError.h>
#include <openfl/errors/ArgumentError.h>
#include <openfl/errors/Error.h>
#include <openfl/display/StageScaleMode.h>
#include <openfl/display/StageDisplayState.h>
#include <openfl/display/StageAlign.h>
#include <openfl/display/PixelSnapping.h>
#include <openfl/display/InterpolationMethod.h>
#include <openfl/display/GraphicsPathWinding.h>
#include <openfl/display/GradientType.h>
#include <openfl/display/FrameLabel.h>
#include <openfl/_v2/utils/WeakRef.h>
#include <openfl/_v2/utils/Float32Array.h>
#include <openfl/_v2/utils/CompressionAlgorithm.h>
#include <openfl/_v2/utils/ArrayBufferView.h>
#include <openfl/_v2/ui/Keyboard.h>
#include <openfl/_v2/text/TextLineMetrics.h>
#include <openfl/_v2/text/TextFormatAlign.h>
#include <openfl/_v2/text/TextFormat.h>
#include <openfl/_v2/text/FontType.h>
#include <openfl/_v2/text/FontStyle.h>
#include <openfl/_v2/text/Font.h>
#include <openfl/_v2/system/ScreenMode.h>
#include <openfl/_v2/system/PixelFormat.h>
#include <openfl/_v2/net/URLRequestMethod.h>
#include <openfl/_v2/net/URLRequest.h>
#include <openfl/_v2/media/AudioThreadState.h>
#include <openfl/_v2/media/SoundChannel.h>
#include <openfl/_v2/media/InternalAudioType.h>
#include <openfl/_v2/media/Sound.h>
#include <openfl/_v2/gl/GLTexture.h>
#include <openfl/_v2/gl/GLShader.h>
#include <openfl/_v2/gl/GLRenderbuffer.h>
#include <openfl/_v2/gl/GLProgram.h>
#include <openfl/_v2/gl/GLFramebuffer.h>
#include <openfl/_v2/gl/GLBuffer.h>
#include <openfl/_v2/gl/GLObject.h>
#include <openfl/_v2/gl/_GL/Float32Data_Impl_.h>
#include <openfl/_v2/gl/GL.h>
#include <openfl/_v2/geom/Transform.h>
#include <openfl/_v2/geom/Rectangle.h>
#include <openfl/_v2/geom/Matrix.h>
#include <openfl/_v2/geom/ColorTransform.h>
#include <openfl/_v2/filters/BitmapFilter.h>
#include <openfl/_v2/events/SystemEvent.h>
#include <openfl/_v2/events/KeyboardEvent.h>
#include <openfl/_v2/events/HTTPStatusEvent.h>
#include <openfl/_v2/events/Listener.h>
#include <openfl/_v2/display/TriangleCulling.h>
#include <openfl/_v2/display/Tilesheet.h>
#include <openfl/_v2/geom/Point.h>
#include <openfl/_v2/display/StageQuality.h>
#include <openfl/_v2/display/TouchInfo.h>
#include <openfl/_v2/display/SpreadMethod.h>
#include <openfl/_v2/display/Shape.h>
#include <openfl/_v2/display/OpenGLView.h>
#include <openfl/_v2/display/MovieClip.h>
#include <openfl/_v2/display/ManagedStage.h>
#include <openfl/_v2/display/LoaderInfo.h>
#include <openfl/_v2/net/URLLoader.h>
#include <openfl/_v2/display/Loader.h>
#include <openfl/_v2/display/LineScaleMode.h>
#include <openfl/_v2/display/JointStyle.h>
#include <openfl/_v2/display/IGraphicsData.h>
#include <openfl/_v2/display/Graphics.h>
#include <openfl/_v2/display/DirectRenderer.h>
#include <openfl/_v2/display/CapsStyle.h>
#include <openfl/_v2/display/BlendMode.h>
#include <openfl/_v2/display/OptimizedPerlin.h>
#include <openfl/_v2/display/BitmapData.h>
#include <openfl/_v2/display/Bitmap.h>
#include <openfl/_v2/_Vector/Vector_Impl_.h>
#include <openfl/_v2/Memory.h>
#include <openfl/_v2/AssetType.h>
#include <openfl/_v2/AssetData.h>
#include <openfl/_v2/Assets.h>
#include <openfl/_v2/AssetCache.h>
#include <motion/easing/QuadEaseOut.h>
#include <motion/easing/QuadEaseInOut.h>
#include <motion/easing/QuadEaseIn.h>
#include <motion/easing/Quad.h>
#include <motion/easing/ExpoEaseInOut.h>
#include <motion/easing/ExpoEaseIn.h>
#include <motion/easing/ElasticEaseOut.h>
#include <motion/easing/ElasticEaseInOut.h>
#include <motion/easing/ElasticEaseIn.h>
#include <motion/easing/Elastic.h>
#include <motion/actuators/TransformActuator.h>
#include <motion/actuators/PropertyPathDetails.h>
#include <motion/actuators/PropertyDetails.h>
#include <motion/actuators/MotionPathActuator.h>
#include <motion/actuators/MethodActuator.h>
#include <motion/actuators/FilterActuator.h>
#include <motion/RotationPath.h>
#include <motion/LinearPath.h>
#include <motion/BezierPath.h>
#include <motion/ComponentPath.h>
#include <motion/IComponentPath.h>
#include <motion/MotionPath.h>
#include <motion/_Actuate/TweenTimer.h>
#include <motion/_Actuate/TransformOptions.h>
#include <motion/_Actuate/EffectsOptions.h>
#include <motion/Actuate.h>
#include <motion/easing/ExpoEaseOut.h>
#include <motion/easing/IEasing.h>
#include <motion/easing/Expo.h>
#include <motion/actuators/SimpleActuator.h>
#include <motion/actuators/GenericActuator.h>
#include <motion/actuators/IGenericActuator.h>
#include <haxe/zip/Uncompress.h>
#include <haxe/zip/FlushMode.h>
#include <haxe/zip/Compress.h>
#include <haxe/io/Error.h>
#include <haxe/io/Eof.h>
#include <haxe/io/BytesBuffer.h>
#include <haxe/format/JsonParser.h>
#include <haxe/ds/StringMap.h>
#include <haxe/ds/ObjectMap.h>
#include <haxe/ds/IntMap.h>
#include <haxe/Unserializer.h>
#include <haxe/Timer.h>
#include <haxe/Resource.h>
#include <haxe/Log.h>
#include <haxe/CallStack.h>
#include <haxe/StackItem.h>
#include <game/tnk/GameConfig.h>
#include <game/tnk/Game.h>
#include <game/network/packet/ResponsePacket.h>
#include <game/network/packet/RequestPacket.h>
#include <game/network/packet/PacketHeader.h>
#include <game/network/packet/Command.h>
#include <game/network/Server.h>
#include <game/data/PlayerData.h>
#include <game/data/InventoryData.h>
#include <game/data/DataCenter.h>
#include <game/data/DTItem.h>
#include <game/const/EnumConsts.h>
#include <cpp/vm/Thread.h>
#include <cpp/vm/Mutex.h>
#include <cpp/rtti/FieldNumericIntegerLookup.h>
#include <core/util/Log.h>
#include <core/util/ByteArrayEx.h>
#include <openfl/_v2/utils/ByteArray.h>
#include <openfl/_v2/utils/IDataInput.h>
#include <openfl/_v2/utils/IMemoryRange.h>
#include <openfl/_v2/utils/IDataOutput.h>
#include <core/sprites/Animx.h>
#include <core/resource/ResourcePath.h>
#include <core/resource/ResourceManager.h>
#include <core/resource/ResourceID.h>
#include <core/resource/Defines.h>
#include <core/event/EventEx.h>
#include <core/display/screen/ScreenID.h>
#include <scene/singleplay/SinglePlayView.h>
#include <scene/singleplay/SinglePlay.h>
#include <scene/mission/MissionView.h>
#include <scene/mission/Mission.h>
#include <scene/login/LoginView.h>
#include <scene/login/Login.h>
#include <scene/loading/LoadFistView.h>
#include <scene/loading/LoadFist.h>
#include <scene/home/HomeView.h>
#include <scene/home/Home.h>
#include <scene/friendplay/FriendPlayView.h>
#include <scene/friendplay/FriendPlay.h>
#include <scene/battle/BattleView.h>
#include <scene/battle/Battle.h>
#include <core/display/scene/SceneView.h>
#include <core/display/scene/SceneID.h>
#include <core/display/scene/SceneBase.h>
#include <core/display/screen/ScreenBase.h>
#include <core/display/popup/PopupManager.h>
#include <core/display/popup/PopupID.h>
#include <core/display/screen/Screen.h>
#include <core/display/popup/PopupBase.h>
#include <core/display/screen/ScreenView.h>
#include <core/display/layer/LayerManager.h>
#include <core/display/layer/Layer.h>
#include <core/display/ex/SimpleButton.h>
#include <core/display/ex/Lable.h>
#include <openfl/_v2/text/TextField.h>
#include <core/display/ex/ExSprite.h>
#include <core/display/dialog/DialogManager.h>
#include <core/display/screen/ScreenManager.h>
#include <core/display/DisplayManager.h>
#include <Type.h>
#include <StringTools.h>
#include <StringBuf.h>
#include <Reflect.h>
#include <IMap.h>
#include <List.h>
#include <Lambda.h>
#include <DefaultAssetLibrary.h>
#include <openfl/_v2/AssetLibrary.h>
#include <Date.h>
#include <ScaledStage.h>
#include <openfl/_v2/display/Stage.h>
#include <openfl/_v2/events/TouchEvent.h>
#include <openfl/_v2/events/MouseEvent.h>
#include <openfl/_v2/events/Event.h>
#include <DocumentClass.h>
#include <Main.h>
#include <openfl/_v2/display/Sprite.h>
#include <openfl/_v2/display/DisplayObjectContainer.h>
#include <openfl/_v2/display/InteractiveObject.h>
#include <openfl/_v2/display/DisplayObject.h>
#include <openfl/_v2/Lib.h>
#include <Std.h>
#include <sys/io/_Process/Stdout.h>
#include <haxe/io/Input.h>
#include <haxe/io/Bytes.h>
#include <sys/io/_Process/Stdin.h>
#include <haxe/io/Output.h>
#include <sys/io/Process.h>
#include <Sys.h>
#include <cpp/Lib.h>
#include <openfl/_v2/display/IBitmapDrawable.h>
#include <openfl/_v2/events/EventDispatcher.h>
#include <openfl/_v2/events/IEventDispatcher.h>
#include <ApplicationMain.h>

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::sys::net::Socket_obj::__register();
::sys::net::_Socket::SocketOutput_obj::__register();
::sys::net::_Socket::SocketInput_obj::__register();
::sys::net::Host_obj::__register();
::openfl::utils::Endian_obj::__register();
::openfl::text::TextFieldType_obj::__register();
::openfl::text::TextFieldAutoSize_obj::__register();
::openfl::text::GridFitType_obj::__register();
::openfl::text::AntiAliasType_obj::__register();
::openfl::system::SecurityDomain_obj::__register();
::openfl::system::LoaderContext_obj::__register();
::openfl::system::ApplicationDomain_obj::__register();
::openfl::net::URLVariables_obj::__register();
::openfl::net::URLRequestHeader_obj::__register();
::openfl::net::URLLoaderDataFormat_obj::__register();
::openfl::net::Socket_obj::__register();
::openfl::media::SoundTransform_obj::__register();
::openfl::media::SoundLoaderContext_obj::__register();
::openfl::media::ID3Info_obj::__register();
::openfl::geom::Vector3D_obj::__register();
::openfl::geom::Orientation3D_obj::__register();
::openfl::geom::Matrix3D_obj::__register();
::openfl::events::UncaughtErrorEvents_obj::__register();
::openfl::events::UncaughtErrorEvent_obj::__register();
::openfl::events::SecurityErrorEvent_obj::__register();
::openfl::events::SampleDataEvent_obj::__register();
::openfl::events::ProgressEvent_obj::__register();
::openfl::events::JoystickEvent_obj::__register();
::openfl::events::IOErrorEvent_obj::__register();
::openfl::events::FocusEvent_obj::__register();
::openfl::events::EventPhase_obj::__register();
::openfl::events::ErrorEvent_obj::__register();
::openfl::events::TextEvent_obj::__register();
::openfl::errors::SecurityError_obj::__register();
::openfl::errors::RangeError_obj::__register();
::openfl::errors::IOError_obj::__register();
::openfl::errors::EOFError_obj::__register();
::openfl::errors::ArgumentError_obj::__register();
::openfl::errors::Error_obj::__register();
::openfl::display::StageScaleMode_obj::__register();
::openfl::display::StageDisplayState_obj::__register();
::openfl::display::StageAlign_obj::__register();
::openfl::display::PixelSnapping_obj::__register();
::openfl::display::InterpolationMethod_obj::__register();
::openfl::display::GraphicsPathWinding_obj::__register();
::openfl::display::GradientType_obj::__register();
::openfl::display::FrameLabel_obj::__register();
::openfl::_v2::utils::WeakRef_obj::__register();
::openfl::_v2::utils::Float32Array_obj::__register();
::openfl::_v2::utils::CompressionAlgorithm_obj::__register();
::openfl::_v2::utils::ArrayBufferView_obj::__register();
::openfl::_v2::ui::Keyboard_obj::__register();
::openfl::_v2::text::TextLineMetrics_obj::__register();
::openfl::_v2::text::TextFormatAlign_obj::__register();
::openfl::_v2::text::TextFormat_obj::__register();
::openfl::_v2::text::FontType_obj::__register();
::openfl::_v2::text::FontStyle_obj::__register();
::openfl::_v2::text::Font_obj::__register();
::openfl::_v2::system::ScreenMode_obj::__register();
::openfl::_v2::system::PixelFormat_obj::__register();
::openfl::_v2::net::URLRequestMethod_obj::__register();
::openfl::_v2::net::URLRequest_obj::__register();
::openfl::_v2::media::AudioThreadState_obj::__register();
::openfl::_v2::media::SoundChannel_obj::__register();
::openfl::_v2::media::InternalAudioType_obj::__register();
::openfl::_v2::media::Sound_obj::__register();
::openfl::_v2::gl::GLTexture_obj::__register();
::openfl::_v2::gl::GLShader_obj::__register();
::openfl::_v2::gl::GLRenderbuffer_obj::__register();
::openfl::_v2::gl::GLProgram_obj::__register();
::openfl::_v2::gl::GLFramebuffer_obj::__register();
::openfl::_v2::gl::GLBuffer_obj::__register();
::openfl::_v2::gl::GLObject_obj::__register();
::openfl::_v2::gl::_GL::Float32Data_Impl__obj::__register();
::openfl::_v2::gl::GL_obj::__register();
::openfl::_v2::geom::Transform_obj::__register();
::openfl::_v2::geom::Rectangle_obj::__register();
::openfl::_v2::geom::Matrix_obj::__register();
::openfl::_v2::geom::ColorTransform_obj::__register();
::openfl::_v2::filters::BitmapFilter_obj::__register();
::openfl::_v2::events::SystemEvent_obj::__register();
::openfl::_v2::events::KeyboardEvent_obj::__register();
::openfl::_v2::events::HTTPStatusEvent_obj::__register();
::openfl::_v2::events::Listener_obj::__register();
::openfl::_v2::display::TriangleCulling_obj::__register();
::openfl::_v2::display::Tilesheet_obj::__register();
::openfl::_v2::geom::Point_obj::__register();
::openfl::_v2::display::StageQuality_obj::__register();
::openfl::_v2::display::TouchInfo_obj::__register();
::openfl::_v2::display::SpreadMethod_obj::__register();
::openfl::_v2::display::Shape_obj::__register();
::openfl::_v2::display::OpenGLView_obj::__register();
::openfl::_v2::display::MovieClip_obj::__register();
::openfl::_v2::display::ManagedStage_obj::__register();
::openfl::_v2::display::LoaderInfo_obj::__register();
::openfl::_v2::net::URLLoader_obj::__register();
::openfl::_v2::display::Loader_obj::__register();
::openfl::_v2::display::LineScaleMode_obj::__register();
::openfl::_v2::display::JointStyle_obj::__register();
::openfl::_v2::display::IGraphicsData_obj::__register();
::openfl::_v2::display::Graphics_obj::__register();
::openfl::_v2::display::DirectRenderer_obj::__register();
::openfl::_v2::display::CapsStyle_obj::__register();
::openfl::_v2::display::BlendMode_obj::__register();
::openfl::_v2::display::OptimizedPerlin_obj::__register();
::openfl::_v2::display::BitmapData_obj::__register();
::openfl::_v2::display::Bitmap_obj::__register();
::openfl::_v2::_Vector::Vector_Impl__obj::__register();
::openfl::_v2::Memory_obj::__register();
::openfl::_v2::AssetType_obj::__register();
::openfl::_v2::AssetData_obj::__register();
::openfl::_v2::Assets_obj::__register();
::openfl::_v2::AssetCache_obj::__register();
::motion::easing::QuadEaseOut_obj::__register();
::motion::easing::QuadEaseInOut_obj::__register();
::motion::easing::QuadEaseIn_obj::__register();
::motion::easing::Quad_obj::__register();
::motion::easing::ExpoEaseInOut_obj::__register();
::motion::easing::ExpoEaseIn_obj::__register();
::motion::easing::ElasticEaseOut_obj::__register();
::motion::easing::ElasticEaseInOut_obj::__register();
::motion::easing::ElasticEaseIn_obj::__register();
::motion::easing::Elastic_obj::__register();
::motion::actuators::TransformActuator_obj::__register();
::motion::actuators::PropertyPathDetails_obj::__register();
::motion::actuators::PropertyDetails_obj::__register();
::motion::actuators::MotionPathActuator_obj::__register();
::motion::actuators::MethodActuator_obj::__register();
::motion::actuators::FilterActuator_obj::__register();
::motion::RotationPath_obj::__register();
::motion::LinearPath_obj::__register();
::motion::BezierPath_obj::__register();
::motion::ComponentPath_obj::__register();
::motion::IComponentPath_obj::__register();
::motion::MotionPath_obj::__register();
::motion::_Actuate::TweenTimer_obj::__register();
::motion::_Actuate::TransformOptions_obj::__register();
::motion::_Actuate::EffectsOptions_obj::__register();
::motion::Actuate_obj::__register();
::motion::easing::ExpoEaseOut_obj::__register();
::motion::easing::IEasing_obj::__register();
::motion::easing::Expo_obj::__register();
::motion::actuators::SimpleActuator_obj::__register();
::motion::actuators::GenericActuator_obj::__register();
::motion::actuators::IGenericActuator_obj::__register();
::haxe::zip::Uncompress_obj::__register();
::haxe::zip::FlushMode_obj::__register();
::haxe::zip::Compress_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::haxe::format::JsonParser_obj::__register();
::haxe::ds::StringMap_obj::__register();
::haxe::ds::ObjectMap_obj::__register();
::haxe::ds::IntMap_obj::__register();
::haxe::Unserializer_obj::__register();
::haxe::Timer_obj::__register();
::haxe::Resource_obj::__register();
::haxe::Log_obj::__register();
::haxe::CallStack_obj::__register();
::haxe::StackItem_obj::__register();
::game::tnk::GameConfig_obj::__register();
::game::tnk::Game_obj::__register();
::game::network::packet::ResponsePacket_obj::__register();
::game::network::packet::RequestPacket_obj::__register();
::game::network::packet::PacketHeader_obj::__register();
::game::network::packet::Command_obj::__register();
::game::network::Server_obj::__register();
::game::data::PlayerData_obj::__register();
::game::data::InventoryData_obj::__register();
::game::data::DataCenter_obj::__register();
::game::data::DTItem_obj::__register();
::game::_const::EnumConsts_obj::__register();
::cpp::vm::Thread_obj::__register();
::cpp::vm::Mutex_obj::__register();
::cpp::rtti::FieldNumericIntegerLookup_obj::__register();
::core::util::Log_obj::__register();
::core::util::ByteArrayEx_obj::__register();
::openfl::_v2::utils::ByteArray_obj::__register();
::openfl::_v2::utils::IDataInput_obj::__register();
::openfl::_v2::utils::IMemoryRange_obj::__register();
::openfl::_v2::utils::IDataOutput_obj::__register();
::core::sprites::Animx_obj::__register();
::core::resource::ResourcePath_obj::__register();
::core::resource::ResourceManager_obj::__register();
::core::resource::ResourceID_obj::__register();
::core::resource::Defines_obj::__register();
::core::event::EventEx_obj::__register();
::core::display::screen::ScreenID_obj::__register();
::scene::singleplay::SinglePlayView_obj::__register();
::scene::singleplay::SinglePlay_obj::__register();
::scene::mission::MissionView_obj::__register();
::scene::mission::Mission_obj::__register();
::scene::login::LoginView_obj::__register();
::scene::login::Login_obj::__register();
::scene::loading::LoadFistView_obj::__register();
::scene::loading::LoadFist_obj::__register();
::scene::home::HomeView_obj::__register();
::scene::home::Home_obj::__register();
::scene::friendplay::FriendPlayView_obj::__register();
::scene::friendplay::FriendPlay_obj::__register();
::scene::battle::BattleView_obj::__register();
::scene::battle::Battle_obj::__register();
::core::display::scene::SceneView_obj::__register();
::core::display::scene::SceneID_obj::__register();
::core::display::scene::SceneBase_obj::__register();
::core::display::screen::ScreenBase_obj::__register();
::core::display::popup::PopupManager_obj::__register();
::core::display::popup::PopupID_obj::__register();
::core::display::screen::Screen_obj::__register();
::core::display::popup::PopupBase_obj::__register();
::core::display::screen::ScreenView_obj::__register();
::core::display::layer::LayerManager_obj::__register();
::core::display::layer::Layer_obj::__register();
::core::display::ex::SimpleButton_obj::__register();
::core::display::ex::Lable_obj::__register();
::openfl::_v2::text::TextField_obj::__register();
::core::display::ex::ExSprite_obj::__register();
::core::display::dialog::DialogManager_obj::__register();
::core::display::screen::ScreenManager_obj::__register();
::core::display::DisplayManager_obj::__register();
::Type_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::Reflect_obj::__register();
::IMap_obj::__register();
::List_obj::__register();
::Lambda_obj::__register();
::DefaultAssetLibrary_obj::__register();
::openfl::_v2::AssetLibrary_obj::__register();
::Date_obj::__register();
::ScaledStage_obj::__register();
::openfl::_v2::display::Stage_obj::__register();
::openfl::_v2::events::TouchEvent_obj::__register();
::openfl::_v2::events::MouseEvent_obj::__register();
::openfl::_v2::events::Event_obj::__register();
::DocumentClass_obj::__register();
::Main_obj::__register();
::openfl::_v2::display::Sprite_obj::__register();
::openfl::_v2::display::DisplayObjectContainer_obj::__register();
::openfl::_v2::display::InteractiveObject_obj::__register();
::openfl::_v2::display::DisplayObject_obj::__register();
::openfl::_v2::Lib_obj::__register();
::Std_obj::__register();
::sys::io::_Process::Stdout_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Bytes_obj::__register();
::sys::io::_Process::Stdin_obj::__register();
::haxe::io::Output_obj::__register();
::sys::io::Process_obj::__register();
::Sys_obj::__register();
::cpp::Lib_obj::__register();
::openfl::_v2::display::IBitmapDrawable_obj::__register();
::openfl::_v2::events::EventDispatcher_obj::__register();
::openfl::_v2::events::IEventDispatcher_obj::__register();
::ApplicationMain_obj::__register();
::openfl::_v2::utils::ByteArray_obj::__init__();
::sys::net::Host_obj::__init__();
::cpp::Lib_obj::__boot();
::cpp::rtti::FieldNumericIntegerLookup_obj::__boot();
::cpp::vm::Mutex_obj::__boot();
::cpp::vm::Thread_obj::__boot();
::haxe::Log_obj::__boot();
::ApplicationMain_obj::__boot();
::openfl::_v2::events::IEventDispatcher_obj::__boot();
::openfl::_v2::events::EventDispatcher_obj::__boot();
::openfl::_v2::display::IBitmapDrawable_obj::__boot();
::Sys_obj::__boot();
::sys::io::Process_obj::__boot();
::haxe::io::Output_obj::__boot();
::sys::io::_Process::Stdin_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::io::Input_obj::__boot();
::sys::io::_Process::Stdout_obj::__boot();
::Std_obj::__boot();
::openfl::_v2::Lib_obj::__boot();
::openfl::_v2::display::DisplayObject_obj::__boot();
::openfl::_v2::display::InteractiveObject_obj::__boot();
::openfl::_v2::display::DisplayObjectContainer_obj::__boot();
::openfl::_v2::display::Sprite_obj::__boot();
::Main_obj::__boot();
::DocumentClass_obj::__boot();
::openfl::_v2::events::Event_obj::__boot();
::openfl::_v2::events::MouseEvent_obj::__boot();
::openfl::_v2::events::TouchEvent_obj::__boot();
::openfl::_v2::display::Stage_obj::__boot();
::ScaledStage_obj::__boot();
::Date_obj::__boot();
::openfl::_v2::AssetLibrary_obj::__boot();
::DefaultAssetLibrary_obj::__boot();
::Lambda_obj::__boot();
::List_obj::__boot();
::IMap_obj::__boot();
::Reflect_obj::__boot();
::StringBuf_obj::__boot();
::StringTools_obj::__boot();
::Type_obj::__boot();
::core::display::DisplayManager_obj::__boot();
::core::display::screen::ScreenManager_obj::__boot();
::core::display::dialog::DialogManager_obj::__boot();
::core::display::ex::ExSprite_obj::__boot();
::openfl::_v2::text::TextField_obj::__boot();
::core::display::ex::Lable_obj::__boot();
::core::display::ex::SimpleButton_obj::__boot();
::core::display::layer::Layer_obj::__boot();
::core::display::layer::LayerManager_obj::__boot();
::core::display::screen::ScreenView_obj::__boot();
::core::display::popup::PopupBase_obj::__boot();
::core::display::screen::Screen_obj::__boot();
::core::display::popup::PopupID_obj::__boot();
::core::display::popup::PopupManager_obj::__boot();
::core::display::screen::ScreenBase_obj::__boot();
::core::display::scene::SceneBase_obj::__boot();
::core::display::scene::SceneID_obj::__boot();
::core::display::scene::SceneView_obj::__boot();
::scene::battle::Battle_obj::__boot();
::scene::battle::BattleView_obj::__boot();
::scene::friendplay::FriendPlay_obj::__boot();
::scene::friendplay::FriendPlayView_obj::__boot();
::scene::home::Home_obj::__boot();
::scene::home::HomeView_obj::__boot();
::scene::loading::LoadFist_obj::__boot();
::scene::loading::LoadFistView_obj::__boot();
::scene::login::Login_obj::__boot();
::scene::login::LoginView_obj::__boot();
::scene::mission::Mission_obj::__boot();
::scene::mission::MissionView_obj::__boot();
::scene::singleplay::SinglePlay_obj::__boot();
::scene::singleplay::SinglePlayView_obj::__boot();
::core::display::screen::ScreenID_obj::__boot();
::core::event::EventEx_obj::__boot();
::core::resource::Defines_obj::__boot();
::core::resource::ResourceID_obj::__boot();
::core::resource::ResourceManager_obj::__boot();
::core::resource::ResourcePath_obj::__boot();
::core::sprites::Animx_obj::__boot();
::openfl::_v2::utils::IDataOutput_obj::__boot();
::openfl::_v2::utils::IMemoryRange_obj::__boot();
::openfl::_v2::utils::IDataInput_obj::__boot();
::openfl::_v2::utils::ByteArray_obj::__boot();
::core::util::ByteArrayEx_obj::__boot();
::core::util::Log_obj::__boot();
::game::_const::EnumConsts_obj::__boot();
::game::data::DTItem_obj::__boot();
::game::data::DataCenter_obj::__boot();
::game::data::InventoryData_obj::__boot();
::game::data::PlayerData_obj::__boot();
::game::network::Server_obj::__boot();
::game::network::packet::Command_obj::__boot();
::game::network::packet::PacketHeader_obj::__boot();
::game::network::packet::RequestPacket_obj::__boot();
::game::network::packet::ResponsePacket_obj::__boot();
::game::tnk::Game_obj::__boot();
::game::tnk::GameConfig_obj::__boot();
::haxe::StackItem_obj::__boot();
::haxe::CallStack_obj::__boot();
::haxe::Resource_obj::__boot();
::haxe::Timer_obj::__boot();
::haxe::Unserializer_obj::__boot();
::haxe::ds::IntMap_obj::__boot();
::haxe::ds::ObjectMap_obj::__boot();
::haxe::ds::StringMap_obj::__boot();
::haxe::format::JsonParser_obj::__boot();
::haxe::io::BytesBuffer_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::zip::Compress_obj::__boot();
::haxe::zip::FlushMode_obj::__boot();
::haxe::zip::Uncompress_obj::__boot();
::motion::actuators::IGenericActuator_obj::__boot();
::motion::actuators::GenericActuator_obj::__boot();
::motion::actuators::SimpleActuator_obj::__boot();
::motion::easing::Expo_obj::__boot();
::motion::easing::IEasing_obj::__boot();
::motion::easing::ExpoEaseOut_obj::__boot();
::motion::Actuate_obj::__boot();
::motion::_Actuate::EffectsOptions_obj::__boot();
::motion::_Actuate::TransformOptions_obj::__boot();
::motion::_Actuate::TweenTimer_obj::__boot();
::motion::MotionPath_obj::__boot();
::motion::IComponentPath_obj::__boot();
::motion::ComponentPath_obj::__boot();
::motion::BezierPath_obj::__boot();
::motion::LinearPath_obj::__boot();
::motion::RotationPath_obj::__boot();
::motion::actuators::FilterActuator_obj::__boot();
::motion::actuators::MethodActuator_obj::__boot();
::motion::actuators::MotionPathActuator_obj::__boot();
::motion::actuators::PropertyDetails_obj::__boot();
::motion::actuators::PropertyPathDetails_obj::__boot();
::motion::actuators::TransformActuator_obj::__boot();
::motion::easing::Elastic_obj::__boot();
::motion::easing::ElasticEaseIn_obj::__boot();
::motion::easing::ElasticEaseInOut_obj::__boot();
::motion::easing::ElasticEaseOut_obj::__boot();
::motion::easing::ExpoEaseIn_obj::__boot();
::motion::easing::ExpoEaseInOut_obj::__boot();
::motion::easing::Quad_obj::__boot();
::motion::easing::QuadEaseIn_obj::__boot();
::motion::easing::QuadEaseInOut_obj::__boot();
::motion::easing::QuadEaseOut_obj::__boot();
::openfl::_v2::AssetCache_obj::__boot();
::openfl::_v2::Assets_obj::__boot();
::openfl::_v2::AssetData_obj::__boot();
::openfl::_v2::AssetType_obj::__boot();
::openfl::_v2::Memory_obj::__boot();
::openfl::_v2::_Vector::Vector_Impl__obj::__boot();
::openfl::_v2::display::Bitmap_obj::__boot();
::openfl::_v2::display::BitmapData_obj::__boot();
::openfl::_v2::display::OptimizedPerlin_obj::__boot();
::openfl::_v2::display::BlendMode_obj::__boot();
::openfl::_v2::display::CapsStyle_obj::__boot();
::openfl::_v2::display::DirectRenderer_obj::__boot();
::openfl::_v2::display::Graphics_obj::__boot();
::openfl::_v2::display::IGraphicsData_obj::__boot();
::openfl::_v2::display::JointStyle_obj::__boot();
::openfl::_v2::display::LineScaleMode_obj::__boot();
::openfl::_v2::display::Loader_obj::__boot();
::openfl::_v2::net::URLLoader_obj::__boot();
::openfl::_v2::display::LoaderInfo_obj::__boot();
::openfl::_v2::display::ManagedStage_obj::__boot();
::openfl::_v2::display::MovieClip_obj::__boot();
::openfl::_v2::display::OpenGLView_obj::__boot();
::openfl::_v2::display::Shape_obj::__boot();
::openfl::_v2::display::SpreadMethod_obj::__boot();
::openfl::_v2::display::TouchInfo_obj::__boot();
::openfl::_v2::display::StageQuality_obj::__boot();
::openfl::_v2::geom::Point_obj::__boot();
::openfl::_v2::display::Tilesheet_obj::__boot();
::openfl::_v2::display::TriangleCulling_obj::__boot();
::openfl::_v2::events::Listener_obj::__boot();
::openfl::_v2::events::HTTPStatusEvent_obj::__boot();
::openfl::_v2::events::KeyboardEvent_obj::__boot();
::openfl::_v2::events::SystemEvent_obj::__boot();
::openfl::_v2::filters::BitmapFilter_obj::__boot();
::openfl::_v2::geom::ColorTransform_obj::__boot();
::openfl::_v2::geom::Matrix_obj::__boot();
::openfl::_v2::geom::Rectangle_obj::__boot();
::openfl::_v2::geom::Transform_obj::__boot();
::openfl::_v2::gl::GL_obj::__boot();
::openfl::_v2::gl::_GL::Float32Data_Impl__obj::__boot();
::openfl::_v2::gl::GLObject_obj::__boot();
::openfl::_v2::gl::GLBuffer_obj::__boot();
::openfl::_v2::gl::GLFramebuffer_obj::__boot();
::openfl::_v2::gl::GLProgram_obj::__boot();
::openfl::_v2::gl::GLRenderbuffer_obj::__boot();
::openfl::_v2::gl::GLShader_obj::__boot();
::openfl::_v2::gl::GLTexture_obj::__boot();
::openfl::_v2::media::Sound_obj::__boot();
::openfl::_v2::media::InternalAudioType_obj::__boot();
::openfl::_v2::media::SoundChannel_obj::__boot();
::openfl::_v2::media::AudioThreadState_obj::__boot();
::openfl::_v2::net::URLRequest_obj::__boot();
::openfl::_v2::net::URLRequestMethod_obj::__boot();
::openfl::_v2::system::PixelFormat_obj::__boot();
::openfl::_v2::system::ScreenMode_obj::__boot();
::openfl::_v2::text::Font_obj::__boot();
::openfl::_v2::text::FontStyle_obj::__boot();
::openfl::_v2::text::FontType_obj::__boot();
::openfl::_v2::text::TextFormat_obj::__boot();
::openfl::_v2::text::TextFormatAlign_obj::__boot();
::openfl::_v2::text::TextLineMetrics_obj::__boot();
::openfl::_v2::ui::Keyboard_obj::__boot();
::openfl::_v2::utils::ArrayBufferView_obj::__boot();
::openfl::_v2::utils::CompressionAlgorithm_obj::__boot();
::openfl::_v2::utils::Float32Array_obj::__boot();
::openfl::_v2::utils::WeakRef_obj::__boot();
::openfl::display::FrameLabel_obj::__boot();
::openfl::display::GradientType_obj::__boot();
::openfl::display::GraphicsPathWinding_obj::__boot();
::openfl::display::InterpolationMethod_obj::__boot();
::openfl::display::PixelSnapping_obj::__boot();
::openfl::display::StageAlign_obj::__boot();
::openfl::display::StageDisplayState_obj::__boot();
::openfl::display::StageScaleMode_obj::__boot();
::openfl::errors::Error_obj::__boot();
::openfl::errors::ArgumentError_obj::__boot();
::openfl::errors::EOFError_obj::__boot();
::openfl::errors::IOError_obj::__boot();
::openfl::errors::RangeError_obj::__boot();
::openfl::errors::SecurityError_obj::__boot();
::openfl::events::TextEvent_obj::__boot();
::openfl::events::ErrorEvent_obj::__boot();
::openfl::events::EventPhase_obj::__boot();
::openfl::events::FocusEvent_obj::__boot();
::openfl::events::IOErrorEvent_obj::__boot();
::openfl::events::JoystickEvent_obj::__boot();
::openfl::events::ProgressEvent_obj::__boot();
::openfl::events::SampleDataEvent_obj::__boot();
::openfl::events::SecurityErrorEvent_obj::__boot();
::openfl::events::UncaughtErrorEvent_obj::__boot();
::openfl::events::UncaughtErrorEvents_obj::__boot();
::openfl::geom::Matrix3D_obj::__boot();
::openfl::geom::Orientation3D_obj::__boot();
::openfl::geom::Vector3D_obj::__boot();
::openfl::media::ID3Info_obj::__boot();
::openfl::media::SoundLoaderContext_obj::__boot();
::openfl::media::SoundTransform_obj::__boot();
::openfl::net::Socket_obj::__boot();
::openfl::net::URLLoaderDataFormat_obj::__boot();
::openfl::net::URLRequestHeader_obj::__boot();
::openfl::net::URLVariables_obj::__boot();
::openfl::system::ApplicationDomain_obj::__boot();
::openfl::system::LoaderContext_obj::__boot();
::openfl::system::SecurityDomain_obj::__boot();
::openfl::text::AntiAliasType_obj::__boot();
::openfl::text::GridFitType_obj::__boot();
::openfl::text::TextFieldAutoSize_obj::__boot();
::openfl::text::TextFieldType_obj::__boot();
::openfl::utils::Endian_obj::__boot();
::sys::net::Host_obj::__boot();
::sys::net::_Socket::SocketInput_obj::__boot();
::sys::net::_Socket::SocketOutput_obj::__boot();
::sys::net::Socket_obj::__boot();
}

