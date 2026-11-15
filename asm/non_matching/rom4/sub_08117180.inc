	THUMB_FUNC_START sub_08117180
sub_08117180: @ 0x08117180
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	add r6, r3, #0
	ldr r4, _081171C0  @ =gRam
	ldr r1, _081171C4  @ =0x00001844
	add r0, r4, r1
	add r2, r3, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	mov r5, #255
	and r0, r0, r5
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _081171B8
	mov r0, #7
	strb r0, [r2]
	ldr r0, _081171C8  @ =0x00000E29
	add r1, r4, r0
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	and r0, r0, r5
	cmp r0, #2
	beq _081171CC
_081171B8:
	add r0, r3, #0
	bl sub_081171E0
	b _081171D6
_081171C0:
	.4byte gRam
_081171C4:
	.4byte 0x00001844
_081171C8:
	.4byte 0x00000E29
_081171CC:
	ldr r1, _081171DC  @ =0x00000E15
	add r0, r4, r1
	add r0, r6, r0
	mov r1, #0
	strb r1, [r0]
_081171D6:
	pop {r4-r6}
	pop {r0}
	bx r0
_081171DC:
	.4byte 0x00000E15
	THUMB_FUNC_END sub_08117180

