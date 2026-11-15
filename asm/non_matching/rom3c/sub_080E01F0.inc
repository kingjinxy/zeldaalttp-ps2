	THUMB_FUNC_START sub_080E01F0
sub_080E01F0: @ 0x080E01F0
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	add r7, r6, #0
	ldr r5, _080E0228  @ =gRam
	ldr r1, _080E022C  @ =0x00000996
	add r0, r5, r1
	ldrb r0, [r0]
	mov r4, #7
	and r4, r4, r0
	cmp r4, #0
	bne _080E0248
	bl sub_08133620
	ldr r2, _080E0230  @ =0x00000CF8
	add r0, r5, r2
	ldrh r0, [r0]
	cmp r0, #30
	beq _080E0238
	cmp r0, #0
	bne _080E0248
	ldr r0, _080E0234  @ =0x00000F52
	add r1, r5, r0
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080E0248
_080E0228:
	.4byte gRam
_080E022C:
	.4byte 0x00000996
_080E0230:
	.4byte 0x00000CF8
_080E0234:
	.4byte 0x00000F52
_080E0238:
	ldr r2, _080E0250  @ =0x00001062
	add r1, r5, r2
	add r1, r7, r1
	sub r2, r2, #192
	add r0, r5, r2
	ldrb r1, [r1]
	add r0, r0, r1
	strb r4, [r0]
_080E0248:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E0250:
	.4byte 0x00001062
	THUMB_FUNC_END sub_080E01F0

