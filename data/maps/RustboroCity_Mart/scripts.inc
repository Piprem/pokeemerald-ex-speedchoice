RustboroCity_Mart_MapScripts:: @ 8214F05
	.byte 0

RustboroCity_Mart_EventScript_Clerk:: @ 8214F06
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_unset FLAG_MET_DEVON_EMPLOYEE, RustboroCity_Mart_EventScript_PokemartBasic
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, RustboroCity_Mart_EventScript_PokemartExpanded
	end

RustboroCity_Mart_EventScript_PokemartBasic:: @ 8214F21
	pokemart RustboroCitySpeedchoice_Mart_Items1
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
RustboroCity_Mart_Pokemart_Basic: @ 8214F30
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_NONE
	release
	end

	.align 2
RustboroCitySpeedchoice_Mart_Items1:: @ 8157C00
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_SUN_STONE
    .2byte ITEM_MOON_STONE
    .2byte ITEM_FIRE_STONE
    .2byte ITEM_THUNDER_STONE
    .2byte ITEM_WATER_STONE
    .2byte ITEM_LEAF_STONE
    .2byte ITEM_DAWN_STONE
    .2byte ITEM_DUSK_STONE
    .2byte ITEM_LEAF_STONE
    .2byte ITEM_SHINY_STONE
    .2byte ITEM_ICE_STONE
	.2byte ITEM_UP_GRADE
    .2byte ITEM_DUBIOUS_DISC
    .2byte ITEM_DRAGON_SCALE
    .2byte ITEM_DEEP_SEA_TOOTH
    .2byte ITEM_DEEP_SEA_SCALE
    .2byte ITEM_METAL_COAT
    .2byte ITEM_KINGS_ROCK
    .2byte ITEM_ELECTIRIZER
    .2byte ITEM_MAGMARIZER
    .2byte ITEM_OVAL_STONE
    .2byte ITEM_PROTECTOR
    .2byte ITEM_RAZOR_CLAW
    .2byte ITEM_RAZOR_FANG
    .2byte ITEM_REAPER_CLOTH
    .2byte ITEM_PRISM_SCALE
	.2byte ITEM_TAMATO_BERRY
	.2byte ITEM_KELPSY_BERRY
	.2byte ITEM_QUALOT_BERRY
	.2byte ITEM_HONDEW_BERRY
	.2byte ITEM_GREPA_BERRY
	.2byte ITEM_POMEG_BERRY
	.2byte ITEM_NONE
	release
	end

RustboroCity_Mart_EventScript_PokemartExpanded:: @ 8214F48
	pokemart RustboroCitySpeedchoice_Mart_Items2
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
RustboroCity_Mart_Pokemart_Expanded: @ 8214F58
	.2byte ITEM_POKE_BALL
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_NONE
	release
	end

	.align 2
RustboroCitySpeedchoice_Mart_Items2:: @ 8157C28
	.2byte ITEM_POKE_BALL
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_SUN_STONE
    .2byte ITEM_MOON_STONE
    .2byte ITEM_FIRE_STONE
    .2byte ITEM_THUNDER_STONE
    .2byte ITEM_WATER_STONE
    .2byte ITEM_LEAF_STONE
    .2byte ITEM_DAWN_STONE
    .2byte ITEM_DUSK_STONE
    .2byte ITEM_LEAF_STONE
    .2byte ITEM_SHINY_STONE
    .2byte ITEM_ICE_STONE
	.2byte ITEM_UP_GRADE
    .2byte ITEM_DUBIOUS_DISC
    .2byte ITEM_DRAGON_SCALE
    .2byte ITEM_DEEP_SEA_TOOTH
    .2byte ITEM_DEEP_SEA_SCALE
    .2byte ITEM_METAL_COAT
    .2byte ITEM_KINGS_ROCK
    .2byte ITEM_ELECTIRIZER
    .2byte ITEM_MAGMARIZER
    .2byte ITEM_OVAL_STONE
    .2byte ITEM_PROTECTOR
    .2byte ITEM_RAZOR_CLAW
    .2byte ITEM_RAZOR_FANG
    .2byte ITEM_REAPER_CLOTH
    .2byte ITEM_PRISM_SCALE
	.2byte ITEM_TAMATO_BERRY
	.2byte ITEM_KELPSY_BERRY
	.2byte ITEM_QUALOT_BERRY
	.2byte ITEM_HONDEW_BERRY
	.2byte ITEM_GREPA_BERRY
	.2byte ITEM_POMEG_BERRY
	.2byte ITEM_NONE
	release
	end

RustboroCity_Mart_EventScript_PokefanF:: @ 8214F74
	msgbox RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish, MSGBOX_NPC
	end

RustboroCity_Mart_EventScript_Boy:: @ 8214F7D
	msgbox RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead, MSGBOX_NPC
	end

RustboroCity_Mart_EventScript_BugCatcher:: @ 8214F86
	msgbox RustboroCity_Mart_Text_GettingEscapeRopeJustInCase, MSGBOX_NPC
	end

RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish: @ 8214F8F
	.string "I'm buying some PARLYZ HEALS and\n"
	.string "ANTIDOTES.\p"
	.string "Just in case I run into SHROOMISH\n"
	.string "in PETALBURG WOODS.$"

RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead: @ 8214FF1
	.string "My POKéMON evolved.\n"
	.string "It has a lot of HP now.\p"
	.string "I should buy SUPER POTIONS for it\n"
	.string "instead of ordinary POTIONS.$"

RustboroCity_Mart_Text_GettingEscapeRopeJustInCase: @ 821505C
	.string "I'm getting an ESCAPE ROPE just in\n"
	.string "case I get lost in a cave.\p"
	.string "I just need to use it to get back to\n"
	.string "the entrance.$"

