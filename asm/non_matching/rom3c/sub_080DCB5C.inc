	THUMB_FUNC_START sub_080DCB5C
sub_080DCB5C: @ 0x080DCB5C
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080DCB80  @ =gRam
	ldr r1, _080DCB84  @ =0x00000FD2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r0, r1, #0
	cmp r0, #0
	beq _080DCB8C
	cmp r0, #16
	bne _080DCBB8
	ldr r2, _080DCB88  @ =0x00001643
	add r0, r5, r2
	strb r1, [r0]
	b _080DCBB8
_080DCB80:
	.4byte gRam
_080DCB84:
	.4byte 0x00000FD2
_080DCB88:
	.4byte 0x00001643
_080DCB8C:
	mov r1, #138
	lsl r1, r1, #1
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9564
	bl sub_08132448
	ldr r1, _080DCBC0  @ =0x0000099B
	add r0, r5, r1
	mov r2, #1
	strb r2, [r0]
	ldr r0, _080DCBC4  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080DCBC8  @ =gMagicUsage
	strb r2, [r0]
	bl sub_080AA724
_080DCBB8:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_080DCBC0:
	.4byte 0x0000099B
_080DCBC4:
	.4byte 0x00000F52
_080DCBC8:
	.4byte gMagicUsage
	THUMB_FUNC_END sub_080DCB5C

