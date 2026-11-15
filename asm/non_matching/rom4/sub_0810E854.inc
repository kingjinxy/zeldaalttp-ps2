	THUMB_FUNC_START sub_0810E854
sub_0810E854: @ 0x0810E854
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r0, r5, #0
	bl sub_0810F024
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810E924
	add r0, r5, #0
	bl sub_080C5080
	add r0, r5, #0
	bl sub_0810F060
	add r0, r5, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810E8AC
	ldr r1, _0810E8A0  @ =gUnknown_03003E70
	mov r0, #1
	strb r0, [r1]
	ldr r0, _0810E8A4  @ =gRam
	ldr r1, _0810E8A8  @ =0x00000546
	add r0, r0, r1
	ldrh r0, [r0]
	mov r1, #129
	lsl r1, r1, #7
	and r1, r1, r0
	neg r0, r1
	orr r0, r0, r1
	lsr r0, r0, #31
	b _0810E8AE
_0810E8A0:
	.4byte gUnknown_03003E70
_0810E8A4:
	.4byte gRam
_0810E8A8:
	.4byte 0x00000546
_0810E8AC:
	mov r0, #0
_0810E8AE:
	cmp r0, #0
	bne _0810E8C8
	ldr r0, _0810E8C0  @ =gRam
	ldr r1, _0810E8C4  @ =0x00001132
	add r0, r0, r1
	add r0, r5, r0
	mov r1, #28
	strb r1, [r0]
	b _0810E924
_0810E8C0:
	.4byte gRam
_0810E8C4:
	.4byte 0x00001132
_0810E8C8:
	ldr r0, _0810E8D8  @ =gShield
	ldrb r6, [r0]
	cmp r6, #0
	beq _0810E8DC
	add r0, r5, #0
	bl sub_0810F0BC
	b _0810E924
_0810E8D8:
	.4byte gShield
_0810E8DC:
	bl sub_080AA868
	sub r0, r0, #50
	cmp r0, #0
	bge _0810E900
	add r0, r5, #0
	ldr r1, _0810E8FC  @ =0x0000017F
	mov r2, #0
	bl sub_080C9564
	add r0, r5, #0
	mov r1, #64
	bl sub_080CF0AC
	b _0810E924
	.byte 0x00
	.byte 0x00
_0810E8FC:
	.4byte 0x0000017F
_0810E900:
	mov r0, #50
	neg r0, r0
	bl sub_080AA83C
	ldr r4, _0810E92C  @ =gRam
	ldr r1, _0810E930  @ =0x00000FA2
	add r0, r4, r1
	add r0, r5, r0
	strb r6, [r0]
	add r0, r5, #0
	mov r1, #4
	bl sub_0810EF44
	ldr r0, _0810E934  @ =0x00001132
	add r4, r4, r0
	add r4, r5, r4
	mov r0, #28
	strb r0, [r4]
_0810E924:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810E92C:
	.4byte gRam
_0810E930:
	.4byte 0x00000FA2
_0810E934:
	.4byte 0x00001132
	THUMB_FUNC_END sub_0810E854

