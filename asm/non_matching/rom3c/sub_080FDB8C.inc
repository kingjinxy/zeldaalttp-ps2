	THUMB_FUNC_START sub_080FDB8C
sub_080FDB8C: @ 0x080FDB8C
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080FDBBC  @ =gRam
	ldr r1, _080FDBC0  @ =0x00001AE2
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080FDBC8
	mov r1, #158
	lsl r1, r1, #1
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9564
	ldr r0, _080FDBC4  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080FDBD2
	.byte 0x00
	.byte 0x00
_080FDBBC:
	.4byte gRam
_080FDBC0:
	.4byte 0x00001AE2
_080FDBC4:
	.4byte 0x00000F52
_080FDBC8:
	ldr r1, _080FDBDC  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #5
	strb r1, [r0]
_080FDBD2:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FDBDC:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080FDB8C

