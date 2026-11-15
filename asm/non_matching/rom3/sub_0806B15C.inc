	THUMB_FUNC_START sub_0806B15C
sub_0806B15C: @ 0x0806B15C
	push {r4,r5,lr}
	ldr r5, _0806B1B8  @ =gRam
	ldr r0, _0806B1BC  @ =0x000009E8
	add r1, r5, r0
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	lsr r4, r0, #16
	cmp r4, #0
	bne _0806B1F4
	bl sub_0812FE58
	ldr r2, _0806B1C0  @ =gUnknown_0200229B
	ldrb r0, [r2]
	mov r1, #32
	orr r0, r0, r1
	strb r0, [r2]
	ldr r0, _0806B1C4  @ =0x00000AB2
	add r1, r5, r0
	ldr r0, _0806B1C8  @ =0x0000FFFF
	strh r0, [r1]
	ldr r0, _0806B1CC  @ =0x000009AD
	add r1, r5, r0
	mov r0, #0
	strb r0, [r1]
	ldr r1, _0806B1D0  @ =0x00000A4C
	add r0, r5, r1
	strh r4, [r0]
	mov r1, #201
	lsl r1, r1, #4
	add r0, r5, r1
	strh r4, [r0]
	ldr r0, _0806B1D4  @ =0x000009AC
	add r1, r5, r0
	mov r0, #9
	strb r0, [r1]
	ldr r0, _0806B1D8  @ =gMoonPearl
	ldrb r0, [r0]
	cmp r0, #0
	bne _0806B1E0
	ldr r0, _0806B1DC  @ =0x00000A3C
	add r1, r5, r0
	mov r0, #12
	b _0806B1E6
	.byte 0x00
	.byte 0x00
_0806B1B8:
	.4byte gRam
_0806B1BC:
	.4byte 0x000009E8
_0806B1C0:
	.4byte gUnknown_0200229B
_0806B1C4:
	.4byte 0x00000AB2
_0806B1C8:
	.4byte 0x0000FFFF
_0806B1CC:
	.4byte 0x000009AD
_0806B1D0:
	.4byte 0x00000A4C
_0806B1D4:
	.4byte 0x000009AC
_0806B1D8:
	.4byte gMoonPearl
_0806B1DC:
	.4byte 0x00000A3C
_0806B1E0:
	ldr r0, _0806B1FC  @ =0x00000A3C
	add r1, r5, r0
	mov r0, #14
_0806B1E6:
	strh r0, [r1]
	ldr r0, _0806B200  @ =gRam
	mov r1, #179
	lsl r1, r1, #5
	add r0, r0, r1
	mov r1, #6
	strb r1, [r0]
_0806B1F4:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806B1FC:
	.4byte 0x00000A3C
_0806B200:
	.4byte gRam
	THUMB_FUNC_END sub_0806B15C

