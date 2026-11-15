	THUMB_FUNC_START sub_080E2FA4
sub_080E2FA4: @ 0x080E2FA4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl sub_080E2614
	ldr r6, _080E2FD8  @ =gRam
	ldr r1, _080E2FDC  @ =0x00000FE2
	add r0, r6, r1
	add r2, r4, r0
	ldrb r1, [r2]
	cmp r1, #0
	bne _080E2FC8
	ldr r3, _080E2FE0  @ =0x00000F52
	add r0, r6, r3
	add r0, r4, r0
	strb r1, [r0]
_080E2FC8:
	ldrb r0, [r2]
	cmp r0, #15
	bls _080E2FE4
	add r0, r4, #0
	bl sub_080E2F38
	b _080E3012
	.byte 0x00
	.byte 0x00
_080E2FD8:
	.4byte gRam
_080E2FDC:
	.4byte 0x00000FE2
_080E2FE0:
	.4byte 0x00000F52
_080E2FE4:
	ldr r4, _080E3018  @ =0x00001052
	add r0, r6, r4
	add r0, r5, r0
	ldrb r1, [r0]
	add r1, r1, #2
	strb r1, [r0]
	ldr r0, _080E301C  @ =0x00000F92
	add r2, r6, r0
	add r2, r5, r2
	ldr r3, _080E3020  @ =gUnknown_08176E78
	lsl r1, r1, #24
	lsr r1, r1, #26
	mov r0, #7
	and r1, r1, r0
	sub r4, r4, #160
	add r0, r6, r4
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #3
	orr r1, r1, r0
	add r1, r1, r3
	ldrb r0, [r1]
	strb r0, [r2]
_080E3012:
	pop {r4-r6}
	pop {r0}
	bx r0
_080E3018:
	.4byte 0x00001052
_080E301C:
	.4byte 0x00000F92
_080E3020:
	.4byte gUnknown_08176E78
	THUMB_FUNC_END sub_080E2FA4

