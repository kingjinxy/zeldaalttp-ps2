	THUMB_FUNC_START sub_080D2878
sub_080D2878: @ 0x080D2878
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	mov r1, #232
	mov r2, sp
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D289E
	ldr r1, _080D28A8  @ =gRam
	ldr r0, _080D28AC  @ =0x00000F52
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080D289E:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D28A8:
	.4byte gRam
_080D28AC:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D2878

