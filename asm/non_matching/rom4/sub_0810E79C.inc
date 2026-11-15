	THUMB_FUNC_START sub_0810E79C
sub_0810E79C: @ 0x0810E79C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_0810F024
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810E844
	add r0, r4, #0
	bl sub_080C5080
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810E7F0
	ldr r1, _0810E7E4  @ =gUnknown_03003E70
	mov r0, #1
	strb r0, [r1]
	ldr r0, _0810E7E8  @ =gRam
	ldr r1, _0810E7EC  @ =0x00000546
	add r0, r0, r1
	ldrh r0, [r0]
	mov r1, #129
	lsl r1, r1, #7
	and r1, r1, r0
	neg r0, r1
	orr r0, r0, r1
	lsr r0, r0, #31
	b _0810E7F2
	.byte 0x00
	.byte 0x00
_0810E7E4:
	.4byte gUnknown_03003E70
_0810E7E8:
	.4byte gRam
_0810E7EC:
	.4byte 0x00000546
_0810E7F0:
	mov r0, #0
_0810E7F2:
	cmp r0, #0
	beq _0810E844
	bl sub_080C99F8
	lsl r0, r0, #24
	cmp r0, #0
	bge _0810E816
	mov r1, #184
	lsl r1, r1, #1
	add r0, r4, #0
	mov r2, #0
	bl sub_080C9564
	add r0, r4, #0
	mov r1, #64
	bl sub_080CF0AC
	b _0810E844
_0810E816:
	bl sub_080AA868
	sub r0, r0, #150
	cmp r0, #0
	bge _0810E828
	add r0, r4, #0
	bl sub_0810F000
	b _0810E844
_0810E828:
	mov r0, #150
	neg r0, r0
	bl sub_080AA83C
	ldr r0, _0810E84C  @ =gRam
	ldr r1, _0810E850  @ =0x00000FA2
	add r0, r0, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #46
	bl sub_0810EF44
_0810E844:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810E84C:
	.4byte gRam
_0810E850:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_0810E79C

