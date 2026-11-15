	THUMB_FUNC_START sub_0810953C
sub_0810953C: @ 0x0810953C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	add r5, r3, #0
	ldr r4, _08109580  @ =gRam
	ldr r1, _08109584  @ =0x00001022
	add r0, r4, r1
	add r1, r3, r0
	ldrb r0, [r1]
	cmp r0, #160
	bhi _08109556
	mov r0, #160
	strb r0, [r1]
_08109556:
	ldr r0, _08109588  @ =0x00000FC2
	add r6, r4, r0
	add r2, r3, r6
	ldrb r0, [r2]
	lsl r0, r0, #24
	cmp r0, #0
	beq _08109594
	ldr r1, _0810958C  @ =0x00000D18
	add r2, r4, r1
	ldr r1, _08109590  @ =gUnknown_0817C2BC
	lsr r0, r0, #28
	add r0, r0, r1
	ldrb r0, [r0]
	ldrb r1, [r2]
	add r0, r0, r1
	strb r0, [r2]
	add r0, r3, #0
	bl sub_0810A538
	b _081095CC
	.byte 0x00
	.byte 0x00
_08109580:
	.4byte gRam
_08109584:
	.4byte 0x00001022
_08109588:
	.4byte 0x00000FC2
_0810958C:
	.4byte 0x00000D18
_08109590:
	.4byte gUnknown_0817C2BC
_08109594:
	ldr r0, _081095D4  @ =0x00000F52
	add r4, r4, r0
	add r1, r5, r4
	mov r0, #9
	strb r0, [r1]
	mov r0, #127
	strb r0, [r2]
	add r0, r5, #0
	bl sub_0810A70C
	mov r1, #8
	add r7, r4, #0
	add r4, r6, #0
	ldr r5, _081095D8  @ =gUnknown_0817C2CC
	mov r3, #2
_081095B2:
	lsl r0, r1, #24
	asr r0, r0, #24
	add r1, r0, r7
	strb r3, [r1]
	add r2, r0, r4
	sub r0, r0, #1
	add r1, r0, r5
	ldrb r1, [r1]
	strb r1, [r2]
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bne _081095B2
_081095CC:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081095D4:
	.4byte 0x00000F52
_081095D8:
	.4byte gUnknown_0817C2CC
	THUMB_FUNC_END sub_0810953C

