	THUMB_FUNC_START sub_080E8748
sub_080E8748: @ 0x080E8748
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C5044
	ldr r6, _080E8780  @ =gRam
	ldr r1, _080E8784  @ =0x00000FC2
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	beq _080E8790
	cmp r0, #48
	bne _080E876C
	add r0, r4, #0
	bl sub_080E89E4
_080E876C:
	ldr r0, _080E8788  @ =0x00000F92
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _080E878C  @ =gUnknown_08177980
	ldrb r0, [r5]
	lsr r0, r0, #4
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _080E87A0
_080E8780:
	.4byte gRam
_080E8784:
	.4byte 0x00000FC2
_080E8788:
	.4byte 0x00000F92
_080E878C:
	.4byte gUnknown_08177980
_080E8790:
	ldr r1, _080E87A8  @ =0x00000F52
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #23
	strb r0, [r5]
_080E87A0:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E87A8:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E8748

