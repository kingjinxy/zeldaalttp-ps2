	THUMB_FUNC_START sub_08092B60
sub_08092B60: @ 0x08092B60
	push {r4,lr}
	ldr r4, _08092BC8  @ =gRam
	ldr r1, _08092BCC  @ =0x00001750
	add r0, r4, r1
	mov r1, #0
	strb r1, [r0]
	ldr r2, _08092BD0  @ =0x000017DF
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _08092BD4  @ =0x000017B6
	add r0, r4, r3
	strb r1, [r0]
	bl sub_08092B0C
	mov r2, #0
	ldr r0, _08092BD8  @ =0x00001711
	add r4, r4, r0
	ldrb r0, [r4]
	cmp r0, #0
	beq _08092B92
	ldr r0, _08092BDC  @ =gMoonPearl
	ldrb r0, [r0]
	cmp r0, #0
	bne _08092B92
	mov r2, #23
_08092B92:
	ldr r0, _08092BC8  @ =gRam
	ldr r3, _08092BE0  @ =0x00001718
	add r1, r0, r3
	mov r3, #0
	strb r2, [r1]
	ldr r4, _08092BE4  @ =0x000017CE
	add r1, r0, r4
	ldrb r2, [r1]
	ldr r4, _08092BE8  @ =0x000016CC
	add r1, r0, r4
	strb r2, [r1]
	ldr r2, _08092BEC  @ =0x000017D4
	add r1, r0, r2
	strb r3, [r1]
	ldr r4, _08092BF0  @ =0x0000180D
	add r1, r0, r4
	strb r3, [r1]
	sub r2, r2, #191
	add r1, r0, r2
	strb r3, [r1]
	sub r4, r4, #247
	add r0, r0, r4
	strb r3, [r0]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08092BC8:
	.4byte gRam
_08092BCC:
	.4byte 0x00001750
_08092BD0:
	.4byte 0x000017DF
_08092BD4:
	.4byte 0x000017B6
_08092BD8:
	.4byte 0x00001711
_08092BDC:
	.4byte gMoonPearl
_08092BE0:
	.4byte 0x00001718
_08092BE4:
	.4byte 0x000017CE
_08092BE8:
	.4byte 0x000016CC
_08092BEC:
	.4byte 0x000017D4
_08092BF0:
	.4byte 0x0000180D
	THUMB_FUNC_END sub_08092B60

