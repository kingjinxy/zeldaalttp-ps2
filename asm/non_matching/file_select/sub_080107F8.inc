	THUMB_FUNC_START sub_080107F8
sub_080107F8: @ 0x080107F8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _08010828  @ =gUnknown_02016D60
	mov r5, #0
	strb r0, [r4, #31]
	bl sub_080100E4
	mov r0, #255
	strb r0, [r4, #30]
	strb r5, [r4, #26]
	ldr r1, _0801082C  @ =gUnknown_03005050
	mov r0, #2
	strb r0, [r1]
	ldr r1, _08010830  @ =gSubState
	mov r0, #1
	strb r0, [r1]
	mov r0, #148
	bl play_sound
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08010828:
	.4byte gUnknown_02016D60
_0801082C:
	.4byte gUnknown_03005050
_08010830:
	.4byte gSubState
	THUMB_FUNC_END sub_080107F8

