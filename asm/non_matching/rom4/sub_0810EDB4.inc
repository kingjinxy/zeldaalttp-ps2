	THUMB_FUNC_START sub_0810EDB4
sub_0810EDB4: @ 0x0810EDB4
	push {r4-r6,lr}
	add r4, r1, #0
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r0, r5, #0
	bl sub_0810F024
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810EE6E
	add r0, r5, #0
	bl sub_080C5080
	add r0, r5, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810EE08
	ldr r1, _0810EDFC  @ =gUnknown_03003E70
	mov r0, #1
	strb r0, [r1]
	ldr r0, _0810EE00  @ =gRam
	ldr r1, _0810EE04  @ =0x00000546
	add r0, r0, r1
	ldrh r0, [r0]
	mov r1, #129
	lsl r1, r1, #7
	and r1, r1, r0
	neg r0, r1
	orr r0, r0, r1
	lsr r0, r0, #31
	b _0810EE0A
_0810EDFC:
	.4byte gUnknown_03003E70
_0810EE00:
	.4byte gRam
_0810EE04:
	.4byte 0x00000546
_0810EE08:
	mov r0, #0
_0810EE0A:
	cmp r0, #0
	beq _0810EE6E
	bl sub_080C99F8
	lsl r0, r0, #24
	cmp r0, #0
	bge _0810EE20
	mov r1, #184
	lsl r1, r1, #1
	add r0, r5, #0
	b _0810EE38
_0810EE20:
	ldr r0, _0810EE48  @ =gUnknown_0817D0BC
	lsl r6, r4, #2
	add r0, r6, r0
	mov r1, #0
	ldrsh r4, [r0, r1]
	bl sub_080AA868
	sub r0, r0, r4
	cmp r0, #0
	bge _0810EE50
	add r0, r5, #0
	ldr r1, _0810EE4C  @ =0x0000017F
_0810EE38:
	mov r2, #0
	bl sub_080C9564
	add r0, r5, #0
	mov r1, #64
	bl sub_080CF0AC
	b _0810EE6E
_0810EE48:
	.4byte gUnknown_0817D0BC
_0810EE4C:
	.4byte 0x0000017F
_0810EE50:
	neg r0, r4
	bl sub_080AA83C
	ldr r0, _0810EE74  @ =gRam
	ldr r1, _0810EE78  @ =0x00000FA2
	add r0, r0, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	ldr r0, _0810EE7C  @ =gUnknown_0817D0C4
	add r0, r6, r0
	ldrb r1, [r0]
	add r0, r5, #0
	bl sub_0810EF44
_0810EE6E:
	pop {r4-r6}
	pop {r0}
	bx r0
_0810EE74:
	.4byte gRam
_0810EE78:
	.4byte 0x00000FA2
_0810EE7C:
	.4byte gUnknown_0817D0C4
	THUMB_FUNC_END sub_0810EDB4

