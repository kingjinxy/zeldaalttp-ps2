	THUMB_FUNC_START sub_080E1E70
sub_080E1E70: @ 0x080E1E70
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _080E1EBC  @ =gRam
	ldr r1, _080E1EC0  @ =0x00001052
	add r3, r4, r1
	add r3, r0, r3
	ldrb r1, [r3]
	add r1, r1, #1
	strb r1, [r3]
	lsl r1, r1, #24
	lsr r1, r1, #27
	mov r5, #3
	and r1, r1, r5
	mov r6, #150
	lsl r6, r6, #4
	add r2, r4, r6
	strb r1, [r2]
	ldr r1, _080E1EC4  @ =0x00000F92
	add r2, r4, r1
	add r2, r0, r2
	ldr r6, _080E1EC8  @ =gUnknown_08176918
	ldrb r1, [r3]
	lsr r1, r1, #3
	and r1, r1, r5
	ldr r3, _080E1ECC  @ =0x00000FB2
	add r4, r4, r3
	add r0, r0, r4
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r1, r1, r0
	add r1, r1, r6
	ldrb r0, [r1]
	strb r0, [r2]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E1EBC:
	.4byte gRam
_080E1EC0:
	.4byte 0x00001052
_080E1EC4:
	.4byte 0x00000F92
_080E1EC8:
	.4byte gUnknown_08176918
_080E1ECC:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_080E1E70

