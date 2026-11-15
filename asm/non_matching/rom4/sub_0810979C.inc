	THUMB_FUNC_START sub_0810979C
sub_0810979C: @ 0x0810979C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r2, r0, #0
	ldr r4, _081097F8  @ =gRam
	ldr r1, _081097FC  @ =0x00001022
	add r0, r4, r1
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #208
	bhi _081097B6
	mov r0, #208
	strb r0, [r1]
_081097B6:
	ldr r3, _08109800  @ =0x00000F92
	add r0, r4, r3
	add r5, r2, r0
	ldr r1, _08109804  @ =gUnknown_0817C31E
	add r3, r3, #32
	add r0, r4, r3
	add r0, r2, r0
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r5]
	ldr r1, _08109808  @ =0x00000FC2
	add r0, r4, r1
	add r3, r2, r0
	ldrb r0, [r3]
	cmp r0, #0
	beq _081097F2
	ldr r0, _0810980C  @ =0x00001172
	add r1, r4, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldrb r1, [r3]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _081097F2
	mov r0, #255
	strb r0, [r5]
_081097F2:
	pop {r4,r5}
	pop {r0}
	bx r0
_081097F8:
	.4byte gRam
_081097FC:
	.4byte 0x00001022
_08109800:
	.4byte 0x00000F92
_08109804:
	.4byte gUnknown_0817C31E
_08109808:
	.4byte 0x00000FC2
_0810980C:
	.4byte 0x00001172
	THUMB_FUNC_END sub_0810979C

