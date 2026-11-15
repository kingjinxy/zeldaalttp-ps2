	THUMB_FUNC_START sub_080C63E4
sub_080C63E4: @ 0x080C63E4
	push {r4-r7,lr}
	sub sp, sp, #4
	ldr r4, [sp, #24]
	lsl r0, r0, #16
	lsr r7, r0, #16
	lsl r1, r1, #16
	lsr r5, r1, #16
	lsl r2, r2, #16
	lsr r2, r2, #16
	lsl r3, r3, #16
	lsr r6, r3, #16
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r1, r5, #0
	add r1, r1, #128
	ldr r0, _080C6414  @ =0x0000017F
	cmp r1, r0
	bgt _080C6410
	add r0, r2, #0
	add r0, r0, #16
	cmp r0, #255
	ble _080C6418
_080C6410:
	mov r3, #240
	b _080C642C
_080C6414:
	.4byte 0x0000017F
_080C6418:
	add r3, r2, #0
	ldr r1, _080C6444  @ =gRam
	ldr r2, _080C6448  @ =0x00000965
	add r0, r1, r2
	ldrb r2, [r0]
	mov r0, #1
	and r0, r0, r2
	ldr r2, _080C644C  @ =0x00001735
	add r1, r1, r2
	strb r0, [r1]
_080C642C:
	str r4, [sp]
	add r0, r7, #0
	add r1, r5, #0
	add r2, r3, #0
	add r3, r6, #0
	bl sub_080C6004
	add sp, sp, #4
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080C6444:
	.4byte gRam
_080C6448:
	.4byte 0x00000965
_080C644C:
	.4byte 0x00001735
	THUMB_FUNC_END sub_080C63E4

