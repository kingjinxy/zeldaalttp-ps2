	THUMB_FUNC_START sub_080FCB64
sub_080FCB64: @ 0x080FCB64
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r5, _080FCBD4  @ =gRam
	ldr r2, _080FCBD8  @ =0x00000FE2
	add r1, r5, r2
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	cmp r0, #0
	beq _080FCBCA
	ldr r1, _080FCBDC  @ =gUnknown_0817A958
	lsr r0, r0, #26
	add r0, r0, r1
	ldrb r0, [r0]
	ldr r3, _080FCBE0  @ =0x0000096C
	add r4, r5, r3
	strb r0, [r4]
	mov r0, #4
	bl sub_080CF388
	ldr r0, _080FCBE4  @ =gUnknown_03003E74
	ldrh r0, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r1, r5, r2
	ldrh r1, [r1]
	ldr r3, _080FCBE8  @ =0x00000964
	add r2, r5, r3
	ldrh r3, [r2]
	add r3, r3, #19
	mov r2, #0
	ldrsb r2, [r4, r2]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r4, _080FCBEC  @ =0x00000969
	add r3, r5, r4
	ldrb r4, [r3]
	mov r3, #11
	eor r4, r4, r3
	lsl r4, r4, #24
	mov r3, #202
	lsl r3, r3, #16
	orr r3, r3, r4
	lsr r3, r3, #16
	mov r4, #2
	str r4, [sp]
	bl sub_080C6004
_080FCBCA:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FCBD4:
	.4byte gRam
_080FCBD8:
	.4byte 0x00000FE2
_080FCBDC:
	.4byte gUnknown_0817A958
_080FCBE0:
	.4byte 0x0000096C
_080FCBE4:
	.4byte gUnknown_03003E74
_080FCBE8:
	.4byte 0x00000964
_080FCBEC:
	.4byte 0x00000969
	THUMB_FUNC_END sub_080FCB64

