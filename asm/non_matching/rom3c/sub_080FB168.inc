	THUMB_FUNC_START sub_080FB168
sub_080FB168: @ 0x080FB168
	push {r4,lr}
	sub sp, sp, #4
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	mov r1, #143
	lsl r1, r1, #1
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9564
	ldr r0, _080FB194  @ =gRam
	ldr r1, _080FB198  @ =0x00000F52
	add r0, r0, r1
	add r4, r4, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
_080FB194:
	.4byte gRam
_080FB198:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080FB168

