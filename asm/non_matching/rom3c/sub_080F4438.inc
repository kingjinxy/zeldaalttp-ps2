	THUMB_FUNC_START sub_080F4438
sub_080F4438: @ 0x080F4438
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r4, r2, #0
	ldr r5, _080F4464  @ =gRam
	ldr r1, _080F4468  @ =0x00000EE2
	add r0, r5, r1
	add r0, r2, r0
	ldr r3, _080F446C  @ =0x000016C4
	add r1, r5, r3
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _080F4470
	add r0, r2, #0
	mov r1, #211
	mov r2, sp
	bl sub_080C94F4
	b _080F44C4
	.byte 0x00
	.byte 0x00
_080F4464:
	.4byte gRam
_080F4468:
	.4byte 0x00000EE2
_080F446C:
	.4byte 0x000016C4
_080F4470:
	add r0, r4, #0
	mov r1, #207
	mov r2, sp
	bl sub_080C94F4
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F44C4
	ldr r0, _080F44CC  @ =0x00001082
	add r1, r5, r0
	add r1, r4, r1
	mov r0, sp
	ldrb r0, [r0]
	mov r2, #0
	strb r0, [r1]
	ldr r1, _080F44D0  @ =0x00000FB2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, sp
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r3, _080F44D4  @ =0x00000F52
	add r1, r5, r3
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080F44D8  @ =gUnknown_0200EE18
	strb r2, [r0]
	add r0, r0, #1
	strb r2, [r0]
	add r0, r0, #1
	strb r2, [r0]
	add r0, r0, #1
	strb r2, [r0]
	ldr r1, _080F44DC  @ =0x00000F62
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	ldr r3, _080F44E0  @ =0x00000CB4
	add r0, r5, r3
	strb r2, [r0]
_080F44C4:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_080F44CC:
	.4byte 0x00001082
_080F44D0:
	.4byte 0x00000FB2
_080F44D4:
	.4byte 0x00000F52
_080F44D8:
	.4byte gUnknown_0200EE18
_080F44DC:
	.4byte 0x00000F62
_080F44E0:
	.4byte 0x00000CB4
	THUMB_FUNC_END sub_080F4438

