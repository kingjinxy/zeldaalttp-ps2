	THUMB_FUNC_START sub_080D28C8
sub_080D28C8: @ 0x080D28C8
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080D2900  @ =gRam
	ldr r1, _080D2904  @ =0x00000F92
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #236
	mov r2, sp
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D28F6
	ldr r1, _080D2908  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #3
	strb r1, [r0]
_080D28F6:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D2900:
	.4byte gRam
_080D2904:
	.4byte 0x00000F92
_080D2908:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D28C8

