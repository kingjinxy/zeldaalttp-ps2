	THUMB_FUNC_START sub_0810EA28
sub_0810EA28: @ 0x0810EA28
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r0, r5, #0
	bl sub_0810F024
	ldr r4, _0810EA98  @ =gRam
	ldr r0, _0810EA9C  @ =gUnknown_03003E74
	ldrh r1, [r0]
	add r1, r1, #3
	lsl r1, r1, #3
	add r1, r1, r4
	ldr r0, _0810EAA0  @ =0x00000554
	add r1, r1, r0
	ldrh r3, [r1]
	lsl r0, r3, #22
	lsr r0, r0, #22
	mov r6, #192
	lsl r6, r6, #2
	add r2, r6, #0
	eor r2, r2, r0
	ldr r0, _0810EAA4  @ =0xFFFFFC00
	and r0, r0, r3
	orr r0, r0, r2
	strh r0, [r1]
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810EB32
	add r0, r5, #0
	bl sub_080C5080
	add r0, r5, #0
	bl sub_0810F060
	add r0, r5, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810EAB0
	ldr r1, _0810EAA8  @ =gUnknown_03003E70
	mov r0, #1
	strb r0, [r1]
	ldr r1, _0810EAAC  @ =0x00000546
	add r0, r4, r1
	ldrh r0, [r0]
	mov r1, #129
	lsl r1, r1, #7
	and r1, r1, r0
	neg r0, r1
	orr r0, r0, r1
	lsr r0, r0, #31
	b _0810EAB2
_0810EA98:
	.4byte gRam
_0810EA9C:
	.4byte gUnknown_03003E74
_0810EAA0:
	.4byte 0x00000554
_0810EAA4:
	.4byte 0xFFFFFC00
_0810EAA8:
	.4byte gUnknown_03003E70
_0810EAAC:
	.4byte 0x00000546
_0810EAB0:
	mov r0, #0
_0810EAB2:
	cmp r0, #0
	bne _0810EACC
	ldr r0, _0810EAC4  @ =gRam
	ldr r6, _0810EAC8  @ =0x00001132
	add r0, r0, r6
	add r0, r5, r0
	mov r1, #28
	strb r1, [r0]
	b _0810EB32
_0810EAC4:
	.4byte gRam
_0810EAC8:
	.4byte 0x00001132
_0810EACC:
	ldr r0, _0810EADC  @ =gShield
	ldrb r0, [r0]
	cmp r0, #2
	bls _0810EAE4
	add r0, r5, #0
	ldr r1, _0810EAE0  @ =0x00000169
	b _0810EAF2
	.byte 0x00
	.byte 0x00
_0810EADC:
	.4byte gShield
_0810EAE0:
	.4byte 0x00000169
_0810EAE4:
	bl sub_080AA868
	sub r0, r0, #100
	cmp r0, #0
	bge _0810EB08
	add r0, r5, #0
	ldr r1, _0810EB04  @ =0x0000017F
_0810EAF2:
	mov r2, #0
	bl sub_080C9564
	add r0, r5, #0
	mov r1, #64
	bl sub_080CF0AC
	b _0810EB32
	.byte 0x00
	.byte 0x00
_0810EB04:
	.4byte 0x0000017F
_0810EB08:
	mov r0, #100
	neg r0, r0
	bl sub_080AA83C
	ldr r4, _0810EB38  @ =gRam
	ldr r1, _0810EB3C  @ =0x00000FA2
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	ldr r0, _0810EB40  @ =gUnknown_020023F1
	strb r1, [r0]
	add r0, r5, #0
	mov r1, #6
	bl sub_0810EF44
	ldr r6, _0810EB44  @ =0x00001132
	add r4, r4, r6
	add r4, r5, r4
	mov r0, #28
	strb r0, [r4]
_0810EB32:
	pop {r4-r6}
	pop {r0}
	bx r0
_0810EB38:
	.4byte gRam
_0810EB3C:
	.4byte 0x00000FA2
_0810EB40:
	.4byte gUnknown_020023F1
_0810EB44:
	.4byte 0x00001132
	THUMB_FUNC_END sub_0810EA28

