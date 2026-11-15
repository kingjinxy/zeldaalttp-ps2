	THUMB_FUNC_START sub_08114310
sub_08114310: @ 0x08114310
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _08114344  @ =gRam
	ldr r1, _08114348  @ =0x000016B5
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811434C
	mov r0, sp
	add r1, r4, #0
	bl sub_080C4948
	mov r0, sp
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811434C
	add r0, r4, #0
	mov r1, #203
	mov r2, #0
	bl sub_080C9564
	mov r0, #1
	b _0811434E
	.byte 0x00
	.byte 0x00
_08114344:
	.4byte gRam
_08114348:
	.4byte 0x000016B5
_0811434C:
	mov r0, #0
_0811434E:
	add sp, sp, #4
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08114310

	.byte 0x00
	.byte 0x00
