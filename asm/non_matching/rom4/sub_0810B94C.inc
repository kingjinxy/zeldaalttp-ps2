	THUMB_FUNC_START sub_0810B94C
sub_0810B94C: @ 0x0810B94C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _0810B994  @ =gRam
	ldr r1, _0810B998  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	add r3, r2, #0
	cmp r0, #0
	bne _0810B9BC
	ldr r2, _0810B99C  @ =gUnknown_0817CBD8
	ldr r5, _0810B9A0  @ =0x00000F62
	add r0, r3, r5
	add r0, r4, r0
	ldrb r1, [r0]
	lsl r1, r1, #1
	add r1, r1, r2
	ldr r2, _0810B9A4  @ =0x00001624
	add r0, r3, r2
	ldrb r2, [r0]
	ldr r5, _0810B9A8  @ =0x00001625
	add r0, r3, r5
	ldrb r0, [r0]
	lsl r0, r0, #8
	ldrh r1, [r1]
	orr r2, r2, r0
	cmp r1, r2
	bcs _0810B9B0
	ldr r0, _0810B9AC  @ =0x00000F12
	add r1, r3, r0
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	b _0810B9BA
_0810B994:
	.4byte gRam
_0810B998:
	.4byte 0x00000996
_0810B99C:
	.4byte gUnknown_0817CBD8
_0810B9A0:
	.4byte 0x00000F62
_0810B9A4:
	.4byte 0x00001624
_0810B9A8:
	.4byte 0x00001625
_0810B9AC:
	.4byte 0x00000F12
_0810B9B0:
	ldr r2, _0810B9DC  @ =0x00000F12
	add r1, r3, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
_0810B9BA:
	strb r0, [r1]
_0810B9BC:
	ldr r5, _0810B9E0  @ =0x00000996
	add r0, r3, r5
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _0810B9D6
	ldr r0, _0810B9E4  @ =0x00000F22
	add r1, r3, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0810B9D6:
	pop {r4,r5}
	pop {r0}
	bx r0
_0810B9DC:
	.4byte 0x00000F12
_0810B9E0:
	.4byte 0x00000996
_0810B9E4:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_0810B94C

