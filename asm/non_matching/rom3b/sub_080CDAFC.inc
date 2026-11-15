	THUMB_FUNC_START sub_080CDAFC
sub_080CDAFC: @ 0x080CDAFC
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r8, r4
	add r0, r4, #0
	bl sub_080CD8BC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080CDB72
	ldr r1, _080CDB80  @ =gUnknown_08172DFF
	ldr r7, _080CDB84  @ =gRam
	ldr r2, _080CDB88  @ =0x0000131C
	add r0, r7, r2
	add r0, r4, r0
	ldrb r4, [r0]
	add r1, r4, r1
	ldrb r6, [r1]
	ldr r3, _080CDB8C  @ =0x00000B36
	add r0, r7, r3
	ldrh r0, [r0]
	cmp r0, #32
	bne _080CDB38
	add r0, r6, #0
	add r0, r0, #128
	lsl r0, r0, #24
	lsr r6, r0, #24
_080CDB38:
	ldr r0, _080CDB90  @ =gUnknown_03003E74
	ldrh r0, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r1, r7, r2
	ldrh r1, [r1]
	ldr r3, _080CDB94  @ =0x00000964
	add r2, r7, r3
	ldrh r2, [r2]
	ldr r3, _080CDB98  @ =gUnknown_08172E07
	add r3, r4, r3
	ldrb r5, [r3]
	ldr r4, _080CDB9C  @ =0x00000996
	add r3, r7, r4
	ldrb r3, [r3]
	lsl r3, r3, #1
	mov r4, #14
	and r3, r3, r4
	orr r5, r5, r3
	lsl r5, r5, #8
	orr r6, r6, r5
	mov r3, #2
	str r3, [sp]
	add r3, r6, #0
	bl sub_080C6004
	mov r0, r8
	bl sub_080CDBA0
_080CDB72:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CDB80:
	.4byte gUnknown_08172DFF
_080CDB84:
	.4byte gRam
_080CDB88:
	.4byte 0x0000131C
_080CDB8C:
	.4byte 0x00000B36
_080CDB90:
	.4byte gUnknown_03003E74
_080CDB94:
	.4byte 0x00000964
_080CDB98:
	.4byte gUnknown_08172E07
_080CDB9C:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080CDAFC

