	THUMB_FUNC_START sub_0810ECDC
sub_0810ECDC: @ 0x0810ECDC
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_0810F024
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810EDA4
	add r0, r4, #0
	bl sub_080C5080
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810ED30
	ldr r1, _0810ED24  @ =gUnknown_03003E70
	mov r0, #1
	strb r0, [r1]
	ldr r0, _0810ED28  @ =gRam
	ldr r1, _0810ED2C  @ =0x00000546
	add r0, r0, r1
	ldrh r0, [r0]
	mov r1, #129
	lsl r1, r1, #7
	and r1, r1, r0
	neg r0, r1
	orr r0, r0, r1
	lsr r0, r0, #31
	b _0810ED32
	.byte 0x00
	.byte 0x00
_0810ED24:
	.4byte gUnknown_03003E70
_0810ED28:
	.4byte gRam
_0810ED2C:
	.4byte 0x00000546
_0810ED30:
	mov r0, #0
_0810ED32:
	cmp r0, #0
	beq _0810EDA4
	ldr r1, _0810ED54  @ =gUnknown_0816B588
	ldr r0, _0810ED58  @ =gBombUpgrades
	ldrb r0, [r0]
	add r0, r0, r1
	ldr r1, _0810ED5C  @ =gBombs
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _0810ED64
	ldr r1, _0810ED60  @ =0x00000171
	add r0, r4, #0
	mov r2, #0
	bl sub_080C9164
	b _0810ED78
_0810ED54:
	.4byte gUnknown_0816B588
_0810ED58:
	.4byte gBombUpgrades
_0810ED5C:
	.4byte gBombs
_0810ED60:
	.4byte 0x00000171
_0810ED64:
	bl sub_080AA868
	sub r0, r0, #50
	cmp r0, #0
	bge _0810ED88
	add r0, r4, #0
	ldr r1, _0810ED84  @ =0x0000017F
	mov r2, #0
	bl sub_080C9564
_0810ED78:
	add r0, r4, #0
	mov r1, #64
	bl sub_080CF0AC
	b _0810EDA4
	.byte 0x00
	.byte 0x00
_0810ED84:
	.4byte 0x0000017F
_0810ED88:
	mov r0, #50
	neg r0, r0
	bl sub_080AA83C
	ldr r0, _0810EDAC  @ =gRam
	ldr r1, _0810EDB0  @ =0x00000FA2
	add r0, r0, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #49
	bl sub_0810EF44
_0810EDA4:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810EDAC:
	.4byte gRam
_0810EDB0:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_0810ECDC

