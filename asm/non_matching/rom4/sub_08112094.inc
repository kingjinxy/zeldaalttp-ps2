	THUMB_FUNC_START sub_08112094
sub_08112094: @ 0x08112094
	push {r4,r5,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r5, _081120EC  @ =gRam
	ldr r1, _081120F0  @ =0x00000F62
	add r0, r5, r1
	add r0, r4, r0
	mov r2, #0
	strb r2, [r0]
	add r1, r1, #96
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #48
	strb r1, [r0]
	ldr r1, _081120F4  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	ldr r1, _081120F8  @ =gUnknown_02010990
	mov r0, #39
	strb r0, [r1]
	ldr r1, _081120FC  @ =0x00000F92
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	bl GetRandomInt
	ldr r1, _08112100  @ =0x00000F72
	add r5, r5, r1
	add r4, r4, r5
	mov r1, #7
	and r1, r1, r0
	add r1, r1, #1
	strb r1, [r4]
	cmp r1, #3
	bls _081120E4
	mov r0, #1
	strb r0, [r4]
_081120E4:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081120EC:
	.4byte gRam
_081120F0:
	.4byte 0x00000F62
_081120F4:
	.4byte 0x00000F52
_081120F8:
	.4byte gUnknown_02010990
_081120FC:
	.4byte 0x00000F92
_08112100:
	.4byte 0x00000F72
	THUMB_FUNC_END sub_08112094

