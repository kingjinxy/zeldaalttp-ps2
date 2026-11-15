	THUMB_FUNC_START sub_0810E938
sub_0810E938: @ 0x0810E938
	push {r4,r5,lr}
	add r4, r1, #0
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r0, r5, #0
	bl sub_0810F024
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810EA14
	add r0, r5, #0
	bl sub_080C5080
	add r0, r5, #0
	bl sub_0810F060
	add r0, r5, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810E994
	ldr r1, _0810E988  @ =gUnknown_03003E70
	mov r0, #1
	strb r0, [r1]
	ldr r0, _0810E98C  @ =gRam
	ldr r1, _0810E990  @ =0x00000546
	add r0, r0, r1
	ldrh r0, [r0]
	mov r1, #129
	lsl r1, r1, #7
	and r1, r1, r0
	neg r0, r1
	orr r0, r0, r1
	lsr r0, r0, #31
	b _0810E996
	.byte 0x00
	.byte 0x00
_0810E988:
	.4byte gUnknown_03003E70
_0810E98C:
	.4byte gRam
_0810E990:
	.4byte 0x00000546
_0810E994:
	mov r0, #0
_0810E996:
	cmp r0, #0
	bne _0810E9B0
	ldr r0, _0810E9A8  @ =gRam
	ldr r1, _0810E9AC  @ =0x00001132
	add r0, r0, r1
	add r0, r5, r0
	mov r1, #28
	strb r1, [r0]
	b _0810EA14
_0810E9A8:
	.4byte gRam
_0810E9AC:
	.4byte 0x00001132
_0810E9B0:
	ldr r0, _0810E9C0  @ =gShield
	ldrb r0, [r0]
	cmp r0, #1
	bls _0810E9C8
	add r0, r5, #0
	ldr r1, _0810E9C4  @ =0x00000169
	b _0810E9DA
	.byte 0x00
	.byte 0x00
_0810E9C0:
	.4byte gShield
_0810E9C4:
	.4byte 0x00000169
_0810E9C8:
	lsl r4, r4, #16
	asr r4, r4, #16
	bl sub_080AA868
	sub r0, r0, r4
	cmp r0, #0
	bge _0810E9F0
	add r0, r5, #0
	ldr r1, _0810E9EC  @ =0x0000017F
_0810E9DA:
	mov r2, #0
	bl sub_080C9564
	add r0, r5, #0
	mov r1, #64
	bl sub_080CF0AC
	b _0810EA14
	.byte 0x00
	.byte 0x00
_0810E9EC:
	.4byte 0x0000017F
_0810E9F0:
	neg r0, r4
	bl sub_080AA83C
	ldr r4, _0810EA1C  @ =gRam
	ldr r1, _0810EA20  @ =0x00000FA2
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	add r0, r5, #0
	mov r1, #5
	bl sub_0810EF44
	ldr r0, _0810EA24  @ =0x00001132
	add r4, r4, r0
	add r4, r5, r4
	mov r0, #28
	strb r0, [r4]
_0810EA14:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810EA1C:
	.4byte gRam
_0810EA20:
	.4byte 0x00000FA2
_0810EA24:
	.4byte 0x00001132
	THUMB_FUNC_END sub_0810E938

