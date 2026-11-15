	THUMB_FUNC_START sub_080DE634
sub_080DE634: @ 0x080DE634
	push {r4,lr}
	sub sp, sp, #4
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	mov r1, #54
	mov r2, sp
	bl sub_080C9564
	ldr r1, _080DE668  @ =gRam
	ldr r2, _080DE66C  @ =0x00000F52
	add r0, r1, r2
	add r4, r4, r0
	mov r0, #0
	strb r0, [r4]
	mov r0, #179
	lsl r0, r0, #5
	add r1, r1, r0
	mov r0, #3
	strb r0, [r1]
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DE668:
	.4byte gRam
_080DE66C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DE634

