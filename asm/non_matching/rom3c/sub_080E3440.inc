	THUMB_FUNC_START sub_080E3440
sub_080E3440: @ 0x080E3440
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080E347C  @ =gRam
	ldr r1, _080E3480  @ =0x00001052
	add r2, r3, r1
	add r2, r0, r2
	ldrb r1, [r2]
	add r1, r1, #1
	strb r1, [r2]
	ldr r2, _080E3484  @ =0x00000F92
	add r4, r3, r2
	add r4, r0, r4
	ldr r5, _080E3488  @ =gUnknown_08176E78
	lsl r1, r1, #24
	lsr r1, r1, #26
	mov r2, #7
	and r1, r1, r2
	ldr r2, _080E348C  @ =0x00000FB2
	add r3, r3, r2
	add r0, r0, r3
	ldrb r0, [r0]
	lsl r0, r0, #3
	orr r1, r1, r0
	add r1, r1, r5
	ldrb r0, [r1]
	strb r0, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
_080E347C:
	.4byte gRam
_080E3480:
	.4byte 0x00001052
_080E3484:
	.4byte 0x00000F92
_080E3488:
	.4byte gUnknown_08176E78
_080E348C:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_080E3440

