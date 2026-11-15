	THUMB_FUNC_START sub_08104974
sub_08104974: @ 0x08104974
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r5, _081049B0  @ =gRam
	ldr r2, _081049B4  @ =0x00001052
	add r1, r5, r2
	add r0, r0, r1
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #63
	and r1, r1, r0
	cmp r1, #0
	bne _081049CC
	ldr r4, _081049B8  @ =gUnknown_0817BCCA
	bl GetRandomInt
	mov r1, #15
	and r1, r1, r0
	add r1, r1, r4
	ldr r2, _081049BC  @ =0x00000F52
	add r0, r5, r2
	ldrb r1, [r1]
	add r1, r0, r1
	ldrb r0, [r1]
	cmp r0, #0
	beq _081049C0
	sub r0, r0, #1
	strb r0, [r1]
	b _081049CC
_081049B0:
	.4byte gRam
_081049B4:
	.4byte 0x00001052
_081049B8:
	.4byte gUnknown_0817BCCA
_081049BC:
	.4byte 0x00000F52
_081049C0:
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #21
	mov r1, #0
	bl sub_0812A324
_081049CC:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08104974

	.byte 0x00
	.byte 0x00
