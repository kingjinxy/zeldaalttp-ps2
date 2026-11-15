	THUMB_FUNC_START sub_080FB7C8
sub_080FB7C8: @ 0x080FB7C8
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080FB830  @ =gRam
	ldr r1, _080FB834  @ =0x00000F72
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	bne _080FB826
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r4, #0
	bl sub_080C632C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080FB826
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080FB826
	add r0, r4, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bne _080FB826
	ldr r1, _080FB838  @ =0x00001182
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #9
	bne _080FB826
	mov r1, #188
	lsl r1, r1, #4
	add r0, r5, r1
	ldrh r1, [r0]
	add r1, r1, #1
	strh r1, [r0]
	mov r0, #1
	strb r0, [r6]
_080FB826:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FB830:
	.4byte gRam
_080FB834:
	.4byte 0x00000F72
_080FB838:
	.4byte 0x00001182
	THUMB_FUNC_END sub_080FB7C8

